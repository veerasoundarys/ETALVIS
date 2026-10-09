#include <stdio.h>

int main() {
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    num = (num / 10) * 10 + 2;

    printf("Output: %d\n", num);

    return 0;
}