/*
	Windows 10 - 11
	SchumakerTeam
	Hudson Schumaker
*/

#pragma once
#include "Event.h"

class KeyReleasedEvent : public Event {
public:
    SDL_Keycode symbol;
    KeyReleasedEvent(SDL_Keycode symbol) : symbol(symbol) {}
};