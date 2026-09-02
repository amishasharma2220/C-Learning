//Square root.Finding square root of a number.In C, we can find the square root of a number using the sqrt() function from the math.h library. The sqrt() function takes a single argument (the number for which you want to find the square root) and returns the square root of that number. Here's an example code snippet that demonstrates how to use the sqrt() function in C:
#include<stdio.h>
#include<math.h>
double findSquareroot(double number);
int main(){
    printf("Enter a number:");
    double number;
    scanf("%lf",&number);
    double result=findSquareroot(number);
    printf("Square root of %.2f is:%.2f\n",number,result);
    return 0;
}
double findSquareroot(double number){
    return sqrt(number);
}   