#include <stdio.h>
#include <math.h>  
double f(double x)
{
    double y;
    y=log(x);
    return y;
}
double ploshad(double a, double b, double E)
{
    int elem=1000;
    double S=0;
    for( ;(b-a)/elem>E;elem*=2){}
    double h=(b-a)/elem;
    //printf("%d ", elem);
    //printf("%lf ", h);
    double x1=a+h,x=a;
    for( ;x1<b;x1+=h)
    {
        S+=((f(x)+f(x1))*h)/2;
        //printf("%lf ", S);
        x=x1;
    }
    return S;
}
int main()
{
    double a,b,E;
    scanf("%lf %lf %lf", &a, &b, &E);
    printf("%lf", ploshad(a,b,E));
    return 0;
}