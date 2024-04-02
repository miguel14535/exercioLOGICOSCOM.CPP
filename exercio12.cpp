#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    printf("%d\n", (num % 3 == 0) && (num % 5 == 0));
    
    return 0;
}