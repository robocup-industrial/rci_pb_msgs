#*****************************************************************************
#
#   This program is free software; you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation; either version 2 of the License, or
#   (at your option) any later version.
#
#*****************************************************************************

BASEDIR = ..

include $(BASEDIR)/etc/buildsys/config.mk

SUBDIRS = atwork_pb_msgs atwork_device_pb_msgs rcll_pb_msgs 

# Explicit dependencies, this is needed to have make bail out if there is any
# error. This is also necessary for working parallel build (i.e. for dual core)

include $(BUILDSYSDIR)/base.mk
