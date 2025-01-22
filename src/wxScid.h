/*
 * Copyright (C) 2025  Pau Torras

 * This file is part of Scid (Shane's Chess Information Database).
 *
 * Scid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 *
 * Scid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Scid.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/** @file
 * Implementation of a wxWidgets-based UI for Scid.
 */

#ifndef WX_SCID_H
#define WX_SCID_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "MainWindow.h"


class wxScid : public wxApp
{
public:
    virtual bool OnInit();
};

#endif
