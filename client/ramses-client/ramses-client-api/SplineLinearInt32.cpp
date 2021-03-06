//  -------------------------------------------------------------------------
//  Copyright (C) 2014 BMW Car IT GmbH
//  -------------------------------------------------------------------------
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at https://mozilla.org/MPL/2.0/.
//  -------------------------------------------------------------------------

// API
#include "ramses-client-api/SplineLinearInt32.h"

// internal
#include "SplineImpl.h"

namespace ramses
{
    SplineLinearInt32::SplineLinearInt32(SplineImpl& pimpl)
        : Spline(pimpl)
    {
    }

    SplineLinearInt32::~SplineLinearInt32()
    {
    }

    status_t SplineLinearInt32::setKey(splineTimeStamp_t timeStamp, int32_t value)
    {
        const status_t status = impl.setSplineKeyLinearInt32(timeStamp, value);
        LOG_HL_CLIENT_API2(status, timeStamp, value)
        return status;
    }

    status_t SplineLinearInt32::getKeyValues(splineKeyIndex_t keyIndex, splineTimeStamp_t& timeStamp, int32_t& value) const
    {
        return impl.getSplineKeyInt32(keyIndex, timeStamp, value);
    }
}
