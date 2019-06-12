#ifndef START_H
#define START_H
/*
	Funkcja menu_start zwraca liczbe odpowiadajaca trybowi jaki ma zostac
	aktywowany w glownej petli.
	Legenda:
	0 - zamykamy program
	1 - learning(), tryb uczenia
	2 - easy_mode(), litery
	3 - medium_mode(), slowa
	4 - hard_mode(), zdania
*/
int menu_start(sf::RenderWindow&, int, int);

#endif /*START_H*/
