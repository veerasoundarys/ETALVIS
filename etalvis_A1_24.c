#include <stdio.h>

int main() {
    int num, result;

    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    int hundreds = num / 100;
    int ones = num % 10;

    int subtract_factor = (hundreds % 2) * (ones % 2);

    result = num - (5 * subtract_factor);
    printf("Output: %d\n", result);

    return 0;
}