#include<stdio.h>
int main(){
    int x=5;
    int y=5;
    printf("%d\n",x==y); //This will check if x is equal to y and return 1 if true and 0 if false which will be 1.
    printf("%d\n",x!=y); //This will check if x is not equal to y and return 1 if true and 0 if false which will be 0.
    printf("%d\n",x>y); //This will check if x is greater than y and return 1 if true and 0 if false which will be 0.
    printf("%d\n",x<y); //This will check if x is less than y and return 1 if true and 0 if false which will be 0.
    printf("%d\n",x>=y); //This will check if x is greater than or equal to y and return 1 if true and 0 if false which will be 1.
    printf("%d\n",x<=y); //This will check if x is less than or equal to y and return 1 if true and 0 if false which will be 1.
    return 0;
}