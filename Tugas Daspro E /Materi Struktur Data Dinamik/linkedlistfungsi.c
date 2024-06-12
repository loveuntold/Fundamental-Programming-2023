#include <stdio.h>
#include <stdlib.h>

typedef struct node_s{
	int n;
	struct node_s *next;
} node_bil;

void input(node_bil **head, int m){
    node_bil *baru, *tmp;

    for(int i = 1; i <= m; i++){
        baru = (node_bil *)malloc(sizeof(node_bil));

        scanf("%d", &baru->n);
       
        baru->next = NULL;

        if(*head == NULL){
            *head = baru;
            tmp = baru;
        } 
        else{
            tmp->next = baru;
            tmp = baru;
        }
    }

}

void output(node_bil *head){
    node_bil *tmp = head;

    int i = 1;

    while(tmp != NULL){
        printf("Isi %d = %d\n", i, tmp->n);
        tmp = tmp->next;
        i++;
    }
}

int main(){
    node_bil *head = NULL;

    int m;
    scanf("%d", &m);

    input(&head, m);
    output(head);
    node_bil *current = head;
    while (current != NULL) {
        node_bil *next = current->next;
        free(current);
        current = next;
    }
    return 0;
}