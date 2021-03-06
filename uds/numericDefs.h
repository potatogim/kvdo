/*
 * Copyright (c) 2017 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA. 
 *
 * $Id: //eng/uds-releases/flanders/kernelLinux/uds/numericDefs.h#2 $
 */

#ifndef LINUX_KERNEL_NUMERIC_DEFS_H
#define LINUX_KERNEL_NUMERIC_DEFS_H 1

// Linux user mode defines these for us, but the linux kernel does not.
// Until we figure it out, this will let us make progress.
#define BIG_ENDIAN    4321
#define LITTLE_ENDIAN 1234
#define BYTE_ORDER    LITTLE_ENDIAN

#define bswap_16(x) \
  (__extension__                                                        \
   ({ register unsigned short int __v, __x = (unsigned short int) (x);  \
     __asm__ ("rorw $8, %w0"                                            \
              : "=r" (__v)                                              \
              : "0" (__x)                                               \
              : "cc");                                                  \
     __v; }))

#endif /* LINUX_KERNEL_NUMERIC_DEFS_H */
