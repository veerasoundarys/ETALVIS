#include <stdio.h>
int main() {
    int num;
    int digit0, digit1, digit2;
    int result; 
    printf("Enter a number: ");
    scanf("%d", &num);    
    digit0 = num % 10;
    digit1 = (num / 10) % 10;
    digit2 = (num / 100) % 10;
    result = (digit1 == digit0) && (digit2 == digit1);
    printf("Output: %d\n", result);
    return 0;
}