
/***************************************************************************
 *  version.h - RoboCup Industrial Protobuf Messages version information
 *
 *  Created: Fri Aug 07 23:29:09 2009
 *  Copyright  2006-2016  Tim Niemueller [www.niemueller.de]
 *
 ****************************************************************************/

/*  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version. A runtime exception applies to
 *  this software (see LICENSE.GPL_WRE file mentioned below for details).
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  Read the full text in the LICENSE.GPL_WRE file in the doc directory.
 */

#ifndef __CORE_VERSION_H_
#define __CORE_VERSION_H_

#define RCI_PB_MSGS_VERSION_MAJOR  0
#define RCI_PB_MSGS_VERSION_MINOR  1 
#define RCI_PB_MSGS_VERSION_MICRO  0

#define RCI_PB_MSGS_VERSION_GT(major, minor) ((RCI_PB_MSGS_MAJOR_VERSION  > major) || (RCI_PB_MSGS_MAJOR_VERSION == major) && (RCI_PB_MSGS_MINOR_VERSION  > minor))
#define RCI_PB_MSGS_VERSION_GE(major, minor) ((RCI_PB_MSGS_MAJOR_VERSION  > major) || (RCI_PB_MSGS_MAJOR_VERSION == major) && (RCI_PB_MSGS_MINOR_VERSION >= minor))
#define RCI_PB_MSGS_VERSION_EQ(major, minor) ((RCI_PB_MSGS_MAJOR_VERSION == major) && (RCI_PB_MSGS_MINOR_VERSION == minor))
#define RCI_PB_MSGS_VERSION_NE(major, minor) ((RCI_PB_MSGS_MAJOR_VERSION != major) || (RCI_PB_MSGS_MINOR_VERSION != minor))
#define RCI_PB_MSGS_VERSION_LE(major, minor) ((RCI_PB_MSGS_MAJOR_VERSION  < major) || (RCI_PB_MSGS_MAJOR_VERSION == major) && (RCI_PB_MSGS_MINOR_VERSION <= minor))
#define RCI_PB_MSGS_VERSION_LT(major, minor) ((RCI_PB_MSGS_MAJOR_VERSION  < major) || (RCI_PB_MSGS_MAJOR_VERSION == major) && (RCI_PB_MSGS_MINOR_VERSION  < minor))

#define RCI_PB_MSGS_VERSION_GT_MICRO(major, minor, micro)			\
  ((RCI_PB_MSGS_MAJOR_VERSION  > major) ||					\
   (RCI_PB_MSGS_MAJOR_VERSION == major) && (RCI_PB_MSGS_MINOR_VERSION  > minor) || \
   (RCI_PB_MSGS_MAJOR_VERSION == major) && (RCI_PB_MSGS_MINOR_VERSION == minor) && (RCI_PB_MSGS_MICRO_VERSION > minor))

#define RCI_PB_MSGS_VERSION_xstr(s) RCI_PB_MSGS_VERSION_str(s)
#define RCI_PB_MSGS_VERSION_str(s) #s

#define RCI_PB_MSGS_VERSION_STRING \
  RCI_PB_MSGS_VERSION_xstr(RCI_PB_MSGS_VERSION_MAJOR) "."	 \
  RCI_PB_MSGS_VERSION_xstr(RCI_PB_MSGS_VERSION_MINOR) "."  \
  RCI_PB_MSGS_VERSION_xstr(RCI_PB_MSGS_VERSION_MICRO)

#endif
