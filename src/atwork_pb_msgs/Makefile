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

PROTOBUF_all = atwork_pb_msgs

MSGS_atwork_pb_msgs = $(notdir $(patsubst %.proto,%,$(wildcard $(SRCDIR)/*.proto)))
LIBS_all = $(LIBDIR)/protobuf/libatwork_pb_msgs.so
PKGCONFIG_all = $(PKGCONFDIR)/atwork_pb_msgs.pc

include $(BUILDSYSDIR)/protobuf.mk
include $(BUILDSYSDIR)/genpkgconfig.mk
include $(BUILDSYSDIR)/base.mk
