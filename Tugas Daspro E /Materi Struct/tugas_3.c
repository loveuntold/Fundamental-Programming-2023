#include <stdio.h>

typedef struct student student;

struct student{
    char name[50];
    int roll;
    float marks;
};

void input(student *data, int n);
void output(student *data, int n);

int main(){
    student data[100];
    int n;
   
    printf("The amount of student informations: ");
    scanf("%d", &n);

    input(data,n);
    output(data,n);

    printf("\nData written to file successfully.\n");

    return 0;
}

void input(student *data, int n){
    for(int i=0; i<n; i++){
        printf("Enter name: ");
        scanf("%s",data[i].name);

        printf("Enter roll number: ");
        scanf("%d",&data[i].roll);

        printf("Enter marks: ");
        scanf("%f",&data[i].marks);

        printf("\n");
    }
}

void output(student *data, int n){
    FILE *file;
    file = fopen("studentdata.txt","w");

    if(file==NULL){
        printf("Error!\n");
        return;
    }

    for(int j=0; j<n; j++){
        fprintf(file,"\nDisplaying Data %d \n", j+1);
        fprintf(file,"Name: %s\n",data[j].name);
        fprintf(file,"Roll: %d\n",data[j].roll);
        fprintf(file,"Marks: %.2f\n", data[j].marks);
    }

    fclose(file);
}