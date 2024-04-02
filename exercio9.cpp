#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    printf("%d\n", (num > 0) && (num % 2 == 0));
    
    return 0;
}