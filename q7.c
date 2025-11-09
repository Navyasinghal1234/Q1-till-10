//WAP TO SWAP TWO NUMBERS WITHOUT USING THIRD VARIABLE. 
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value of a and b: ");
    scanf("%d %d", &a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("swap values are a=%d,b=%d",a,b);

    return 0
