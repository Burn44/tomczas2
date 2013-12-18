#include <SDL.h>
#include "klasy.h"

void postac::poruszanie()
{


}

void przycisk::wgraj_przycisk(int x, int y, SDL_Surface* surface, SDL_Surface* przeznaczenie)
{
	ksztalt.x = x;
	ksztalt.y = y;

	SDL_BlitSurface(surface, NULL, przeznaczenie, &ksztalt);
}