// Simple
#include <stdio.h>
int main()
{
    int a,b,sub;
    printf ("Enter two integer: ");
    scanf ("%d %d",&a,&b);
    sub=a-b;
    printf ("Subtraction of two numbers: %d\n",sub);
    return 0;
}
// Function
#include <stdio.h>
int sub (int a, int b)
{
    return a-b;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum of two numbers: %d\n",sub(a,b));
    return 0;
}
// Structure
#include <stdio.h>
struct add
{
    float value;
};
int main()
{
    int i,n;
    float sub;
    printf ("Enter limit of input numbers: ");
    scanf ("%d",&n);
    struct add s[n];
    printf("Enter first positive number: ");
    scanf("%f",&s[0].value);
    sub=s[0].value;
    printf ("Enter %d negative numbers: ",n-1);
    for (i=1; i<n; i++)
    {
        scanf ("%f",&s[i].value);
        sub-=s[i].value;
    }
    printf ("The sub of numbers: %.2f",sub);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    float a,b,sub;
    char ch;
    file1 = fopen ("Sum.txt","w");
    file2 = fopen ("Sum.txt","r");
    if (file1==NULL)
        printf ("File does not exists.");
    else
    {
        printf ("Enter two numbers: ");
        scanf ("%f %f",&a,&b);
        sub=a-b;
        fprintf (file1,"The sub of two number is: %.2f\n",sub);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("File does not exists");
    else
    {
        while (!feof(file2))
        {
            ch = fgetc (file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}
