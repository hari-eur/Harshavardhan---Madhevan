#include<stdio.h>
int main()
{
    int x,true = 1;
    float a,b,c;
    while(true)
    {
        printf("Select the shape:");
        printf("\nPress 1 for Trianlge\t2 for Rectangle\t3 for Square\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            {
                printf("Triangle:\n");
                printf("Enter the values:\n");
                scanf("%f %f",&a,&b);
                c = 0.5*a*b;     
                printf("The area of triangle is: %f \n",c);
                break;
            }
            case 2:
            {
                printf("Rectangle:\n");
                printf("Enter the values:\n");
                scanf("%f %f",&a,&b);
                c = a*b;     
                printf("The area of rectangle is: %f \n",c);
                break;
            }
            case 3:
            {
                printf("Square:\n");
                printf("Enter the values:\n");
                scanf("%f",&a);
                c = a*a;     
                printf("The area of triangle is: %f \n",c);
                break;
            }
            default:
            {
                printf("Invalid Operation");
                true = 0;
            }
        }
    }
    return 0;
}
