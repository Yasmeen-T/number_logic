//Program to claculate the GCD or HCF of two numbers
#include <stdio.h>
int main(){
    int a,b,x,gcd;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    for(x=1;x<=a&&x<=b;x++)
    {
     if(a%x==0&&b%x==0)
        gcd=x;
    }
    printf("The GCD of %d and %d is %d",a,b,gcd);
    return gcd;


}


//GCD other method1
/*#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
    if(a>b){
    a=a-b;
    }
    else{
     b=b-a;
    }
    }
     printf("%d is the GCD",a);
     return 0;

}*/

/*method 2
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = gcd(a, b);
    printf("GCD: %d\n", result);
    return 0;
}
*/
