#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    
    printf("Digite o primeiro lado: ");
    scanf("%d", &lado1);
    
    printf("Digite o segundo lado: ");
    scanf("%d", &lado2);
    
    printf("Digite o terceiro lado: ");
    scanf("%d", &lado3);
    
    printf("%d\n", (lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1));
    
    return 0;
}