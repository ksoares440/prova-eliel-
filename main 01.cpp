#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    int a, b;
    float nota1, nota2, media;
    int numero;
    float salario;
    int opcao;
    float x, y, resultado;
    float altura, peso;

    // 1. Nome
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Ola, %s!\n", nome);

    // 2. Idade
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
        printf("Entrada permitida\n");
    else
        printf("Entrada nao permitida\n");

    // 3. Soma
    printf("\nDigite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Soma = %d\n", a + b);

    // 4. Maior numero
    printf("\nDigite dois inteiros: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
	
        printf("maior = %d\n", a);
   } 
   else {
   
        printf("maior = %d\n", b);
}
    
    // 5. Media
    printf("\nDigite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1+nota2) /2;

    if (media >= 70) {
	
        printf("Aprovado\n");
}
    else {
	
        printf("Reprovado\n");
}

    // 6. Positivo, negativo ou zero
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("Negativo\n");
    else if (numero > 0)
        printf("Positivo\n");
    else
        printf("Zero\n");

    // 7. Par ou impar
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
	
        printf("Par\n");
        
}
    else{
	
        printf("Impar\n");
        
    }

    // 8. Calculadora
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("soma %f", x + y;);
            break;
        case 2:
            printf("sub %f", x - y;);
            break;
        case 3:
            printf("mult %f", x * y;);
            break;
        case 4:
            printf("divisao %f", x / y;);
            break;
        default:
            printf("Opcao invalida\n");
    }

    printf("Resultado = %d\n", resultado);

    // 9. Salario
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    salario = salario * (1+ 0.10/100);

    printf("Novo salario: %.2f\n", salario);

    // 10. Concurso
    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua nota: ");
    scanf("%d", &nota1);

    if (nota1 >= 60) {
	
        printf("%s: aprovado\n", nome);
    }
    else{
	
        printf("%s: reprovado\n", nome);
}
    // DESAFIO
    printf("\n===== RELATORIO =====\n");

    printf("Nome: ");
    scanf("%s", nome);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Peso: ");
    scanf("%f", &peso);

    printf("\n===== RELATORIO =====\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.2f kg\n", peso);

    return 0;
}

