#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void func1(void)
{
	int x;
	printf("func1 x is at %p\n", &x);
}



int main(int argc, char *argv[]) {


	int x;
	
	printf("main x is at %p\n", &x);
	func1();
	
	
	system("PAUSE");
	return 0;
}