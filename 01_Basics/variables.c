#include<stdio.h>
int main() {

    // C variables are container for storing data values.In C,variables must have the specific type ,which tells the program what kind of data it is storing.

    int num =16; // Here we are declaring a variable num of type int and initializing it with the value 16.
    int othernum = 20; // We can always declare multiple variables of the same data type .
    num=othernum; //We can always change the value of a variable by assigning a new value to it. Here we are assigning the value of othernum to num.
    printf("The value of num is %d", num); // here %d is  a format specifier which is used to print the value of an integer variable.
    // We can also think of format  specifiers as placeholders for the values that we want to print .
    return 0;
}

//All C variables must be identified with the unique name .These names are called identifiers.

