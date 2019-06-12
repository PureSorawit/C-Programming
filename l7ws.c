#include <stdio.h>
#include <math.h>

int main()
{
    int pro;
    printf("1.Print the larger number\n2.Determine odd and even number\n3.Tax Calculator\n4.Basic Calculator\n");
    printf("5.Upper and Lowercase\n6.Determine Max and Min\n7.Determine whether 3 numbers aer the same, different or neither\n");
    printf("8.Flowchart 1\n9.Flowchart 2\n10.Marital Status\n");
    printf("Select a program:");
    scanf("%d",&pro);
    if (pro == 1) {                                      // 1.two number, print larger one
        float x,y;
        printf("Enter 2 numbers:");
        scanf("%f,%f",&x,&y);
        if (x>=y) {
            printf("%.2f\n",x);
        }
        else {
            printf("%.2f\n",y);
        }
    }
    else if (pro == 2) {                                 // 2.odd and even number
        int x;
        printf("Enter a number:");
        scanf("%d",&x);
        if (x%2==0) {
            printf("%d is an even number\n",x);
        }
        if (x%2==1) {
            printf("%d is an odd number\n",x);
        }
    }
    else if (pro == 3) {                                 // 3.tax calculator
        int x;
        printf("Please enter your income:");
        scanf("%d",&x);
        if (x<15000) {
            printf("Your tax is $%.2f\n",x*0.1);
        }
        else {
            printf("Your taxis $%.2f\n",x*0.15);
        }
    }
    else if (pro == 4) {                                 // 4.basic calculator
        char z;
        float x,y;
        printf("Please enter your question(number,operator,number) : ");
        scanf("%f,%c,%f",&x,&z,&y);
        switch (z) {
            case '+':
            printf("Result : %.2f\n",x+y);
            break;

            case '-':
            printf("Result : %.2f\n",x-y);
            break;

            case '*':
            printf("Result : %.2f\n",x*y);
            break;

            case '/':
            printf("Result : %.2f\n",x/y);
            break;

            default:
            printf("Error! Incorrect Input");
        }
    }
    else if (pro == 5) {                                 // 5.upper and lower case
        char x;
        printf("Enter a character:");
        scanf(" %c",&x);
        if (x>=65 && x<=90) {
            printf("The lowercase of this character is %c\n",x+32);
        }
        else if (x>=97 && x<=122) {
            printf("The uppercase of this character is %c\n",x-32);
        }
        else {
            printf("Incorrect Input!\n");
        }
    }
    else if (pro == 6) {                                   // 6.maximunm and minimum
        float x,y,z;
        printf("Please enter 3 numbers:");
        scanf("%f,%f,%f",&x,&y,&z);
        if (x>=y && x>=z){
            printf("%.2f is the largest number\n",x);
        }
        else if (y>=x && y>=z) {
            printf("%.2f is the largest number\n",y);
        }
        else if (z>=x && z>=y) {
            printf("%.2f is the largest number\n",z);
        }
        if (x<=y && x<=z) {
            printf("%.2f is the smallest number\n",x);
        }
        else if (y<=x && y<=z) {
            printf("%.2f is the smallest number\n",y);
        }
        else if (z<=x && z<=y) {
            printf("%.2f is the smallest number\n",z);
        }
        if (x==y && y==z) {
            printf("They're all equal!\n");
        }
    }
    else if (pro == 7) {                                   // 7.same, different, and neither
        int x,y,z;
        printf("Please enter 3 integers:");
        scanf("%d,%d,%d",&x,&y,&z);
        if (x==y && y==z) {
            printf("all same\n");
        }
        else if (x!=y && y!=z) {
            printf("all different\n");
        }
        else {
            printf("neither\n");
        }
    }
    else if (pro == 8) {                                  // 8.1 flowchart
        float a,b;
        printf("Input 2 values:");
        scanf("%f,%f",&a,&b);
        if (a>b) {
            printf("Hi\n");
            }
            else {
                printf("Hey\n");
            if (a == b) {
                printf("Yo\n");
            }
            }
        printf("Thanks\n");
    }
    else if (pro == 9) {                                  // 8.2 flowchart
        float a,b;
        printf("Input 2 values:");
        scanf("%f,%f",&a,&b);
        if (a>b) {
            printf("Hi\n");
            }
            else {
                printf("Hey\n");
            }
        if (b == 6) {
            printf("Yo!!\n");
        }
        printf("Thanks\n");
    }
    else if (pro == 10) {                                    // 9.marital status
        char a,b;
        int c;
        printf("Are you single or married?(s/m):");
        scanf(" %c",&a);
        switch (a) {
        case 's':
        printf("Do you have any girlfriend/boyfriend?(y/n):");
        scanf(" %c",&b);
            if (b == 'y') {
                printf("You are not alone\n");
            }
            else if (b == 'n') {
                printf("Let me hug you\n");
            }
            break;

        case 'm':
        printf("How many kids do you have?\n");
        scanf("%d",&c);
        if (c>0) {
            printf("You can ask me for advices\n");
        }
        else if (c==0) {
            printf("GG\n");
        }
        break;
        
        default:
        printf("Invalid marital status\n");
        }
        printf("Thank you for your information\n");
    }
    printf("Finish!\n");

return 0;
}