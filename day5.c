#include <stdio.h>
#include <stdbool.h>

// ==========================================
// <<< QUESTION.17: Perfect Number Checker >>>
// ==========================================
bool isPerfect(int n) {
    if (n <= 1) return false;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

// ==========================================
// <<< QUESTION.18: Strong Number Checker >>>
// ==========================================
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

bool isStrong(int n) {
    int temp = n, sum = 0;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

// ==========================================
// <<< QUESTION.19: Print Factors >>>
// ==========================================
void printFactors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}

// ==========================================
// <<< QUESTION.20: Largest Prime Factor >>>
// ==========================================
int largestPrimeFactor(int n) {
    int maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2) maxPrime = n;
    return maxPrime;
}

// ==========================================
// SINGLE MAIN FUNCTION TO RUN EVERYTHING
// ==========================================
int main() {
    printf("--- Question 17 (Perfect Number 28) ---\n");
    printf("Output: %s\n\n", isPerfect(28) ? "True" : "False");

    printf("--- Question 18 (Strong Number 145) ---\n");
    printf("Output: %s\n\n", isStrong(145) ? "True" : "False");

    printf("--- Question 19 (Factors of 12) ---\n");
    printf("Output: ");
    printFactors(12);
    printf("\n");

    printf("--- Question 20 (Largest Prime Factor of 45) ---\n");
    printf("Output: %d\n", largestPrimeFactor(45));

    return 0;
}