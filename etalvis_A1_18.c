#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    int result = 10 + (num % 10);
    
    printf("%d\n", result);
    
    return 0;
}