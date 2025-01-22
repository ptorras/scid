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


#include "MainWindow.h"


MainWindow::MainWindow()
        : wxFrame(NULL, wxID_ANY, "Hello World")
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
 
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
 
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
 
    SetMenuBar(menuBar);
 
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
 
	Bind(wxEVT_MENU, &MainWindow::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MainWindow::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MainWindow::OnExit, this, wxID_EXIT);
}

void MainWindow::OnExit(wxCommandEvent& event)
{
    Close(true);
}


void MainWindow::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}

void MainWindow::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}