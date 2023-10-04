#include <ncurses.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char **argv)
{
	initscr();

	int i; // for loop
	for (i = 1; i < argc - 1; i++)
	{
		mvprintw(i + 1, 3, "%d. %s", i, argv[i]);
		refresh();
	}

	// getch();
	
	mvprintw(i + 2, 3, "Your choice: ");

	char opt_str[atoi(argv[argc - 1])];
	getstr(opt_str);

	int opt = atoi(opt_str);
	
	endwin();

	return opt;
}
