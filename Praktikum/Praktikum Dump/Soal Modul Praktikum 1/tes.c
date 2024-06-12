#include <stdio.h>

int main(){
    //declare
    int num, num1, num2, num3, checker;
    scanf("%d", &num);

    //seperate number
    if(num > 99){
        num3 = num % 10;
        num2 = num / 10 % 10;
        num1 = num / 100 % 10;
        checker = 3;
    }else if(num < 100 && num > 9){
        num3 = 0;
        num2 = num % 10;
        num1 = num / 10 % 10;
        checker = 2;
    }else{
        num3 = 0;
        num2 = 0;
        num1 = num;
        checker = 1;
    }

    //check number
    if(checker == 3){
        if(num == num3 * num3 * num3 + num2 * num2 * num2 + num1 * num1 * num1){
            printf("Merupakan Bilangan Armstrong");
        }else{
            printf("Bukan Merupakan Bilangan Armstrong");
        }
    }else if(checker == 2){
        if(num == num2 * num2 + num1 * num1){
            printf("Merupakan Bilangan Armstrong");
        }else{
            printf("Bukan Merupakan Bilangan Armstrong");
        }
    }else{
        if(num == num1){
            printf("Merupakan Bilangan Armstrong");
        }
    }

    return(0);
}