#include<stdio.h>
int main()
{
    int x,n,true = 1;
    float a = 0.0,c = 0.0;
    while(true)
    {
        printf("Select the operator:");
        printf("\nPress 1 for addition\t2 for subtraction\t3 for multiplication\t4 for division\t\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            {
                printf("Addition\nEnter the number of operands: ");
                scanf("%d",&n);
                printf("Enter the numbers:\n");
                while(n>0)
                {
                    scanf("%f",&a);
                    c += a;
                    n--; 
                }            
                printf("The sum is: %f \n",c);
                break;
            }
            case 2:
            {
                printf("Subtraction\nEnter the number of operands: ");
                scanf("%d",&n);
                printf("\nEnter the numbers:\n");
                scanf("%f",&a);
                c = a;
                while(n>1)
                {
                    scanf("%f",&a);
                    c -= a;
                    n--; 
                }            
                printf("The difference is: %f \n",c);
                break;
            }
            case 3:
            {
                printf("Multiplication\nEnter the number of operands: ");
                scanf("%d",&n);
                printf("\nEnter the numbers:\n");
                scanf("%f",&a);
                c = a;
                while(n>1)
                {
                    scanf("%f",&a);
                    c *= a;
                    n--; 
                }            
                printf("The product is: %f \n",c);
                break;
            }
            case 4:
            {
                printf("Division\nEnter the number of operands: ");
                scanf("%d",&n);
                printf("\nEnter the numbers:\n");
                scanf("%f",&a);
                c = a;
                while(n>1)
                {
                    scanf("%f",&a);
                    c /= a;
                    n--; 
                }            
                printf("The quotient is: %f \n",c);
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
