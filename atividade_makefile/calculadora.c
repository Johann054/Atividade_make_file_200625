// calculadora.c
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Resultado: %d\n", a + b); break;
        case '-': printf("Resultado: %d\n", a - b); break;
        case '*': printf("Resultado: %d\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Resultado: %.2f\n", (float)a / b); 
            else 
                printf("Erro: divisão por zero\n");
            break;
        default: printf("Operação inválida\n");
    }

    return 0;
}
