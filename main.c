#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, a, b, c;
	
	
	printf("input the second: ");
	scanf("%i", &x);
	
	a=x/3600;
	b=(x%3600)/60;
	c=(x%3600)%60;
	
	printf("The time for %i second is %i : % i : %i\n", x, a, b, c );
	
	return 0;
}
