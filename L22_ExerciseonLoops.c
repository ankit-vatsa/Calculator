#include <stdio.h>

int main()
{
    float a,c;
    int p;

    for (int i = 0;; i++)
    {
        printf("Enter the Unit Conversion you want. Enter\n 1 for km to miles \n 2 for inches to foot \n 3 for cms to inches \n 4 for pound to kgs \n 5 for inches to meters\n 0 to exit the program\n");
        scanf("%d", &p);
        
        if (p==1)
        {
            printf("Enter the value in km\n");
            scanf("%f",&a);
            c=0.621371*a;
            printf("Entered value of %0.3f km is %0.3f miles\n\n",a,c);
        }
        if (p==2)
        {
            printf("Enter the value in inches\n");
            scanf("%f",&a);
            c=0.08333*a;
            printf("Entered value of %0.3f inches is %0.3f feet\n\n",a,c);
        }
        if (p==3)
        {
            printf("Enter the value in cms\n");
            scanf("%f",&a);
            c=0.3937*a;
            printf("Entered value of %0.3f cms is %0.3f inches\n\n",a,c);
        }
        if (p==4)
        {
            printf("Enter the value in pound\n");
            scanf("%f",&a);
            c=0.4536*a;
            printf("Entered value of %0.3f pound is %0.3f kgs\n\n",a,c);
        }
       if (p==5)
        {
            printf("Enter the value in inches\n");
            scanf("%f",&a);
            c=0.0254*a;
            printf("Entered value of %0.3f inches is %0.3f metres\n\n",a,c);
        }
        if (p==0)
        {
            break;
        }

    }
printf("\nThanks for using our calculator\a");
    return 0;
}