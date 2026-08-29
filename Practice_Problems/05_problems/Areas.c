#include<stdio.h>
#include<math.h>
float SquareArea(float side);
float CircleArea(float radius);
float rectangleArea(float l,float b);
int main(){
    float a=5.0;
    float r=3.0;
    float l=4.0;
    float b=6.0;
    printf("Area of square with side %.2f is: %.2f\n",a,SquareArea(a));
    printf("Area of circle with radius %.2f is: %.2f\n",r,CircleArea(r));
    printf("Area of rectangle with length %.2f and breadth %.2f is: %.2f\n",l,b,rectangleArea(l,b));
}
float SquareArea(float side){
    return side*side;

}
float CircleArea(float radius){
    return 3.14*radius*radius;
}
float rectangleArea(float l,float b){
    return l*b;

}
/* In the above code we calculated the area of sqare,circle ,rectangle .
Line 6:The main program begins execution.
Line 7-10(Intialization):Mmeory is allocatd and values are assigned to four float variables:
a=5.0(side of sqaure)a = 5.0 (side of the square)
r = 3.0 (radius of the circle)
l = 4.0 (length of the rectangle)
b = 6.0 (breadth of the rectangle)
Line 11 (Square Calculation): The printf statement calls the SquareArea(a) function, passing the value 5.0.
Jumps to Line 15: SquareArea receives side = 5.0.
Line 16: Calculates 5.0 * 5.0 and returns 25.0.
Back to Line 11: The printf statement outputs: Area of square with side 5.00 is: 25.00
Line 12 (Circle Calculation): The printf statement calls the CircleArea(r) function, passing the value 3.0.
Jumps to Line 19: CircleArea receives radius = 3.0.
Line 20: Calculates 3.14 * 3.0 * 3.0 and returns 28.26.
Back to Line 12: The printf statement outputs: Area of circle with radius 3.00 is: 28.26
Line 13 (Rectangle Calculation): The printf statement calls the rectangleArea(l, b) function, passing 4.0 and 6.0.
Jumps to Line 22: rectangleArea receives l = 4.0 and b = 6.0.
Line 23: Calculates 4.0 * 6.0 and returns 24.0.
Back to Line 13: The printf statement outputs: Area of rectangle with length 4.00 and breadth 6.00 is: 24.00
Line 14 (main ends): The program finishes executing and terminates successfully.*/