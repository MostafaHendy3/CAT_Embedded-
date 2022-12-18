#include "stdio.h"
typedef struct employees{
    int salary;
    int bonus;
    int deductions;
} Employee;
void printEmp(Employee * emp);
void ReadEmp(Employee *emp);

int main(){
   Employee Mohesn ,Maged,Mariam;
    ReadEmp(&Mohesn);
    ReadEmp(&Maged);
    ReadEmp(&Mariam);
    printEmp(&Mohesn);
    printEmp(&Maged);
    printEmp(&Mariam);
}
void ReadEmp(Employee *emp){
    printf("Enter Salary of The Employee\n");
    scanf("%d",&emp->salary);

    printf("Enter bonus for The Employee\n");
    scanf("%d",&emp->bonus);

    printf("Enter Deductions for The Employee\n");
    scanf("%d",&emp->deductions);

}
void printEmp(Employee * emp){
    printf("Salary = %d\n",emp->salary);
    printf("Bonus = %d\n",emp->bonus);
    printf("Deductions = %d\n",emp->deductions);
}