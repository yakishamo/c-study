#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size;
	printf("board size?");
	scanf("%d", &size);

	int (*board)[size] = malloc(sizeof(int) * size * size);

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			board[i][j] = i * size + j;
		}
	}

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			printf("%4d, ", board[i][j]);
		}
		printf("\n");
	}
}

