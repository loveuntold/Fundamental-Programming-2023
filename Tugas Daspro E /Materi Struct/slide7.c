#include <stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct student s[100];
    int i=0;
    int repeat=1;
    while(repeat==1){
        printf("Enter information of students:\n\n");
        printf("Enter name: "); 
        scanf("%s",s[i].name);

        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);

        printf("Enter marks: ");
        scanf("%f",&s[i].marks);

        printf("Press 1 if you want to input more data : ");
        scanf("%d", &repeat);

        i++;
    }

    for(int j=0; j<i; j++){
        printf("\nDisplaying Data %d \n", j+1);
        printf("Name: %s\n",s[j].name);
        printf("Roll: %d\n",s[j].roll);
        printf("Marks: %.2f\n",s[j].marks);
    }
    return 0;
}
