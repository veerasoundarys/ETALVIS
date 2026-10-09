#include <stdio.h>

int main() {
    int num, tens, ones, sum, is_odd, result;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    sum = tens + ones;

    is_odd = sum % 2;

    result = num - (5 * is_odd);

    printf("Output: %d\n", result);

    return 0;
}