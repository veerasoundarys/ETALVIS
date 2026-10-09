#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int digit0 = num / 10; 
    int digit1 = num % 10; 
    printf("%d\n", digit0 != digit1); 

    return 0;
}