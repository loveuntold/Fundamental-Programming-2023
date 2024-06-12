#include <stdio.h>
#include <math.h>

long long int powerOfTwo(int n){
    if(n == 0){
        return 1;  // 2^0 = 1
    }
    else{
        return 2 * powerOfTwo(n - 1);
    }
}


long long int sequence(int n) {
    if(n == 1){
        return 3; // base case
    } 
    else if(n % 2 == 1){
        return sequence(n - 1) * 3; 
    } 
    else{
        return sequence(n - 1) - powerOfTwo((n/2)- 1);
    }
}

int main(){
    int n; // banyaknya deret bilangan
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        long long int hasil = sequence(n); 
        printf("%lld ", hasil);
    }

    return 0;
}
/*
n = 5 
output = 3 2 6 4 12

i = 1
return 3; output: 3

i = 2
return sequence(2 - 1) - powerOfTwo((2/2)- 1); 
return sequence(1) - powerOfTwo(0); 
3 - 1; output: 2

i = 3
return sequence(3 - 1) * 3; 
return sequence(2) * 3; output 6

i = 4
return sequence(4 - 1) - powerOfTwo((4/2)- 1); 
return sequence(3) - powerOfTwo(1); 
6 - 2; output: 4

i = 5
return sequence(5 - 1) * 3; 
return sequence(4) * 3; output 12
    
*/