//
// Created by mr hendy on 11/29/2022.
//
/* Question One
 * Write a C code defines an int initialized with 10, then print it, then define a pointer that
points to that int and change the value of the int through the pointer to be 20, then print
it again.*/
#include "stdio.h"
int main(){
    int a =10;
    printf("%d \n",a);
    int *ptr =&a;
    *ptr=20;
    printf("%d \n",a);
}