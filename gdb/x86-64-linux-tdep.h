/* Target-dependent code for the x86-64.

   Copyright 2003
   Free Software Foundation, Inc.

   Contributed by Michal Ludvig, SuSE AG.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

#ifndef X86_64_LINUX_TDEP_H
#define X86_64_LINUX_TDEP_H

/* Fill GDB's register array with the general-purpose register values
   in *GREGSETP.  */

void x86_64_linux_supply_gregset (char *regp);

/* Fill register REGNO (if it is a general-purpose register) in
   *GREGSETPS with the value in GDB's register array.  If REGNO is -1,
   do this for all registers.  */

void x86_64_linux_fill_gregset (char *regp, int regno);

/* Given a GDB REGNUM, return the byte offset in the target's GREGs
   buffer, or -1 if there is no corresponding GREGSET / FPREGSET
   entry.  Given a -ve REGNUM, returns the GREG's upper bound.  */

extern long x86_64_linux_greg_offset (int regnum);

#endif /* x86-64-linux-tdep.h */
