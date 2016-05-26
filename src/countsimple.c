#include <curses.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (int argc, char *argv[])
{

	int count, delay, interval = 0;
	int shift = 0;
	int row, col = 0;
	char mesg[]="Press any key...";
	
	if (argc != 4){
		printf("\nUsage: %s <number> <delay> <interval>\n\n", argv[0]);
		return(1);
	}
	
	count = atoi(argv[1]);
	delay = atoi(argv[2]);
	interval = atoi(argv[3]);
	shift = (int)log10(count);
	
	initscr();
	getmaxyx(stdscr,row,col);
  	
  	for (long int i=0 ; i<=count ; i+=interval) {
		mvprintw((row/2), ((col/2)-(shift/2)), "%ld", i);
      	refresh();
      	usleep(delay);
  	}
  	
  	mvprintw(((row/2)+2), ((col-strlen(mesg))/2), "%s", mesg);

  	getch();
  	endwin();

  	return 0;
}




