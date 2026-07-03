#include<stdio.h>
int main(){
    /*Order of operation(If there are multiple operators this is the sequence  operator will follow-similar to the bodmass rule.) in C is as follows:
    ()-parenthesis
    *, /, %-Multiplication, Division, Modulus
    +, - -Addition, Subtraction        
    >,<, >=, <=-Comparison      
    ==, !=-Equality
    &&-Logical AND
    ||-Logical OR      
    = -Assignment
    Operator of smae precednece are evaluated from left to right.
    */
   int res1=10-2+5; //This will be evaluated as (10-2)+5=8+5=13.
   int res2=10-(2+5); //This will be evaluated as 10-(7)=3.
   int res3=10*2/5; //This will be evaluated as (10*2)/5=20/5=4.
   int res4=10/(2*5); //This will be evaluated as 10/(10)=1.
   int res5=10>5 && 5<10; //This will be evaluated as (10>5) && (5<10)=1 && 1=1.
   int res6=10>5 || 5>10; //This will be evaluated as (10>5) || (5>10)=1 || 0=1.
   int res7=10==10 && 5!=10; //This will be evaluated as (10==10) && (5!=10)=1 && 1=1.
   int res8=10==5 || 5!=10; //This will be evaluated as (10==5) || (5!=10)=0 || 1=1.
   printf("res1=%d\n",res1);
   printf("res2=%d\n",res2);
   printf("res3=%d\n",res3); 
   printf("res4=%d\n",res4);
   printf("res5=%d\n",res5);   
   printf("res6=%d\n",res6);
   printf("res7=%d\n",res7);
   printf("res8=%d\n",res8);
   return 0;                  
}