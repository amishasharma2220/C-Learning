#include<stdio.h>
int main(){
    int x=5;
    int y=3;
    printf("%d\n", x>3 && x<10); //This will check if x is greater than 3 and less than 10 and return 1 if true and 0 if false which will be 1.
    printf("%d\n", x>3 || x<10); //This will check if x is greater than 3 or less than 10 and return 1 if true and 0 if false which will be 1.
    printf("%d\n", !(x>3 && x<10)); //This will check if x is not greater than 3 and less than 10 and return 1 if true and 0 if false which will be 0.
    return 0;
}