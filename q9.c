//WAP to calculate simple and compound interest for given principal,rate,time.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;

    // Take input
    printf("Enter principal amount (like 1000): "amount (like 1000): ");
    scanf("%f", &principal);
    printf("Enter rate of interest (like 5 for 5%%): "interest (like 5 for 5%%): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    // Formula: SI = P*R*T/100
    si = (principal * rate * time) / 100;

    // Calculate compound interest
    // Formula: CI = P(1 + R/100)^T - P
    ci = principal * (pow((1 + rate/100), time) - 1);

    // Print results
    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    printf("Total Amount (SI) = %.2f\n", principal + si);
    printf("Total Amount (CI) = %.2f\n", principal + ci);

    return 0;
}
