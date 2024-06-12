#include <stdio.h>
#include <string.h>

int palindrome(char *s){
  char *left, *right;
  left = s;
  right = s + strlen(s) - 1;
  while (left < right) {
    if (*left != *right) {
      return 0;
    }
    left++;
    right--;
  }
    return 1;
}


int main(){
    char kata[100];
    
    scanf("%s", kata);

    if(palindrome(kata)){
        printf("%s Merupakan Kata Palindrome", kata);
    }
    else{
        printf("%s Bukan Merupakan Kata Palindrome", kata);
    }

    return 0;

}