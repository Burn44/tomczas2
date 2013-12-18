#include <SDL.h>
#include "funkcje.h"
#include "klasy.h"

// Tworzy okno
bool init(SDL_Window* siemek, SDL_Surface* siemekSurface)
{
	siemek = SDL_CreateWindow("Shit Happens", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1920, 1080, SDL_WINDOW_SHOWN);

	siemekSurface = SDL_GetWindowSurface(siemek);
	return true;
}


// Wczytuje na ekran obrazek z Surface
void wgraj_surface(int x, int y, SDL_Surface* surface, SDL_Surface* przeznaczenie)
{
	SDL_Rect polozenie;

	polozenie.x = x;
	polozenie.y = y;

	SDL_BlitSurface(surface, NULL, przeznaczenie, &polozenie);
}
