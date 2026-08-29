// Parameters and Arguments
/* Information can be passed to the function as parameters.And these parameters acts as varaiable inside the function.
Syntax:
returnType functionName(paarmeter1, paarmeter 2, paarmeeter3 ){
//code to be executed.
}
When the parameters are passed to the function, they are called arguments.
When we have multiple parameters,The fiunction call should have the same number of arguments as the number of parameters in the function definition.Also agruments must be p[assed in the same order as the parameters are decalared in the function definition. 
*/
#include<stdio.h>
void CalculateSum(int x,int y);
int main(){
    CalculateSum(5,10); //function call with arguments
    CalculateSum(20,30);

    return 0;
}

void CalculateSum(int x,int y){ //function definition with parameters
    int sum=x+y;
    printf("Sum of %d and %d is: %d\n",x,y,sum);
}