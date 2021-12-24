#include <stdio.h>

int main(void){
	printf("sizeof(int(*[5])(double))..%d\n", (int)sizeof(int(*[5])(double)));
	printf("sizeof(void*)..%d\n", (int)sizeof(void*));
	printf("sizeof(int)..%d\n", (int)sizeof(int));
	return 0;
}
