#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float power(float x, int n) { //function for recurtion
    /* Base situation:
    if n = 0, return 1 (mathematically correct).
    if n < 0, also return 1 just for comfort */
    if (n <= 0) {
        return 1;
    }

    /* recurtion cycle */
    return x * power(x, n - 1);
}


int main() {
        float x; int n;

        printf("Enter x = ");
        scanf("%f", &x);

        printf("Enter n = ");
        scanf("%d", &n);

		// we call the function to remember entered values
        float result = power(x, n);

        // print the result
        printf("Result = %.2f\n", result);
	return 0;
}