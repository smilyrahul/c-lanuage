#include <stdio.h>

// Brute-force method to calculate a^n
long long power_brute_force(int a, int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}

// Divide and conquer method to calculate a^n (Exponentiation by Squaring)
long long power_divide_and_conquer(int a, int n) {
    if (n == 0) {
        return 1;
    }
    long long half_power = power_divide_and_conquer(a, n / 2);
    if (n % 2 == 0) {
        return half_power * half_power;
    } else {
        return half_power * half_power * a;
    }
}

int main() {
    int a = 2;
    int n = 10;

    printf("Brute-force result: %lld\n", power_brute_force(a, n));
    printf("Divide and Conquer result: %lld\n", power_divide_and_conquer(a, n));

    return 0;
}
