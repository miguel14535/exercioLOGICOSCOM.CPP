#include <iostream>

int main() {
    int V1,V2;

printf("Valor 1 :"); scanf("%d",&V1);
printf("Valor 2 :"); scanf("%d",&V2);

if (V1==V2){
    printf("O valor é igual \n\n ");
}
else{
    printf("O valor é diferente \n\n");
}
if (V1>V2){
    printf("O valor maior é %d",V1);
}
if (V1<V2){
    printf("O valor menor é %d", V2);
}
return(0);

}