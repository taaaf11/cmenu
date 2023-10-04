#include <ncurses.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char **argv)
{
	initscr();

	for (int i = 1; i < argc; i++)
	{
		mvprintw(i + 1, 3, "%d. %s", i, argv[i]);
		refresh();
	}

	// getch();
	
	char opt_str[10];
	getstr(opt_str);

	int opt = atoi(opt_str);
	
	endwin();

	return opt;
}
