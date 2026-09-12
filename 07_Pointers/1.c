/*Pointers are variables that store the memory address of other variables.*/
#include<stdio.h>
int main(){
    int age=25;
    int *ptr = &age; //pointer variable ptr is declared and initialized with the address of age variable using the address-of operator(&).
   printf("%p\n",ptr); //prints the address of age variable
   printf("%d\n",*ptr); //prints the value of age variable using dereference operator(*).
   printf("%p\n",&age); //prints the address of age variable using address-of operator(&).
   printf("%d\n",age); //prints the value of age variable.  
   return 0;

}