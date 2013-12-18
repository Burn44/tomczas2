#ifndef klasy_h
#define klasy_h

// Postaæ
class postac
{
private:
	SDL_Rect ksztalt;

	int x = 0;
	int y = 0;

public:
	void poruszanie(); // Poruszanie siê postaci¹

};

// Przycisk

class przycisk
{
private:
	SDL_Rect ksztalt;

	int x = 0;
	int y = 0;
public:

	void wgraj_przycisk(int x, int y, SDL_Surface* surface, SDL_Surface* przeznaczenie);

};

#endif