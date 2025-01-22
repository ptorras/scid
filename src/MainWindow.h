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
 * Main wxWidgets menu for SCID.
 */
#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <wx/wxprec.h>
 
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

enum
{
    ID_Hello = 1
};


class MainWindow : public wxFrame
{
public:
    MainWindow();
 
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

#endif