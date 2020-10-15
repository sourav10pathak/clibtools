#include <stdio.h>

int main(){

	int a = 1;
	char *ptr = &a ;
	if(*ptr != a)
		printf("big endian\n");
	else
		printf("little endian\n");
	return 0;
}	
