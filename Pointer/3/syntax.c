#include <stdio.h>

int main(void){
	int array[5] = {1,2,3,4,5};
	printf("array[1] = %d\n", array[1]);
	printf("2[array] = %d\n", 2[array]);
	printf("*(array+3) = %d\n", *(array + 3));
	printf("*(4+array) = %d\n", *(4+array));
	return 0;
}

