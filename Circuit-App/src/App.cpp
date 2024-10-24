#include "App.h"

App::App() {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_WindowFlags flags = SDL_WINDOW_SHOWN;
	int w = 500,
		h = 400;
	window = SDL_CreateWindow("Circuit C++", (1920 - w) / 2, (1080 - h) / 2, w, h, flags);
	renderer = SDL_CreateRenderer(window, 0, 0);
};

App::~App() {
	SDL_Quit();
};

void App::Run() {
	while (running) {

		SDL_RenderClear(renderer);


	};
};
