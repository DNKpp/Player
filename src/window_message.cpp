/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "window_message.h"

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
Window_Message::Window_Message() :
	Window_Selectable(80, 304, 480, 160)
{
	contents = new Bitmap(width - 32, height - 32);
	visible = false;
	z = 9998;
	fade_in = false;
	fade_out = false;
	contents_showing = false;
	cursor_width = 0;
	active = false;
	index = -1;
}

////////////////////////////////////////////////////////////
/// Destructor
////////////////////////////////////////////////////////////
Window_Message::~Window_Message() {
	TerminateMessage();
	//Game_Temp::message_window_showing = false;
	/*if (input_number_window != NULL) {
		input_number_window.dispose
	}*/
}

////////////////////////////////////////////////////////////
/// Terminate Message
////////////////////////////////////////////////////////////
void Window_Message::TerminateMessage() {

}

////////////////////////////////////////////////////////////
/// Refresh
////////////////////////////////////////////////////////////
void Window_Message::Refresh() {

}

////////////////////////////////////////////////////////////
/// Reset Window
////////////////////////////////////////////////////////////
void Window_Message::ResetWindow() {

}

////////////////////////////////////////////////////////////
/// Update
////////////////////////////////////////////////////////////
void Window_Message::Update() {

}

////////////////////////////////////////////////////////////
/// Update Cursor Rect
////////////////////////////////////////////////////////////
void Window_Message::UpdateCursorRect() {

}
