#include <stdlib.h>
#include <ncurses.h>

int main(){

	initscr();


	if(has_colors() == FALSE){
		endwin();
		exit(1);
	}

	start_color();

	/* crea la coppia testo rosso su sfondo nero e 
	* le assegna il codice 1
	*/
	init_pair(1, COLOR_RED, COLOR_BLUE);

	mvprintw(10, 32, "Hello, World!\n");
	/* usa attron per attivare la coppia 1 */
	attron(COLOR_PAIR(1));
	printw("A colori ...\n");


	/* testo sottolineato */
	attron(A_UNDERLINE);
	printw("Sottolineato\n");
	attroff(A_UNDERLINE);  /* disattiva */

	/* testo in grassetto */
	attron(A_BOLD);
	printw("Grassetto\n");
	attroff(A_BOLD);  /* disattiva */

	/* testo in evidenza */
	attron(A_STANDOUT);
	printw("In evidenza\n");
	attroff(A_STANDOUT);  /* disattiva */

	/* testo sottolineato e grassetto */
	attron(A_UNDERLINE | A_BOLD);
	printw("Sottolineato e grassetto\n");
	attroff(A_UNDERLINE | A_BOLD);  /* disattiva */
	attroff(COLOR_PAIR(1));

	refresh();

	getch();

	endwin();

	return 0;
}