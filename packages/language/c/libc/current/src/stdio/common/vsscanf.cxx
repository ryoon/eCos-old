//===========================================================================
//
//      vsscanf.cxx
//
//      ANSI Stdio vsscanf() function
//
//===========================================================================
//####COPYRIGHTBEGIN####
//
// -------------------------------------------
// The contents of this file are subject to the Cygnus eCos Public License
// Version 1.0 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://sourceware.cygnus.com/ecos
// 
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied.  See the
// License for the specific language governing rights and limitations under
// the License.
// 
// The Original Code is eCos - Embedded Cygnus Operating System, released
// September 30, 1998.
// 
// The Initial Developer of the Original Code is Cygnus.  Portions created
// by Cygnus are Copyright (C) 1998 Cygnus Solutions.  All Rights Reserved.
// -------------------------------------------
//
//####COPYRIGHTEND####
//===========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):   jlarmour
// Contributors:  jlarmour@cygnus.co.uk
// Date:        1998-02-13
// Purpose:     
// Description: 
// Usage:       
//
//####DESCRIPTIONEND####
//
//===========================================================================

// CONFIGURATION

#include <pkgconf/libc.h>   // Configuration header

// Include the C library? And do we want the stdio stuff?
#if defined(CYGPKG_LIBC) && defined(CYGPKG_LIBC_STDIO)

// INCLUDES

#include <cyg/infra/cyg_type.h>     // Common project-wide type definitions
#include <stddef.h>                 // NULL and size_t from compiler
#include <stdio.h>                  // header for this file
#include <errno.h>                  // error codes
#include <cyg/devs/common/table.h>  // Device table stuff
#include <cyg/devs/common/iorb.h>   // IORBs
#include "clibincl/stdiosupp.hxx"   // Support functions for stdio
#include "clibincl/stream.hxx"      // Cyg_StdioStream


// EXPORTED SYMBOLS

externC int
vsscanf( const char *, const char *, va_list )
    CYGPRI_LIBC_WEAK_ALIAS("_vsscanf");

// FUNCTIONS

static Cyg_ErrNo
str_read( CYG_ADDRWORD cookie, Cyg_IORB *iorb )
{
    cyg_uint8 **str_p = (cyg_uint8 **) cookie;
    cyg_ucount32 i;

    // we set *str_p to NULL further down when the string has finished being
    // read
    if (*str_p == NULL)
    {
        iorb->xferred_length = 0;
        return ENOERR;
    } // if

    // I suspect most strings passed to sprintf will be relatively short,
    // so we just take the simple approach rather than have the overhead
    // of calling memcpy etc.

    // copy string until run out of user space, or we reach its end
    for (i=0; (i < iorb->buffer_length) ; ++i)
    {
        *((char *)iorb->buffer + i) = **str_p;

        if (**str_p == '\0')
        {
            *str_p = NULL;
            ++i;
            break;
        } // if

        ++(*str_p);
    } // for

    iorb->xferred_length = i;

    return ENOERR;
    
} // str_read()


externC int
_vsscanf( const char *s, const char *format, va_list arg )
{
    // construct a fake device with the address of the string we've
    // been passed as its private data. This way we can use the data
    // directly
    struct Cyg_Device_Table_t strdev = { "strdev",
                                         (CYG_ADDRWORD) &s,
                                         NULL,       // open
                                         NULL,       // read_cancel
                                         NULL,       // write_cancel
                                         &str_read,  // read_blocking
                                         NULL,       // write_blocking
                                         NULL,       // read_asynchronous
                                         NULL,       // write_asynchronous
                                         NULL,       // close
                                         0 };        // ioctl
    Cyg_StdioStream my_stream( &strdev, Cyg_StdioStream::CYG_STREAM_READ,
                               false, false, _IONBF, 0, NULL );
    
    return _vfscanf( (FILE *)&my_stream, format, arg );

} // _vsscanf()

#endif // if defined(CYGPKG_LIBC) && defined(CYGPKG_LIBC_STDIO)

// EOF vsscanf.cxx
