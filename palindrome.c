//Program to check number is palindrome or not
#include<stdio.h>
int main()
{
    int n,rem,rev=0,a=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n;

while(n>0)
{
 rem=n%10;
  rev=rev*10+rem;
  n=n/10;

}
printf("%d ",rev);
(rev==a)?printf("is a palindrome") : printf("is not a palindrome");

}