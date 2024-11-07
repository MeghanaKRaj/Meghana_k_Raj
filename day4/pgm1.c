#include <stdio.h>

int factorial(int n) {
    // Base case: if n is 0, return 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: n * factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}