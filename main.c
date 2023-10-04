#include <stdio.h>
#include <ncurses.h>


int main (int argc, char **argv)
{
	initscr();

	for (int i = 1; i < argc; i++)
	{
		mvwprintw(stdscr, i + 1, 3, "%s", argv[i]);
		refresh();
	}

	getch();
	endwin();
	return 0;
}
