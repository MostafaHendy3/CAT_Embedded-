//
// Created by mr hendy on 11/29/2022.
//
/*
 * Write a C code that asks the user to enter 2 values and save them in two variables, then
the program sends these variables by address to a function that returns the summation
of them. The program then prints the result.
 */
#include "stdio.h"
int sum(int *a,int *b);
int main(){
    int a,b;
    printf("Enter Two numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sum = %d", sum(&a,&b));
}
int sum(int *a,int *b){
    return  *a + *b;
}