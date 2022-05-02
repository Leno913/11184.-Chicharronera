//215786

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b,c;
    float x1, x2;
    
    cin>>a>>b>>c;
    
    x1=( -b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    
    printf ("%f ",x1);
    printf ("%f",x2);

    return 0;
}
