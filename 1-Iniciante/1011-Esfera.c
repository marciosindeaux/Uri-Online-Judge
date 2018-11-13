#include <stdio.h>
 
int main() {
 
    double r,v,pi;
    pi = 3.14159;
    scanf("%lf",&r);
    v = 4*pi*r*r*r/3;
    printf("VOLUME = %.3f\n",v);
 
    return 0;
}
