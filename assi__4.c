#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("enter a radius\n");
    scanf("%d",&r);
    area=r*r*3.14;
    printf("\"area of circle is %f  having the radius %d\".",area,r);
    printf("Replace %f with area & %d with radius",area,r);
    return 0;
}