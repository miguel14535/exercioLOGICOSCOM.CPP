#include <stdio.h>

int main() {
    int horas, segundos;
    
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);
    
    segundos = horas * 3600;
    
    printf("O equivalente em segundos e: %d\n", segundos);
    
    return 0;
}