#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double scale(double,int);

int main(void){
    double num_1;int num_2;
    printf("Enter a real number: ");
    scanf("%lf", &num_1);
    printf("Enter an Integer: ");
    scanf("%d", &num_2);
    printf("Result of call to function scale is %f \n", scale(num_1,num_2));
    system("pause");
    return(0);
    }

double scale(double x, int n){
    double scale_factor;
    scale_factor = pow(10,n);
    return (x*scale_factor);
    }

