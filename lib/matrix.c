/*matrix.c*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	int row; // 가로
	int col; // 세로
	
	printf("row : ");
	scanf("%d", &row);

	printf("col : ");
	scanf("%d", &col);

	int **matrix1, **matrix2, **res;

	matrix1 = (int **)malloc(row * sizeof(int *));
	matrix2 = (int **)malloc(row * sizeof(int *));
	res = (int **)malloc(row * sizeof(int *));

	for(int i =0; i<row; i++) {
		matrix1[i] = malloc(col*sizeof(int));
		matrix2[i] = malloc(col*sizeof(int));
		res[i] = malloc(col*sizeof(int));
	}

	printf("One Matrix\n");
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("\nTwo Matrix\n");
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d", &matrix2[i][j]);
		}
	}

	printf("One Matrix + Two Matrix\n");

	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			res[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%d", res[i][j]);
		}
		printf("\n");
	}

	for(int i=0; i<row; i++) {
		free(matrix1[i]);
		free(matrix2[i]);
		free(res[i]);
	}

	free(matrix1);
	free(matrix2);
	free(res);
}	
