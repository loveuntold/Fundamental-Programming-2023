#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long int

typedef struct check {
    int num;
} check;

check num[100001];
int count = 0;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

    for(int j = low; j <= high - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high){
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int isDecimal(int a, int b){
    if (b == 0) {
        return -1;
    }
    int modulo = a % b;
    int position = 0;
    int mp[100001];
    
    for (int i = 0; i < b; i++) {
        mp[i] = -1;
    }

    while(modulo != 0 && mp[modulo] == -1){
        mp[modulo] = position;
        modulo = modulo * 10;
        modulo = modulo % b;
        position++;
    }
    if(modulo == 0){
        return 0;
    } 
    else{
        return position - mp[modulo];
    }
}
void countTenadics(int decimal, check *s, int *tenadics) {
    for (int i = 1; i <= decimal; i++) {
        ll adics = (ll)round((double)i / decimal * 1000000000000000);
        ll check = adics * decimal - i * 1000000000000000;
        if(check == 1){
            if(isDecimal(i, decimal) < 16){
                s[decimal].num = i;
                tenadics[count] = decimal;
                count++;
                return;
            } 
            else{
                return;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int tenadics[100001];
        int decimal;

        scanf("%x", &decimal);

        printf("Starting from %xtopia, the spy traversed these nations:\n", decimal);
        while(decimal != 1){
            printf("%xtopia, ", decimal);
            if(decimal % 2 == 0){
                decimal = decimal / 2;
            } 
            else{
                countTenadics(decimal, num, tenadics);
                decimal = decimal * 3 + 1;
            }
        }
        printf("1topia.\n");
        if(count > 0){
            quickSort(tenadics, 0, count - 1);
            for(int j = 0; j < count; j++){
                printf("Disabled %xtopia's force field using a pulse strength of ...%015lld units.\n", tenadics[j], (ll)round((double)num[tenadics[j]].num / tenadics[j] * 1000000000000000));
            }
            if 
            (count > 1){
                printf("Today's operation was successful, we have breached %d force fields.\n", count);
            } 
            else{
                printf("Today's operation was successful, we have breached 1 force field.\n");
            }
        } 
        else{
            printf("No tracked nation has a breachable force field. We are not successful for today...\n");
        }
        printf("\n");
        count = 0;
    }
    return 0;
}