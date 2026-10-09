#include <stdio.h>

int main() {
    int num, first_two, last_two, rev_last_two, result;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    first_two = num / 100;
    last_two = num % 100;

    rev_last_two = (last_two % 10) * 10 + (last_two / 10);

    result = (first_two * 100) + rev_last_two;
 
    printf("%d\n", result);

    return 0;
}