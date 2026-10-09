#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    num = num - 5 * (num % 2);

    printf("Output: %d\n", num);

    return 0;
}