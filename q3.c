//WAP to calculate area and perimeter of rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int l,b,peri,area;
    printf("enter length and breadth of rectangle");
    scanf("%d %d", &l,&b);
    area = l * b;
    peri = 2*(l+b);
    printf("area = %d\n", area);
    
    printf("peri = %d\n", peri);
    return 0;
}
