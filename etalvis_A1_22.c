#include <stdio.h>

int main() {
    int num, tens_digit, is_odd, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    tens_digit = (num / 10) % 10;

    is_odd = tens_digit % 2; 

    result = num - (5 * is_odd);

    printf("Output: %d\n", result);

    return 0;
}