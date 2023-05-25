#include <stdio.h>

int climbStairsNonRecursive(int n) {
    if (n <= 1) {
        return 1;
    } else {
        int a = 1, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    printf("Number of distinct ways to climb the stairs: %d", climbStairsNonRecursive(n));
    return 0;
}
