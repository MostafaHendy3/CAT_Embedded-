//
// Created by mr hendy on 11/29/2022.
//
#include "stdio.h"
#include "string.h"
void BubbleSort(int *array,int size);
int main() {
    int array[] = {50,40,30,54,70,8,789,40,254,0,14,41,41,14};
    int size = sizeof(array) / sizeof(array[0]);
    BubbleSort(array,size);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
void BubbleSort(int *array,int size){
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(array + j) > *(array + j+1)) {
                int temp = *(array + j);
                *(array + j) = *(array + j+1);
                *(array + j+1) = temp;
            }
        }
    }
}
