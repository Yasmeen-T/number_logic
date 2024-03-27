//Program to find automorphic or not
 #include<stdio.h>
int len(int n){
    int l=0;
    while(n>0){
        n =n/10;
        l++;
    }
    return l;
}
int genz(x){
    int z=1;
    while(x){
        z=z*10;
        x=x-1;
}

return z;
}
int main(){
    int n,a,x,b,s,h;
    printf("Enter the number: ");
    scanf("%d",&n);
   x =len(n);
   b=genz(x);
   s=n*n;
   h=s%b;
(n==h)?printf("it is automorphic"):printf("not automorphic");


     
    










return 0;
}
