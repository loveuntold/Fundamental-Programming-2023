#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *next;
}*top;



void push(int data) {
    struct node *baru;
    baru =(struct node *)malloc(1*sizeof(struct node));
    baru->next = NULL;baru->info = data;
    if (top == NULL){top=baru;}
    else{ baru->next=top;
      top=baru;}
    printf("Node %d is Inserted\n",data);
}
int pop() {
    int popped;
    struct node *tmp;
    tmp = top;
    if (tmp == NULL)
    {printf("\nStack Underflow\n");return -1;}
    else
        {popped = top->info;top = top->next;}
    free(tmp);
    return popped;
}

void display() {
    struct node *tmp;
    tmp=top;
    if (tmp == NULL)
    { printf("\nStack Underflow\n");return;}
    printf("The stack is \n");
    while (tmp != NULL)
    {printf("%d--->", tmp->info);tmp = tmp->next;}
    printf("NULL\n");

}

int main() {
    for( int i=0;i<10;i++){
        push(i);    
    }
    display();
    printf("nilai yg dipop %d \n",pop());
    display();
    printf("nilai yg dipop %d \n",pop());
    display();
}
