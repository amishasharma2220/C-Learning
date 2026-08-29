/* 
1.Executiuon always starts from main.
2. A function gets called directly or indirectly from main.
3.There can be multi[le functions in program.*/
//lets write a function that prints Namaste if user is Indian and Bonjour if user in french.
#include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("Enter F for French and I for Indian:");
    char choice;
    scanf("%c",&choice);
    if(choice=='F'){
        bonjour();  
    }
    else namaste();
}
void namaste(){
    printf("Namaste!\n");
}   
void bonjour(){
    printf("Bonjour!\n");
}