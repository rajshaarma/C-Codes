// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int arr[]={1, 4, 2, 5, 3};
    int temp;
    for(int i = 0; i < 5-1; i++){
        for(int j = i+1; j < 5; j++){
            if (arr[i]> arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
