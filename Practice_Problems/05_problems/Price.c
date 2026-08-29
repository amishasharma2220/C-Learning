#include<stdio.h>
void CalculatePrice(float value);
int main(){
    float value = 100.00;
    CalculatePrice(value); //function call with argument
    return 0;
}
void CalculatePrice(float value){
    value= value+(value*0.18);
    printf("Price after adding 18 percent GST is:%.2f\n",value);
}