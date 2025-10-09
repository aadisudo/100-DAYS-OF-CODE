 //Write a program to calculate simple and compound interest for given principal, rate, and time
 #include <stdio.h>

 int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    float amount = 1;  // To calculate (1 + R/100)^T
    int i;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest using loop
    for (i = 0; i < (int)time; i++) {
        amount = amount * (1 + rate / 100);
    }

    compoundInterest = principal * amount - principal;

    // Display results
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
 /*
 OUTPUT:-
 Enter Principal amount: 1000
 Enter Rate of interest: 5
 Enter Time (in years): 2

 Simple Interest = 100.00
 Compound Interest = 102.50
 */