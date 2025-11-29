#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

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
	return 0;
}