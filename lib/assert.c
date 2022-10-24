/*assert.c*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void my_assert(int expr) {
	if(!expr) {
		printf("%s: %d: %s:Assertion '((num>=0) && (num <= 100))' failed.\n", __FILE__, __LINE__, __func__); 
		abort();
	} 

}

void foo(int num) {
	my_assert(((num>=0) && (num <= 100)));

	printf("foo : num = %d\n", num);
}

void main(int argc, char *argv[]) {
	int num;

	if(argc < 2) {
		fprintf(stderr, "Usage : assert_test aNumber\n(0 <= aNumber <= 100)\n");
		exit(1);
	}

	num = atoi(argv[1]);
	foo(num);

}
