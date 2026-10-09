#include <stdio.h>

int main() {
    int num, sum;

    if (scanf("%d", &num) != 1) {
        return 1;
    }

    while (num >= 10) {
        sum = 0;
        while (num > 0) {
            sum += num % 10; 
            num /= 10;       
        }
        num = sum;           
    }

    printf("%d\n", num);

    return 0;
}