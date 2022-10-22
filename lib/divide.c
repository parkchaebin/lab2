/*divide.c*/
#include <stdio.h>

int divi(int a, int b) {
	if(b != 0) {
		int res = a/b;
		return res;
	}
	else {
		printf("Try again");
	}
}
