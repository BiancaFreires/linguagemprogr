#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q01() {
    printf("João Paulo");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02() {
    printf("%d",30*27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03() {
    //int=inteiro  float=real  char=caractere  char[20]
    int num1 = 5;
    int num2 = 8;
    int num3 = 12;
    float media = (5+8+12)/3.0;
    printf("Média de %d %d %d = %.2f", num1, num2, num3, media);

}

//4. Faça um programa que leia e imprima um número inteiro.
void q04() {
    int numero;
    printf("Digite um número inteiro:");
    scanf("%d", &numero);
    printf("O número digitado é : %d", numero);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q05() {
    float numero, numero1;
    printf("Digite dois números reais:");
    scanf("%f %f", &numero, &numero1);
    printf("Os números digitados foram: %f, %f", numero, numero1);
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q06() {
    int num, ant, suc;
    printf("Digite um número:");
    scanf("%d", &num);
    ant=num-1;
    suc=num+1;
    printf("O número que você digitou foi: %d\n. O antecessor é %d\n. O sucessor é %d\n", num, ant, suc);
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q07() {
    char nome[50], endereco[70], telefone[14];
    printf("Nome: ");
    scanf(" %50[^\n]", &nome);
    printf("Endereço: ");
    scanf(" %70[^\n]", &endereco);
    printf("Telefone: ");
    scanf(" %14[^\n]", &telefone);
    printf("Nome: %s\nEndereço: %s\nTelefone: %s\n", nome, endereco, telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q08() {
    int num1, num2, num3;
    printf("Digite dois números:");
    scanf("%d %d", &num1, &num2);
    num3=num1-num2;
    printf("Os númeos digitados foram: %d %d\n. A subtração deles é: %d", num1, num2, num3);
}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q09() {
    float num, num1;
    printf("Digite um número:");
    scanf("%f", &num);
    num1=num/4.0;
    printf("O número que você digitou foi: %f. O ¼ do número é: %f", num, num1);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10() {
    float num1, num2, num3, num4;
    printf("Digite três números:");
    scanf("%f %f %f", &num1, &num2, &num3);
    num4=num1+num2+num3/3.0;
    printf("Os números que você digitou foram: %f %f %f.\n A média aritmética destes números é: %f", num1, num2, num3, num4);
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11 () {
    float num1, num2, adi, sub, mul, div;
    printf("Digite dois números:");
    scanf("%f %f", &num1, &num2);
    adi=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    printf("Os números digitados foram: %f %f.\n A Soma é: %f.\n A Subtração é: %f.\n A Multiplicação é: %f.\n A Divisão é: %f.", num1, num2, adi, sub, mul, div);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12 () {
    float num, numq;
    printf("Digite um número:");
    scanf("%f", &num);
    numq=num*num;
    printf("O número digitado é: %f.\n O quadrado deste número é: %f", num, numq);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13 () {
    float saldo, reajuste;
    printf("Digite o saldo da sua conta poupança:");
    scanf("%f", &saldo);
    reajuste=saldo*1.02;
    printf("O saldo disponível foi: %f.\n O novo saldo é: %f", saldo, reajuste);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q13();
    return EXIT_SUCCESS;
}