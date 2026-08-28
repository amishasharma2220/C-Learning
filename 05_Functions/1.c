/* A number of statements group together into a single logical unit is referred to as function.It is block of code that performs a specific tasks.
Predefined functions are those which are already defined in the C library and can be used directly in the program. For example, printf(), scanf(), etc.
Create a function:
syntax: void function_name() {
    // code to be executed
}
    void means functions will not return any value. If you want to return a value from the function, you can use int, float, char, etc. instead of void.
*/
#include<stdio.h>
void calculateSum(){
    int x =5;
    int y=10;
    int sum=x+y;
    pritnf("Sum of x+y is:%d",sum);
}
int main(){
    calculateSum();
    return 0;
}