//Convert celsius to fahrenheit using recursion
#include<stdio.h>
int convertCtoF(int c);
int main(){
    printf("Enter temperature in Celsius:");
    int c;
    scanf("%d",&c);
    int f=convertCtoF(c);
    printf("%d Celsius is equal to %d Fahrenheit\n",c,f);
    return 0;
}
int convertCtoF(int c){
    if(c==0){
        return 32;
    }
    float fahrenheit=c*(9.00/5.00)+32;
    return fahrenheit;
}   