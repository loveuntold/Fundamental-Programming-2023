#include <stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct student s[100];
    printf("Enter name: ");
    scanf("%s", s[0].name);

    printf("Enter roll: ");
    scanf("%d", &s[0].roll);

    printf("Enter marks: ");
    scanf("%f", &s[0].marks);

    printf("\nDisplaying information\n");
    printf("Name: %s", s[0].name);
    printf("\nRoll: %d", s[0].roll);
    printf("\nMarks: %f", s[0].marks);
}
    




