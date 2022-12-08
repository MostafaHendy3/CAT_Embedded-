#include "STD_MATH.h"
#include "STD_MATH.h"
#include <stdio.h>

int main(){
    int num=23;
    BitSet(num,4);
    printf("%d \n",num);
    BitToggle(num,3);
    printf("%d \n",num);
    BitClear(num,2);
    printf("%d \n",num);
    BitGet(num,1);
    printf("%d \n",num);
}
