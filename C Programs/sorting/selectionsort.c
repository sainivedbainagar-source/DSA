#include<stdio.h>
#include<limits.h>

int main(){
    int arr[7] = {7,4,5,9,8,2,1};
    int n = 7;
    for(int i = 0; i<n;i++){
        printf("%d ", arr[i]);
    }
    // selection sort
    for(int i = 0; i < n-1 ;i++){ // n-1 passes
        int min = INT_MAX;
       int mindx = -1;
        for(int j = i;j <= n -1 ; j++){
            if(min> arr[j]){
                    min = arr [j];
            mindx = j;

            }
        }
//swap
                int temp = arr[mindx];
                arr[mindx] = arr [i];
                arr[i] = temp;

    }
    printf("\n");
     for(int i = 0; i<n;i++){
        printf("%d ", arr[i]);
    }





return 0;
}

