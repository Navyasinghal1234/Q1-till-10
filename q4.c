//WAP to calculate area and circumference of circle.
#include <stdio.h>

int main() {
    float r,ar,c;
    printf("enter a radius");
    scanf("%f", &r);
    c = 2*3.14*r;
    ar = 3.14*r*r;
    printf("circumference is %f",c);
    printf("area is %f",ar);

    return 0;
}
