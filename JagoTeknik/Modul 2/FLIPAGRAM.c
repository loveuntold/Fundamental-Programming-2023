#include <stdio.h>
#include <string.h>

int main (){

    int input;
    scanf("%d", &input);

    char kata1[10001], kata2[10001];
    char command[20];

    for(int i=0 ; i<input; i++){
        scanf("%s", command);

        if(strcmp(command,"ANAGRAM")==0){
            scanf("%s %s", kata1, kata2);

            char temp1[26] = {0};
            char temp2[26] = {0};

            int len1 = strlen(kata1);
            int len2 = strlen(kata2);

            for(int i=0; i<len1; i++){
                temp1[kata1[i]-'a']++;
            }

            for(int i=0; i<len2; i++){
                temp2[kata2[i]-'a']++;
            }

            if(strcmp(temp1,temp2)==0){
                printf("Hhm %s can be arranged into %s\n", kata1, kata2);
            } else {
                printf("This cannot lah bro\n");
            }

        }else if(strcmp(command,"FLIP")==0){
            scanf("%s %s", kata1, kata2);

            int len1 = strlen(kata1);
            int len2 = strlen(kata2);

            int check = 1;

            for(int i=0; i<len1; i++){
                if(kata1[i] != kata2[len2-1-i]){
                    check = 0;
                    break;
                }
            }

            if(check == 1){
                printf("Flip %s to get %s\n", kata1, kata2);
            } else {
                printf("This cannot lah bro\n");
            }
        }
    }
}
