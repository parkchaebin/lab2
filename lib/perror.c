/*perror.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void my_perror(char *str) {
	if (str != NULL) {
		printf("%s : %s", str, strerror(errno));
	} else {
		printf("%s", strerror(errno));
	}
}

void main(int argc, char *argv[]) {
	FILE *f;

	if(argc < 2) {
		printf("Usage : perror_use file_name\n");
		exit(1);
	}

	if((f = fopen(argv[1], "r")) == NULL) {
		my_perror(NULL);
		exit(1);
	}

	printf("Open a file \"%s\".\n", argv[1]);
	fclose(f);

}
