#include <SDL.h>
#include <iostream>
#include <string>
#include "klasy.h"
#include "funkcje.h"

// Zmienne globalne ogólne
SDL_Window* gWindow = NULL;


// Globalne Surface
SDL_Surface* gScreenSurface = NULL;

SDL_Surface* tlo_menu_glownego = NULL;
SDL_Surface* start_gry = NULL;
SDL_Surface* koniec_gry = NULL;

bool loadmedia()
{
	start_gry = SDL_LoadBMP("start_gry.bmp");
	koniec_gry = SDL_LoadBMP("koniec.bmp");
	tlo_menu_glownego = SDL_LoadBMP("tlo_menu_glownego.bmp");
	return true;
}

// MAIN

int main(int argc, char** argv)
{
	bool quit = false; // Flaga zamykaj¹ca g³ówn¹ pêtle
	bool pierwszy_raz = false;


	przycisk zaczyjanacy_gre;
	przycisk konczacy_gre;

	SDL_Event wydarzenie;

	init(gWindow, gScreenSurface); // Tworzy okno
	loadmedia(); // Wczytuje wszystkie obrazy
	if (!loadMedia()) { printf("Failed to load media!\n"); }
	while (!quit) // G³ówna Pêtla
	{
		SDL_BlitSurface(tlo_menu_glownego, NULL, gScreenSurface, NULL);
		SDL_UpdateWindowSurface(gWindow);
		if (!pierwszy_raz)
		{
			zaczyjanacy_gre.wgraj_przycisk(290, 480, start_gry, gScreenSurface);
			SDL_UpdateWindowSurface(gWindow);
			konczacy_gre.wgraj_przycisk(290, 960, koniec_gry, gScreenSurface);
			SDL_UpdateWindowSurface(gWindow);
			pierwszy_raz = true;
		}

	}
	return 0;
}