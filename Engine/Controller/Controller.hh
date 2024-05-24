#pragma once

class Controller
{
public:
	enum EState : short
	{
		NotPressed = 0,
		Released,
		Pressed,
		Held
	};
};