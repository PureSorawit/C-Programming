#include <stdio.h>
#include <math.h>
int main()
{
    int pro;
    printf("1.Demo-Program\n2.Price Calculator\n3.Triangle Area Calculator\n4.Square Root & Natural log\n5.Uppercase to Lowercase\n6.Score Calculator");
    printf("\nSelect Your Program:");
    scanf("%d",&pro);
    if (pro == 1)
    {
    int a,b,c;
    a=13-25/2*3+3*12%3+2;
    b=13-25.0/2*3+3*12%3+2;
    c=-17*(3/3)+ -9 *2;
    printf("%d\n%d\n%d\n",a,b,c);
    }
    else if (pro == 2)
    {
    float x,y;
    printf("Enter the price and discount rate:");
    scanf("%f,%f",&x,&y);
    printf("\nNet Price:$%f\n",x-(x*y));
    }
    else if (pro == 3)
    {
    float x,y;
    printf("Enter the base and height of the triangle:");
    scanf("%f,%f",&x,&y);
    printf("\nThe Area is%f\n",0.5*x*y);
    }
    else if (pro == 4)
    {
    float x;
    printf("Enter a number:");
    scanf("%f",&x);
    printf("\nSquare root:%f\n",sqrt(x));
    printf("\nTake log10:%f\n",log10(x));
    }
    else if (pro == 5)
    {
    char u;
    printf("Enter an alphabet:"); 
    scanf(" %c",&u);
    printf("\nThe lowercase of this alphabet is: %c\n",u+32);
    }
    else if (pro == 6)
    {
    float x,y,z;
    printf("Enter assignment,midterm, and final score:");
    scanf("%f,%f,%f",&x,&y,&z);
    x=x/10;
    y=y*2/5;
    z=z/2;
    printf("\nYour overall score is %f\n",x+y+z);
    }
    return 0;
}