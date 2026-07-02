#include<stdio.h>
int main(){
    /*Operators are the symbols used to perform operations on variables and values.
    First of them are airthemtic operators: +,-,*,/,%,++,--*/
    int x=10;
    int y=3;
    printf("%d\n",x+y); //Addition
    printf("%d\n",x-y); //Subtraction
    printf("%d\n",x*y); //Multiplication
    printf("%d\n",x/y); //Division
    printf("%d\n",x%y); //Modulus-remainder 
    printf("%d\n",x++); //Increment-increase the value to x by 1 can also be written as x=x+1;
    printf("%d\n",x--); //Decrement-Decrease the value of x by 1 can also be written as x=x-1;
    return 0;
}