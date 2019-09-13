#include<stdio.h>

int main() {
	printf("Please enter the size of your square matrix : ");
	int size;
	scanf("%d", &size);
	int matrix[size][size];
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			printf("please enter element at location [%d][%d] : ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	int i=0;
	int j=0;
	for (int j=0; j<size; j++) {
		for (int i=0; i<size; i++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	int truth;
	for (int i=0; i<size; i++) {
		for (int j=(size-i); j<size; j++) {
			if (matrix[i][j]==matrix[j][i]) {
				truth ++;
			}
			else {
				printf("\nNot Symmetric\n");
				return 0;	
			}
		}
	}
	if (truth=size*size) {
		printf("\nMatrix is Symmetric\n");
	}
}
