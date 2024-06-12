#include <stdio.h>
#include <string.h>

char input[11] = {0}; // batasan
int inputlen = 0;

int isVowel(char c){
    switch(c){
        case 'A': 
        case 'I': 
        case 'U': 
        case 'E': 
        case 'O':
        case 'a': 
        case 'i': 
        case 'u': 
        case 'e': 
        case 'o':
        return 1; 
        default:
        return 0; // klo gk vowel false,
    }
}

void huruf(char input[], int counter, int max) {
    if(counter == max){
        printf("%s", input); // base case
    } // ibarat labirin, kalo jalanya kebuka semua, berarti vowel semua, 

    else if(isVowel(input[counter])){
        huruf(input, counter + 1, max);
    } 

    else{
        for(int i = 0; i <= counter; ++i){ //counter = 0 // counter 2
            int temp = (int)input[i];

            if(temp >= 'A' && temp <= 'Z'){
                temp++; // i jadi  J, a jadi B, t u,

                if(temp > 'Z'){
                    temp -= 26;
                }
                input[i] = (char)temp;
            } 
            
            else if(temp >= 'a' && temp <= 'z'){
                temp++;

                if(temp > 'z'){
                    temp -= 26;
                }
                input[i] = (char)temp;
            }
        }
        huruf(input, 0, max); //backtracking
    }
}

int main() {
    scanf(" %s", input);
    inputlen = strlen(input);

    huruf(input, 0, inputlen);
    return 0;
}