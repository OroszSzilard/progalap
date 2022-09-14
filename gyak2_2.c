#include <stdio.h>
#include <stdlib.h>


int main() {
    double a=0,b=0,res=0;

    printf("Kérem az a erteket:");
    scanf( "%lf",&a);

    printf("Kérem a b erteket:");
    scanf( "%lf",&b);

    res = a + b;
    printf("%.2lf+%.2lf=%.2lf\n",a ,b , res);

    res= a - b;
    printf("%.2lf-%.2lf=%.2lf\n",a ,b , res);

    res= a * b;
    printf("%.2lf*%.2lf=%.2lf\n",a ,b , res);

    res= a / b;
    printf("%.2lf/%.2lf=%.2lf\n",a ,b , res);


}