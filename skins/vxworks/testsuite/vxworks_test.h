/*
 * Written by Gilles Chanteperdrix <gilles.chanteperdrix@laposte.net>.
 * Copyright (C) 2001,2002 IDEALX (http://www.idealx.com/).
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

#ifndef wxworks_test_h
#define wxworks_test_h

#include <vxworks/vxworks.h>
#include <xntest.h>

#define TEST_ASSERT_OK(expr)                                    \
do {                                                            \
    xnarch_printf(__FILE__ ":%d, " #expr " == OK\n", __LINE__); \
    if(!xntest_assert(((expr)==OK), #expr "== OK" ,             \
                      __FILE__, __LINE__ ))                     \
        printErrno(errno);                                      \
} while (0)

#endif /* !wxworks_test_h */
