#*****************************************************************************
#             Makefile Build System for Fawkes : Protobuf Messages
#                            -------------------
#   Created on Wed Jan 16 17:43:33 2013
#   Copyright (C) 2006-2008 by Tim Niemueller, Carologistics RoboCup Team
#
#*****************************************************************************
#
#   This program is free software; you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation; either version 2 of the License, or
#   (at your option) any later version.
#
#*****************************************************************************

BASEDIR = ../..

include $(BASEDIR)/etc/buildsys/config.mk

PROTOBUF_all = rcll_pb_msgs

MSGS_rcll_pb_msgs = $(notdir $(patsubst %.proto,%,$(wildcard $(SRCDIR)/*.proto)))
LIBS_all = $(LIBDIR)/protobuf/rcll_pb_msgs.so
PKGCONFIG_all = $(PKGCONFDIR)/rcll_pb_msgs.pc

MachineReport.pb.cpp: | Team.pb.cpp

include $(BUILDSYSDIR)/protobuf.mk
include $(BUILDSYSDIR)/genpkgconfig.mk
include $(BUILDSYSDIR)/base.mk
