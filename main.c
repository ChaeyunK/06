#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_star(void)
{
	int i;
	for(i=0; i<10; i++)
	printf("*");
}



int main(int argc, char *argv[]) {


	int i;
	
	print_star();
	print_star();
	print_star();
	
	
	system("PAUSE");
	return 0;
}