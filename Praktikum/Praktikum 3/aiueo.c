// Link Soal : https://drive.google.com/file/d/1NIj2TaGLRWeLkDg8RKQdOFRFKFnWcQGk/view?usp=sharing

#include <stdio.h>
#include <string.h>

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
        return 1; // vowel

        default:
        return 0; // not vowel
    }
}

void huruf(char input[], int counter, int max) {
    if(counter == max){
        printf("%s", input); // base case
    } 

    else if(isVowel(input[counter])){
        huruf(input, counter + 1, max); // ngecek huruf setelahnya
    } 
    /*
    e e u o counter=4
    */
    else{
        for(int i = 0; i <= counter; ++i){ 
            int temp = (int)input[i];

            if(temp >= 'A' && temp <= 'Z'){
                temp++; 

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
        huruf(input, 0, max); // kalo yang dicek bukan vowel
    }
}

int main(){
    char kata[11] = {0}; 

    scanf(" %s", kata);
    int jumlah = strlen(kata);

    huruf(kata, 0, jumlah);
    return 0;
}