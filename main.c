/*main.c*/
#include <stdio.h>
#include "./lib/testOne.h"

void main() {
	int a;
	int b;

	printf("Enter nubers1: ");
	scanf("%d", &a);

	printf("Enter nubers2: ");
	scanf("%d", &b);

	printf("add(%d, %d) = %d\n", a, b, add(a,b));
	printf("sub(%d, %d) = %d\n", a, b, sub(a,b));
	printf("mult(%d, %d) = %d\n", a, b, mult(a,b));
	printf("divi(%d, %d) = %d\n", a, b, divi(a,b));
}

	
