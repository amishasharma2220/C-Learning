//Sum of digits of a number function
#include<stdio.h>
int sumOfDigits(int n);
int main(){
    printf("Enter a number:");
    int n;
    scanf("%d",&n);
    int result=sumOfDigits(n);
printf("Sum of digits of %d is :%d",n,result);
return 0;
}
int sumOfDigits(int n){
    int r,sum=0;
    while(n>0){
         r = n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
/* Line 4: (main starts ):The program begin execution.
Line 5:Prints"Enter a number:*to the console
Line 6-7:Mmeory is allocated for n.The scanf function sets the input to n=123(suppose you enter 123).
Line 8:The program calls the sumOfDigits function,passing the value 123.
Line 12:Now inside the function sumOfDigits(The function recieves n=123.
Line 13:here sum which is a local variable is intialized to 0.
Line 14:Here loop starts: The hwile (n>0) loop checks the condition .Since 123>0 is true,Loop will begin.
   Iteration 1:r=n%10 that is r=123%10 which is 3 now sum=sum+r ,hence sum=0+3,sum=3.n=n/10 which is 123/10 n=12.
   Iteration 2: 12>0 is true,Hence r=n%10 i.e 12%10 r=2;sum=sum+r=3+2=5;n=n/10 ie 12/10 n=1.
   Iteration 3:1>0 is true ,Hence r=n%10 i.e 1%10 r=1;sum=sum+r=5+1=6;n=n/10 i.e 1/10 n=0.
   Iteration 4:0>0 is false .Loop ends and the function returns sum=6 to the main function.
Line 9:Back in the main function ,the variable result is assigned the value 6
Line 10:Prints "Sum of digits of 123 is:6" to the console.
Line 11:main ends and the program terminates successfully. */
