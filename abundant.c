//Program to find the number is abundant or not
//sum of proper divisor should be greater that then the number taken
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int i=1;
    int sum=0;
    while(i<n)
    {
        if(n%i==0)
        {
        sum=sum+i;
       
        }

         i++;
    }
    (n<sum)?printf("it is abundant number"):printf("it is not abundant number");
}
