#include <ncurses.h>
#include <stdlib.h>

int main(){

	initscr();

	if(has_colors() == FALSE){
		endwin();
		exit(1);
	}

	start_color();

	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(4, COLOR_BLUE, COLOR_BLACK);

	attron(COLOR_PAIR(1));
	mvprintw(10, 5, "I ");
	attron(A_BOLD);
	printw("computer");
	attroff(A_BOLD);
	printw(" sono incredibilmente ");
	attron(A_UNDERLINE);
	attron(A_BOLD);
	printw("veloci");
	attroff(A_BOLD);
	printw(", accurati e ");
	attron(A_BOLD);
	printw("stupidi");
	attroff(A_BOLD);
	printw(".\n");
	attroff(A_UNDERLINE);
	attroff(COLOR_PAIR(1));

	attron(COLOR_PAIR(2));
	mvprintw(11, 5, "Gli ");
	attron(A_BOLD);
	printw("uomini");
	attroff(A_BOLD);
	printw(" sono incredibilmente ");
	attron(A_UNDERLINE);
	attron(A_BOLD);
	printw("lenti");
	attroff(A_BOLD);
	printw(", inaccurati e ");
	attron(A_BOLD);
	printw("intelligenti");
	attroff(A_BOLD);
	printw(".\n");
	attroff(A_UNDERLINE);
	attroff(COLOR_PAIR(2));

	attron(COLOR_PAIR(3));
	attron(A_UNDERLINE);
	mvprintw(12, 5, "L'insieme dei due costituisce una ");
	attron(A_BOLD);
	printw("forza");
	attroff(A_BOLD);
	printw(" incalcolabile.\n");
	attroff(A_UNDERLINE);
	attroff(COLOR_PAIR(3));

	attron(COLOR_PAIR(4));
	attron(A_STANDOUT | A_BOLD);
	mvprintw(16, 55, " Albert Einstein \n");
	attroff(A_STANDOUT | A_BOLD);
	attroff(COLOR_PAIR(4));

	refresh();

	getch();

	endwin();

	return 0;
}