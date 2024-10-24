#pragma once
#include "SDL2/SDL.h"

class App {

public:
	App();
	~App();
	void Run();

private:
	bool running = true;
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* app_event;
};

