#include<stdio.h>
int main(){
    /* In this we will lean about Assignment opeartor,which are used to assign valuyes to a variable .*/
    int x=3; 
    printf("%d\n",x); //This will print the value of x which is 3.
    printf("%d\n",x+=3); //This will add 3 to the value of x and assign it to x which will be x=6.
    printf("%d\n",x-=2); //This will subtract 2 from the value of x and assign it to x which will be x=4.
    printf("%d\n",x*=2); //This will multiply the value of x by 2 and assign it to x which will be x=8.
    printf("%d\n",x/=4); //This will divide the value of x by 4 and assign it to x which will be x=2.       
    printf("%d\n",x%=2); //This will take the modulus of x by 2 and assign it to x which will be x=0.
    printf("%d\n",x &=3); //This will perform bitwise AND operation on x and 3 and assign it to x which will be x=0.
    printf("%d\n",x |=3); //This will perform bitwise OR operation on x and 3 and assign it to x which will be x=3.
    printf("%d\n",x ^=3); //This will perform bitwise XOR operation on x and 3 and assign it to x which will be x=0.
    printf("%d\n",x>>=3); //This will perform right shift operation on x by 3 and assign it to x which will be x=0. 
    /*A right shift by n positions is equivalent to integers division by 2^n.*/
    printf("%d\n",x<<=3); //This will perform left shift operation on x by 3 and assign it to x which will be x=0.
    // A left shift by n positions is equivalent to integers multiplication by 2^n.
    return 0; 
}