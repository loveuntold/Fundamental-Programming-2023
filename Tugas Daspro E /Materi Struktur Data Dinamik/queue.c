#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *next;
};

struct node *head = NULL; 
struct node *tail = NULL; // ujung

void enqueue(int data){ // push
    struct node *baru;
    baru = (struct node *)malloc(sizeof(struct node));
    baru->info = data;
    baru->next = NULL;

    if(tail == NULL){
        head = tail = baru;
    } 
    else{
        tail->next = baru;
        tail = baru;
    }
   
    printf("Node %d is Inserted\n", data);
}

int dequeue(){ // pop
    int popped; // ngeluarin
    struct node *tmp;

    if(head == NULL){
        printf("\nQueue Underflow\n");
        return -1;
    } 
    else{
        tmp = head;
        popped = head->info;
        head = head->next;

        free(tmp);

        if(head == NULL){
            tail = NULL;
        }

        return popped;
    }
}

void display() {
    struct node *tmp;
    tmp = head;

    if (tmp == NULL) {
        printf("\nQueue Underflow\n");
        return;
    }

    printf("The queue is \n");
    while (tmp != NULL) {
        printf("%d--->", tmp->info);
        tmp = tmp->next;
    }
    printf("NULL\n");
}

int main(){
    for (int i = 0; i < 10; i++) {
        enqueue(i);
    }
    display();
    printf("Nilai yg di-queue %d \n", dequeue());

    display();
    printf("Nilai yg di-queue %d \n", dequeue());
    display();
    return 0;
}