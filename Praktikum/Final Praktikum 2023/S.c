// Pahlindrom Karya Shita

#include <stdio.h>
#include <string.h>

typedef struct pahlawan{
    int health;
    float attack;
    char gender;
    char name[100];

}pahlawan;

int main(){
    int n;
    scanf("%d", &n);

    pahlawan s[n];
    for(int i=0; i<n; i++){
        scanf("%d %f %c %[^\n]s", &s[i].health, &s[i].attack, &s[i].gender, s[i].name);
    }

    int diffcount=0;
    int diff[n];
     for(int i=0; i<n/2; i++){
        int count=0;

        if(s[i].health==s[n-i-1].health){
            count++;
        }
        
        if(s[i].attack==s[n-i-1].attack){
            count++;
        }
        
        if(s[i].gender==s[n-i-1].gender){
            count++;
        }

        if(strcmp(s[i].name,s[n-i-1].name)==0){
            count++;
        }

         if(count<2){
            diff[diffcount] = i;
            diffcount++;
            diff[diffcount] = n-i-1;
            diffcount++;
        }
    }

     for(int i=0; i<diffcount-1; i++){
        for(int j=0; j<diffcount-1-i; j++){
            if(diff[j] > diff[j+1]){
            int temp = diff[j];
            diff[j] = diff[j+1];
            diff[j+1] = temp;
        }
        } 
    }
    
    if(diffcount==0){
        printf("Siap perang, Dewi Shita!\n");
    }
    
    else{
        printf("Sebentar Dewi Shita, belum palindrom nih.\n");
        for(int i=0; i<diffcount; i++){
            printf("%d ", diff[i] + 1);
        }
        printf("\n");
    }


}