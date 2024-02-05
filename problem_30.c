#include <stdio.h>

int isPerfectNumber(long long n) {
    if (n <= 1) {
        return 0; // Not a perfect number
    }

    long long sum = 1; // Initialize sum to 1 since every number is divisible by 1

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;

            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    return sum == n;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        if (isPerfectNumber(N)) {
            printf("YES, %lld is a perfect number!\n", N);
        } else {
            printf("NO, %lld is not a perfect number!\n", N);
        }
    }

    return 0;
}
