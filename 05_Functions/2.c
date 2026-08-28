/*FUNCTION */
#include<stdio.h>
void printHello(); //declaration of function
int main(){
    printHello(); //function call
    return 0;
}
void printHello(){ //function definition
    printf("Hello!\n");
    printf("My name is Amisha.\n");
}
/* Above three are the components of function:
1. Function declaration:It tells the compiler about the function before it is used.
2. Function Definition: It contains the actual code.
3.Function call: Invokes the function.*/