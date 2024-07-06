#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP ( 1251 );
    SetConsoleOutputCP ( 1251 );
    int p;
    scanf("%d", &p);

    if (p < 1 || p > 30) {
    printf("Невірні вхідні дані: p має бути в діапазоні від 1 до 30\n");
    return 1;
  }

    long long dp[p + 1][2];

    dp[1][0] = 1; // 5
    dp[1][1] = 1; // 9

    for (int i = 2; i <= p; i++) {
    dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
    dp[i][1] = dp[i - 1][0];
  }

    long long total = dp[p][0] + dp[p][1];
    printf("%lld\n", total);

    return 0;
}
