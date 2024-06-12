#include<stdio.h>

main(){
	char S[] = "bangchan";
	char *p;
	p = S;
	for (int i=0;i<8;i++){
		printf("%c",*p);
		p++;
	}
	printf("\n");
	p--;
	for (int i=0; i<8; i++){
		printf("%c",*p);
		p--;
	}
}