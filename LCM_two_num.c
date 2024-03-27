//Program to calculate LCM 
#include <stdio.h>
int main(){
    int a,b,x,gcd,lcm;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    for(x=1;x<=a&&x<b;x++)
    {
     if(a%x==0&&b%x==0){
        gcd=x;
        lcm=a*b/gcd;
    }
    printf("The LCM of %d and %d is %d",a,b,lcm);
    
}
return lcm;
}