#include<curses.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

extern int y, x, c, highlight, wyb, wy2b, odpa, odpb, odpc, odpd, teldp, polnpol, pytdpubl, zmpyt, pytnr, oldpytnr, prawidlodp, mam, otgram, gra, przyj, fra, publa, publb, publc, publd, publrand;
extern float x1, x2u, x2d, y11, y2u, y2d, temp;
extern char imie[50];
extern WINDOW *pion1, *pion2up, *pion2dol;

void pion2dol_draw()
{
wclear(pion2dol);
wrefresh(pion2dol);
box(pion2dol, 0, 0);
mvwhline(pion2dol, 6, 1, 0, x2d-2);
mvwvline(pion2dol, 1, x2d/4, 0, 5);
mvwvline(pion2dol, 1, x2d/2, 0, 5);
mvwvline(pion2dol, 1, (3*x2d)/4, 0, 5);
if(polnpol == 1) mvwprintw(pion2dol, 3, (((x2d/4) - 5)/2), "%s", "50:50");
if(teldp == 1)
	{
	mvwprintw(pion2dol, 2, ((((x2d/4) - 7)/2)+(x2d/4)), "%s", "Telefon");
	mvwprintw(pion2dol, 3, ((((x2d/4) - 2)/2)+(x2d/4)), "%s", "do");
	mvwprintw(pion2dol, 4, ((((x2d/4) - 11)/2)+(x2d/4)), "%s", "przyjaciela");
	}
if(pytdpubl == 1)
	{
	mvwprintw(pion2dol, 2, ((((x2d/4) - 7)/2)+(x2d/2)), "%s", "Pytanie");
	mvwprintw(pion2dol, 3, ((((x2d/4) - 2)/2)+(x2d/2)), "%s", " do");
	mvwprintw(pion2dol, 4, ((((x2d/4) - 12)/2)+(x2d/2)), "%s", " publicznosci");
	}
if(zmpyt == 1) mvwprintw(pion2dol, 3, ((((x2d/4) - 14)/2)+(3*(x2d/4))), "%s", "Zmiana pytania");
mvwprintw(pion2dol, 8, (((x2d-2) - 9)/2), "%s", "REZYGNUJE");
wrefresh(pion2dol);
}
