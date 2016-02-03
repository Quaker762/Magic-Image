/*+===================================================================
  File:     CWindow.h

  Summary:  Window Class.

  Author:   Quaker762

  Revision History:
        3/2/2016: Initial Revision

----------------------------------------------------------------------
  Copyright 2015-2016 Radial Technologies, Pty Ltd
===================================================================+*/
#ifndef CWINDOW_HPP_INCLUDED
#define CWINDOW_HPP_INCLUDED

#include <stdint.h> //GCC integer definitions

//We are compiling on a WIN32 based system
#ifdef _WIN32
    #include <windows.h> //Windows API header file
#elif __linux__

#else
    #error Window for platform unsupported!
#endif

class CWindow
{
public:
    CWindow(uint32_t width, uint32_t height, const char* title); //Constructor. Initialises the window
    ~CWindow(); //Destructor
private:

};



#endif // CWINDOW_HPP_INCLUDED
