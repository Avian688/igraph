/* -*- mode: C -*-  */
/*
   IGraph library.
   Copyright (C) 2011-2022  The igraph development team

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
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301 USA

*/

#ifndef IGRAPH_CONFIG_H
#define IGRAPH_CONFIG_H

#include "igraph_decls.h"

__BEGIN_DECLS

/**
 * \define IGRAPH_INTEGER_SIZE
 *
 * Specifies the size of igraph's integer data type; must be one of 32 (for
 * 32-bit integers) or 64 (for 64-bit integers).
 */
#define IGRAPH_INTEGER_SIZE 64

#define IGRAPH_DEPRECATED_ENUMVAL __attribute__ ((deprecated))

__END_DECLS

#endif
