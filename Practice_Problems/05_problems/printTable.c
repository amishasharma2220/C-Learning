#include<stdio.h>
int sum(int a ,int b);
void printTable(int n);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int s = sum(a,b);
    printTable(s); //Arguments/Actual parameter.
    return 0;
}
int sum(int a,int b){
    return a+b;

}
void printTable(int n){ //Parameter/Formal parameter.
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}
/* In the above code ,line 4(main starts):The program begins execution here.
Line 5(int a,b,n):Memory is allocated for the variables a,b.
Line 6(printf):The user is prompted to enter two numbers.For example ,if a  user enters 2 and 4 .Then a =2 and b=4.
Line 8(int sum = sum(a,b):The program calls the sum function ,passing the values 2 and 4 as arguments.
Now jump to line 12:the sum function recieves A=2 and a=4.
Line 13:it calculates 2+4 and returns 6.
Now LINE 8: the variable s is assigned the value 6.
Line 9: The program calls the printTable function, passing the value 6 as an argument.
Now jump to line 16:The printTable function recieves n=6. into its local variable n.
Line 17:The for loop intializes i=1 .It will run as long as i <=10.
Iteration 1:i=1: The program calculates 1*6=6 and prints 6.i increments to 2.
Iteration 2:i=2: The program calculates 2*6=12 and prints 12.i increments to 3.
Iteration 3:i=3: The program calculates 3*6=18 and prints 18.i increments to 4.
Iteration 4:i=4: The program calculates 4*6=24 and prints 24.i increments to 5.     
Iteration 5:i=5: The program calculates 5*6=30 and prints 30.i increments to 6.
Iteration 6:i=6: The program calculates 6*6=36 and prints 36.i increments to 7.
Iteration 7:i=7: The program calculates 7*6=42 and prints 42.i increments to 8.
Iteration 8:i=8: The program calculates 8*6=48 and prints 48.i increments to 9.
Iteration 9:i=9: The program calculates 9*6=54 and prints 54.i increments to 10.
Iteration 10:i=10: The program calculates 10*6=60 and prints 60.i increments to 11.
Now i=11: The for loop condition i<=10 is false, so the loop terminates and the printTable function ends.
The program returns to line 10 in main and then ends .*/  