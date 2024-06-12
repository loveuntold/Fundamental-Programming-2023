#include<stdio.h>

int main(){
int l1,l2,l3,l4,total;
scanf("%d %d %d %d", &l1,&l2,&l3,&l4);

l4=l4*1;
l3=l3*2;
l2=l2*4;
l1=l1*8;

total=l1+l2+l3+l4;

if(total==0){
	printf("1 1 1 1 1 1 0");
}
else if(total==1){
	printf("0 0 0 1 1 0 0");
}
else if(total==2){
	printf("1 0 1 1 0 1 1");
}
else if(total==3){
	printf("0 0 1 1 1 1 1");
}
else if(total==4){
	printf("0 1 0 1 1 0 1");
}
else if(total==5){
	printf("0 1 1 0 1 1 1");
}
else if(total==6){
	printf("1 1 1 0 1 1 1");
}
else if(total==7){
	printf("0 0 1 1 1 0 0");
}
else if(total==8){
	printf("1 1 1 1 1 1 1");
}
else if(total==9){
	printf("0 1 1 1 1 1 1");
}
else{
	printf("0 0 0 0 0 0 0");
}
	
}