//
// Created by mr hendy on 11/29/2022.
//
/*Question 3
 * Write a C code that defines 2 arrays, and sends them to a function that applies scalar
multiplication between the two arrays and returns the result, the main function then will
print the result.
 * */
#include "stdio.h"
int scalar(int *a,int b[],int size);
int main(){
   int arr[2][3]={1,2,3,4,5,6};
   int arr2[3][2];
   int* ptr =*arr2;

    printf("%d\n", *(ptr+1));
    for(int i=0;i<2;i++){
        for(int j =0;j<3;j++){
            *(ptr+(2*j)+i) =arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j =0;j<2;j++){
            printf("%d ",arr2[i][j]);
        }
    }
}
int scalar(int a[],int b[],int size){
    int res=0;
    for (int i = 0; i < size; ++i) {
        res += *(a+i) * *(b+i);
    }
    return res;
}
