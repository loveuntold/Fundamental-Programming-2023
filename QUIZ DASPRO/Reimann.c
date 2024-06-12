#include <stdio.h>

int add(int x){
    int result = 0;
    if(x==0){
        return 0;
    }

    result = (x%10) + add(x/10);

    if(result>9){
        result = add(result);
    }

    return result;
}

int main(){
    int x;
    scanf("%d", &x);

    printf("%d", add(x));

}