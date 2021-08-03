#include <ncurses.h>
#include <stdlib.h>

int main(){

	int a, b;
	int somma;

	initscr();

	curs_set(1);
	echo();

	attron(A_BOLD);
	mvprintw(6, 25, "Facciamo la somma di 2 numeri");
	attroff(A_BOLD);

	mvprintw(8, 26, "Inserisci il primo numero: ");
	attron(A_BOLD);
	scanw("%d", &a);
	attroff(A_BOLD);

	mvprintw(9, 25, "Inserisci il secondo numero: ");
	attron(A_BOLD);
	scanw("%d", &b);
	attroff(A_BOLD);

	somma = a + b;

	attron(A_BOLD);
	mvprintw(11, 33, "La somma: ");
	attron(A_STANDOUT);
	printw(" %d ", somma);
	attroff(A_STANDOUT);
	attroff(A_BOLD);
	printw("\n");

	refresh();

	getch();

	endwin();

	return 0;
}