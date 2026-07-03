#include<stdio.h>
int main(){
    /*The programmming may need the data type that can only have two values,
    YES/NO
    ON/OFF
    TRUE,FALSE
    For this c has a bool data type ,which is known as booleans.
    Boolean represent one of the two values:True or False.*/
    int myAge=25;
    int votingAge=18;
    if(myAge>=votingAge){
        printf("You are eligible to vote.\n");
    }
    else{
        printf("You are not eligible to vote.\n");
    }
    return 0;
}