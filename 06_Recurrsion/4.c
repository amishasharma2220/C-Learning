//Calculate Percentage
#include<stdio.h>
float calcPercentage(int science ,int maths,int sanskrit);
int main(){
    float science,maths,sanskrit;
    printf("Enter marks in Science:");
    scanf("%f",&science);
    printf("Enter marks in Maths:");
    scanf("%f",&maths);
    printf("Enter marks in Sanskrit:");
    scanf("%f",&sanskrit);
    float per=calcPercentage(science,maths,sanskrit);
    printf("The percenatge obtained is %.2f\n ",per);


}
float calcPercentage(int science,int maths,int sanskrit){
    return ((science+maths+sanskrit)/3.0);
}