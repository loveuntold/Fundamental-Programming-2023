#include <stdio.h>
#include <stdlib.h>

typedef struct node_s{
	int n;
	struct node_s *next;
}node_bil;


int main(){
node_bil *head=NULL, *baru, *tmp;

for(int i=1;i<=10;i++){
    baru = (node_bil *)malloc(sizeof(node_bil));
    baru->n=i;
    baru->next=NULL;
    
    if(head==NULL){
        head=baru;
        tmp=baru;
    }
    else{
        tmp->next=baru;
        tmp=baru;
    }
}

tmp=head;
while(tmp!=NULL){
    printf("Isi = %d\n", tmp->n);
    tmp=tmp->next;
}
return 0;

}