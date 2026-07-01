#include<stdio.h>
int main() {
    /* Memory Size-It refers to the how much space a type occupies in the computer's memory.
    size0f() -This is used to get the size of(int bytes) of a data type or variable .*/
    int MyInt=10;
    float MyFloat=3.14;
    double MyDouble=3.14159;
    char MyChar='A';    
    printf("Size of int: %zu bytes\n", sizeof(MyInt));
    printf("Size of float: %zu bytes\n", sizeof(MyFloat));
    printf("Size of double: %zu bytes\n", sizeof(MyDouble));
    printf("Size of char: %zu bytes\n", sizeof(MyChar));
    return 0;   
}