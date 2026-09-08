
/*
 Program (4)-> Write a program to calculate the area of circle
 Solution(2)-> User Define Values
 */

 

#include <stdio.h>
int main()
{
    float radius,area;
    
    
    printf("\n Enter the radius of the circle:");
    scanf("%f",&radius);
    area = (3.14*radius*radius);
    scanf("\n Area of circle=%f",area);
    
    return 0;
}