#include <stdio.h>
#include <stdlib.h>
#define MAX 14

int main(void){
	char *p1 = &"sizeof(int(*[5])(double))..%d\n";
	printf(p1, (int)sizeof(int(*[5])(double)));
	
	char *p2 = &"sizeof(void*)..%d\n";
	printf(p2, (int)sizeof(void*));
	
	char *p3 = &"sizeof(int)..%d\n";
	printf(p3, (int)sizeof(int));

	char* p4 = &"sizeof(\"abcde\")..%d\n";
	printf(p4,(int)sizeof("abcde"));

	char* p5 = &"sizeof \"abcde\" ..%d\n";
	printf(p5, (int)sizeof "abcde");
	
	char* p6 = "&\"abcde\"..%x\n";
	printf(p6, &"abcde");
	
	char* p7 = &"&\"abcdef\"..%x\n";
	printf(p7, &"abcdef");
	
	char* p8 = &"&\"abcde\"..%x\n";
	printf(p8, &"abcde");
	
	char* p9 = &"((char*)&\"abcde\" + sizeof(\"abcde\"))..%x\n";
	printf(p9, ((char*)&"abcde" + sizeof("abcde")));
	
	char* p10 = &"((int)&\"abcdef\" - (int)&\"abcde\")..%x\n";
	printf(p10, ((int)&"abcdef" - (int)&"abcde"));
	
	char* p11 = &"p%d..%x\n";
	char* p12 = &"r..%x\n";
	char* p13 = &"m1..%x\n";
	char* p14 = &"m2..%x\n";
	char *p[MAX] = {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14};
	int i;
	for(i = 0; i < MAX; i++){
		printf(p11, i+1, p[i]);
	}
	char r[] = "abcde";
	char* m1 = (char*)malloc(sizeof(char));
	char* m2 = (char*)malloc(sizeof(char));
	*m1 = 1;
	*m2 = 2;
	printf(p12, r);
	printf(p13, m1);
	printf(p14, m2);
	printf("%x\n", *m1);
	printf("%x\n", *m2);
	free(m1);
	free(m2);
	
	return 0;
}
