/*********************************************************************
 * Name:      	main.h
 * Purpose:   	Declares simple wxWidgets application with GUI
 * 				created using wxFormBuilder.
 * Author:
 * Created:
 * Copyright:
 * License:   	wxWidgets license (www.wxwidgets.org)
 *
 * Notes:		Note that all GUI creation code is declared in
 * 				gui.h source file which is generated by wxFormBuilder.
 *********************************************************************/

#ifndef __main__
#define __main__

// main wxWidgets header file
#include <wx/wx.h>
// gui classes generated by wxFormBuilder
#include "gui.h"

////////////////////////////////////////////////////////////////////////////////
// application class declaration
////////////////////////////////////////////////////////////////////////////////

class MainApp : public wxApp
{
public:
    virtual bool OnInit();
};

// declare global static function wxGetApp()
DECLARE_APP(MainApp)

////////////////////////////////////////////////////////////////////////////////
// main application frame declaration
////////////////////////////////////////////////////////////////////////////////

class MainFrame : public MainFrameBase
{
public:
    MainFrame(wxWindow* parent);
    virtual ~MainFrame();

protected:
    // protected event handlers
    virtual void OnCloseFrame(
        wxCloseEvent& event); // Копируем сюда из gui.h те методы, которые хотим реально реализовать
    virtual void myClick(wxCommandEvent& event); // иначе все обявленные методы в gui.h останутся "пустыми"
};

#endif //__main__