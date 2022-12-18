//
// Created by mr hendy on 12/15/2022.
//
#include "stdio.h"
#include <stdlib.h>


#include "School.h"

int main() {

    Student class[ClassSize];
    RandomClass(&class);
    giveIDs(&class);
    int mode = -1;
    while (1) {
        printf("Enter Mode Number\n");
        printf("1-Admin Mode\n");
        printf("2-Student Mode\n");
        printf("0-EXIT \n");
        scanf("%d", &mode);
        ////Mode =1 ADMIN ,=2 USER ,=0 EXIT
        if (mode == 0) {
            break;
        }
        switch (mode) {
            case 1:
                printf("Enter Admin PassWord\n");
                int pass;
                scanf("%d", &pass);
                if (pass == ADMIN) {
                    printf("Enter Mode Number\n");
                    printf("1-Modify Degree\n");
                    printf("0-Exit\n");
                    int x = -1;
                    scanf("%d", &x);
                    switch (x) {
                        case 1: {
                            printf("Enter ID to Modify Data\n");
                            long ID;
                            scanf("%ld", &ID);
                            int index = findByID(class, ID);
                            if(index>=ClassSize){
                                printf("Enter Valid ID\n");
                                break;
                            }
                            Display(&class[index]);
                            AdminEdit(class, index);
                            break;
                        }
                        case 0: {
                            break;
                        }
                        default:
                            printf("Enter valid Mode\n");
                    }


                }
                break;
            case 2:
                printf("Enter Id to get degree\n");
                long ID;
                scanf("%ld", &ID);
                int index = findByID(class, ID);
                if (index >= ClassSize) {
                    printf("Enter Valid Id\n");
                    break;
                } else {
                    Display(&class[index]);
                }
                break;
            default:
                printf("Enter valid Mode\n");
        }
    }
    //DisplayClass(class);
}
