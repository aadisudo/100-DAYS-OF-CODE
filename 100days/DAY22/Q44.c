//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float term = (2 * i - 1) / (float)(2 * i);
        sum += term;
    }

    printf("%.4f", sum);

    return 0;
}
