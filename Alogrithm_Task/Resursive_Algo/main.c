#include <stdio.h>

int climbStairsRecursive(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return climbStairsRecursive(n-1) + climbStairsRecursive(n-2);
    }
}

int main() {
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    printf("Number of distinct ways to climb the stairs: %d", climbStairsRecursive(n));
    return 0;
}
