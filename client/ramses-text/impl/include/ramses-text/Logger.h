//  -------------------------------------------------------------------------
//  Copyright (C) 2018 BMW Car IT GmbH
//  -------------------------------------------------------------------------
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at https://mozilla.org/MPL/2.0/.
//  -------------------------------------------------------------------------

#ifndef RAMSES_LOGGER_H
#define RAMSES_LOGGER_H

#include <iostream>

#define LOG_TEXT_ERROR(msg) \
    { \
        std::cerr << msg << std::endl; \
    }

#endif
