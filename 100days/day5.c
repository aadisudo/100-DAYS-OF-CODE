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

//PART 2
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // remaining minutes
    seconds = totalSeconds % 60;          // remaining seconds

    // Output
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
