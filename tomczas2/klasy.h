#ifndef klasy_h
#define klasy_h

// Posta�
class postac
{
private:
	SDL_Rect ksztalt;

	int x = 0;
	int y = 0;

public:
	void poruszanie(); // Poruszanie si� postaci�

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