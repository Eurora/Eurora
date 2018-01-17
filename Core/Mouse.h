/*
Copyright 2018 Eurora Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 17/01/2018(dd/mm/yyyy)
Version: 1.01
*/
#pragma once

#include <Eurora\Types.h>

namespace Eurora
{
	//The updated Mouse Position
	U16 MousePosition[2] = {};
	//Returns 1 if left-button of the mouse is pressed
	Bit LeftButton();
	//Returns 1 if mid-button of the mouse is pressed
	Bit MidButton();
	//Returns 1 if right-button of the mouse is pressed
	Bit RightButton();
	//Returns Mouse Wheel delta value - NOTE: If that function is used in Android/iOS/PS4/XB1/Switch will return 0 and log a debug warning
	S16 MouseWheel();
	//Returns mouse position on screen coordinates to the variable MousePosition
	void UpdateMousePosition();
}
