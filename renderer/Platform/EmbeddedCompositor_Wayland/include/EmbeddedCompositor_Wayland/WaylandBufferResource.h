
//  -------------------------------------------------------------------------
//  Copyright (C) 2017 BMW Car IT GmbH
//  -------------------------------------------------------------------------
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at https://mozilla.org/MPL/2.0/.
//  -------------------------------------------------------------------------
#ifndef RAMSES_WAYLANDBUFFERRESOURCE_H
#define RAMSES_WAYLANDBUFFERRESOURCE_H

#include "EmbeddedCompositor_Wayland/WaylandResource.h"

namespace ramses_internal
{
    class WaylandBufferResource : public WaylandResource
    {
    public:
        WaylandBufferResource();
        WaylandBufferResource(wl_resource* resource, bool ownership);
        virtual void           bufferSendRelease();
        virtual int32_t        bufferGetSharedMemoryWidth() const;
        virtual int32_t        bufferGetSharedMemoryHeight() const;
        virtual const void*    bufferGetSharedMemoryData() const;
        virtual WaylandBufferResource* clone() const;
    };
}

#endif
