//
// Created by mr hendy on 11/29/2022.
//
#include "stdio.h"
int main(){
    int x=10,y=20,z=30;
    int *px=&x,*py=&y,*pz=&z;
    printf("x= %d ,y= %d ,z= %d \n",x,y,z);
    printf("px= %d ,py= %d ,pz= %d \n",px,py,pz);
    printf("*px= %d ,*py= %d ,*pz= %d \n",*px,*py,*pz);
    ///pz points to x
    pz= px;
    ////px points to y
    px=py;
    ////py pointx to (x) as pz changed
    py=pz;
    printf("x= %d ,y= %d ,z= %d \n",x,y,z);
    printf("px= %d ,py= %d ,pz= %d \n",px,py,pz);
    printf("*px= %d ,*py= %d ,*pz= %d \n",*px,*py,*pz);
}