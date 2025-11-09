//WAP TO SWAP TWO NUMBERS USING THIRD VARIABLE. 
#include <stdio.h>

int main() {
    int num1,num2,c;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);
    printf("before swapping: num1 = %d, num2 = %d\n", num1,num2);
    c = num1;
    num1 = num2;
    num2 = c;
    printf("after swapping: num1 =%d, num2 = %d\n", num1,num2);

    return 0;
}
