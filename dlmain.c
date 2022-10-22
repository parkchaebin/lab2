/*dlmain.c*/

#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

void main() {
	void *handle;
	int (*add)(int, int), (*divi)(int, int), (*sub)(int, int), (*mult)(int, int);
	char *error;

	int a;
	int b;

	handle = dlopen("./lib/libshare.so", RTLD_LAZY);
	if(!handle){
		fputs(dlerror(), stderr);
		exit(1);
	}

	add = dlsym(handle, "add");
	if((error = dlerror()) != NULL) {
		fprintf (stderr, "%s", error);
		exit(1);
	}
	sub = dlsym(handle, "sub");
	if((error = dlerror()) != NULL) {
		fprintf (stderr, "%s", error);
		exit(1);
	}
	mult = dlsym(handle, "mult");
	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}
	divi = dlsym(handle, "divi");
	if((error = dlerror()) != NULL) {
		fprintf(stderr, "%s", error);
		exit(1);
	}

	printf("Enter numbers1 : ");
	scanf("%d", &a);
	printf("Enter numbers2 : ");
	scanf("%d", &b);

	printf("add(%d, %d) = %d\n", a, b, add(a,b));
	printf("sub(%d, %d) = %d\n", a, b, sub(a,b));
	printf("mult(%d, %d) = %d\n", a, b, mult(a,b));
	printf("divi(%d, %d) = %d\n", a, b, divi(a,b));

	dlclose(handle);


}
