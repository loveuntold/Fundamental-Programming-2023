#include <stdio.h>

typedef struct student student;

struct student{
    char name[50];
    int roll;
    float marks;
};

void input(student *data, int *n);
void output(student *data, int n);

int main(){
    student data[100];
    int n=0;
    int choice;

    do{
        printf("Enter your choice :\n");
        printf("1. Add Data\n");
        printf("2. Display Data\n");
        printf("3. Exit\n\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            input(data,&n);
            break;

            case 2:
            output(data,n);
            break;

            case 3:
            printf("The program has finished. Thank you!");
            break;

            default:
            printf("\nInvalid choice. Please try again.\n\n");
        }
    } while(choice!=3);

    return 0;
}

void input(student *data, int *n){
        printf("Enter name: ");
        scanf("%s",data[*n].name);

        printf("Enter roll number: ");
        scanf("%d",&data[*n].roll);

        printf("Enter marks: ");
        scanf("%f",&data[*n].marks);

        printf("\n");

        (*n)++;
}

void output(student *data, int n){
    FILE *file;
    file = fopen("studentdata_4.txt","w");

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

    printf("\nData written to file successfully.\n\n");
}