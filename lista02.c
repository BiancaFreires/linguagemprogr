/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void q01() {
	int num1, num2, adic;
	printf("Digite dois números inteiros:");
	scanf("%d %d", &num1, &num2);
	adic=num1+num2;
	if (adic>10) 
	{
		printf("O número %d é maior do que 10!", adic);
	}
	if (adic<10)
	{
		printf("Error");
	}
}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8,
// caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void q02() {
	int num1, num2, soma, maior, menor;
	printf("Digite dois números inteiros:");
	scanf("%d %d", &num1, &num2);
	soma=num1+num2;
	if (soma>20)
	{
		maior=soma+8;
		printf("A soma foi maior que 20, adicionando 8, o resultado é %d.\n", maior);
	}
	if (soma<20)
	{
		menor=soma-5;
		printf("A soma foi menor que 20, subtraído 5, o resultado é %d.\n", menor);
	}
}


//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void q03() {
	int  num, num1;
	printf("Digite um número:");
	scanf("%d", &num);
	if (num%3==0)
	{
		printf("É múltiplo de 3");
	}
	else
	{
		printf("Não é múltiplo de 3");
	}

}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void q04() {
	int num;
	printf("Digite um número:");
	scanf("%d", &num);
	if (num%5==0)
	{
		printf("O número %d, é divisível por 5.\n", num);
	}
	else
	{
		printf("O número %d, não é divisível por 5.\n", num);
	}
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void q05() {
	int num;
	printf("Digite um número:");
	scanf("%d", &num);
	if (num%3==0 && num%7==0)
	{
		printf("O número %d, é divisível por 3 e 7.\n", num);
	}
	else
	{
		printf("O número %d, não é divisível por 3 e 7.\n", num);
	}
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void q06() {
	float salbru, prest, empr, calc;
	printf("Digite o valor do seu sálario bruto:");
	scanf("%f", &salbru);
	printf("Digite o valor da prestação:");
	scanf("%f", &prest);
	calc=(salbru/100*30)-prest;
	if (empr<calc)
	{
		printf("Empréstimo concedido!\n");
	}
	else
	{
		printf("Empréstimo não concedido!\n");
	}
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void q07() {
	int num;
	printf("Digite um número:");
	scanf("%d", &num);
	if (num>=20 && num<=50)
	{
		printf("O número %d está entre 20 e 50.\n", num);
	}
	else
	{
		printf("O número %d não está entre 20 e 50.\n", num);
	}
}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void q08() {
	int num;
	printf("Digite um número:");
	scanf("%d", &num);
	if (num>20)
	{
		printf("O número %d é maior que 20.\n", num);
	}
	else if (num==20)
	{
		printf("O número é igual a 20.\n");
	}
	else 
	{
		printf("O número é menor do que 20.\n");
	}
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void q09() {
	int ano, atual, idade;
	printf("Digite o ano de seu nascimento e o ano atual:");
	scanf("%d %d", &ano, &atual);
	if (ano>atual)
	{
		printf("Inválido\n");
	}
	idade=atual-ano;
	printf("Sua idade é %d.\n", idade);
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void q10() {
	int num1, num2, num3;
	printf("Digite três números inteiros:");
	scanf("%d %d %d", &num1, &num2, &num3);
		if (num1>num2>num3)
	{
		printf("A ordem crescente é %d %d %d\n", num1, num2, num3);
	}
	else if (num2>num3>num1)
	{
		printf("A ordem crescente é %d %d %d\n", num2, num3, num1);
	}
	else if (num3>num1>num2)
	{
		printf("A ordem crescente é %d %d %d\n", num3, num1, num2);
	}
	else
	{
		printf("A ordem crescente é %d %d %d\n", num2, num1, num3);
	}
}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void q11() {
	int num1, num2, num3, maior;
	printf("Digite três números:");
	scanf("%d %d %d", &num1, &num2, &num3);
	maior=num1;
	if (num2>maior)
	{
		maior=num2;
	}
	if (num3>maior)
	{
		maior=num3;
	}
	printf("O maior número é %d\n", maior);
}
//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void q12() {
	int idad;
	printf("Qual a sua idade?");
	scanf("%d", &idad);
	if (idad>18 && idad <65)
	{
		printf("Maior de idade!\n");
	}
	if (idad<18)
	{
		printf("Menor de idade!\n");
	}
	if (idad>64)
	{
		printf("Idade superior a 65 anos!\n");
	}

}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de umaluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, 
//a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void q13() {
	char nome[35];
	float n1, n2, nf;
	printf("Digite o seu nome:");
	scanf(" %35[^\n]", &nome);
	printf("Digite a nota da prova 1 e da prova 2:");
	scanf("%f %f", &n1, &n2);
	nf=n1+n2/2;
	if (nf>6)
	{
		printf("Nome: %s, Aprovado!\n", nome);
	}
	if (nf<7)
	{
		printf("Nome: %s, Reprovado!\n", nome);
	}
}


//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void q14() {
	float sal, desc20, desc25, desc30;
	printf("Digite o valor do seu salário:");
	scanf("%f", &sal);
	desc20=sal-(sal/100*20);
	desc25=sal-(sal/100*25);
	desc30=sal-(sal/100*30);
	if (sal<599)
	{
		printf("Seu salário é de %f, insento de descontos!\n", sal);
	}
	else if (sal>600 && sal<1201)
	{
		printf("Seu sálario é de %f, com desconto de 20 porcento fica %f.\n", sal, desc20);
	}
	else if (sal>1200 && sal<2001)
	{
		printf("Seu sálario é de %f, com desconto de 25 porcento fica %f.\n", sal, desc25);
	}
	else if (sal>2000)
	{
		printf("Seu sálario é de %f, com desconto de 30 porcento fica %f.\n", sal, desc30);
	}
}

//15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor 
//do produto e imprima o valor da venda.
void q15() {
	float compra, lucro, lucro45, lucro2, lucro30;
	printf("Digite o valor do produto que o comerciante comprou:");
	scanf("%f", &compra);
	lucro=compra/100*45;
	lucro45=compra+lucro;
	if (compra<20)
	{
		printf("O lucro será de 45 porcento, totalizando %f.\n", lucro45);
	}
	lucro2=compra/100*30;
	lucro30=compra+lucro;
	if (compra >19)
	{
		printf("O lucro será de 30 porcento, totalizando %f.\n", lucro30);
	}
}


//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void q16() {
	int idade;
	printf("Digite a idade do nadador:");
	scanf("%d", &idade);
	if (idade>4 && idade<8)
	{
		printf("Idade: %d.\nCategoria: Infantil A.\n", idade);
	}
	else if (idade>7 && idade<11)
	{
		printf("Idade: %d.\nCategoria: Infantil B.\n", idade);
	}
	else if (idade>10 && idade<14)
	{
		printf("Idade: %d.\nCategoria: Juvenil A.\n", idade);
	}
	else if (idade>13 && idade<18)
	{
		printf("Idade: %d.\nCategoria: Juvenil B.\n", idade);
	}
	else if (idade>17)
	{
		printf("Idade: %d.\nCategoria: Sênior.\n", idade);
	}
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. 
//Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void q17() {
	char nome[40];
	int idade;
	printf("Digite o seu nome:");
	scanf(" %40[^\n]", &nome);
	printf("Digite a sua idade:");
	scanf("%d", &idade);
	if (idade<10)
	{
		printf("%s.\nO valor a ser pago é R$30,00.\n", nome);
	}
	if (idade>9 && idade<30)
	{
		printf("%s.\nO valor a ser pago é R$60,00.\n", nome);
	}
	if (idade>28 && idade<46)
	{
		printf("%s.\nO valor a ser pago é R$120,00.\n", nome);
	}
	if (idade>44 && idade<60)
	{
		printf("%s.\nO valor a ser pago é R$150,00.\n", nome);
	}
	if (idade>64)
	{
		printf("%s.\nO valor a ser pago é R$150,00.\n", nome);
	}
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite umnúmero fora desse intervalo, 
//deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void q18() {
	int mes;
	printf("Digite o número do mês desejado:");
	scanf("%d", &mes);
	switch(mes)
	{
		case 1:
		printf("Janeiro\n");
		break;
		case 2:
		printf("Fevereiro\n");
		break;
		case 3:
		printf("Março\n");
		break;
		case 4:
		printf("Abril\n");
		break;
		case 5:
		printf("Maio\n");
		break;
		case 6:
		printf("Junho\n");
		break;
		case 7:
		printf("Julho\n");
		break;
		case 8:
		printf("Agosto\n");
		break;
		case 9:
		printf("Setembro\n");
		break;
		case 10:
		printf("Outubro\n");
		break;
		case 11:
		printf("Novembro\n");
		break;
		case 12:
		printf("Dezembro\n");
		break;
		default:
		printf("Mês inexistente!\n");
		break;
	}
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de 
//pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void q19() {
	int pontos, a1, a2, a3, b1, b2, b3, c1, c2, c3;
	printf("Digite os pontos obtidos pelos três jogadores da Equipe 1:");
	scanf("%d %d %d", &a1, &a2, &a3);
	printf("Digite os pontos obtidos pelos três jogadores da Equipe 2:");
	scanf("%d %d %d", &b1, &b2, &b3);
	printf("Digite os pontos obtidos pelos três jogadores da Equipe 3:");
	scanf("%d %d %d", &c1, &c2, &c3);
	printf("Para Equipe 1 temos:\n");
	{
		if (a1<a2<a3)
		{
			printf("%d\n %d\n %d\n", a3, a2, a1);
		}
		else if (a2<a3<a1)
		{
			printf("%d\n %d\n %d\n", a1, a3, a2);
		}
		else if (a3<a1<a2)
		{
			printf("%d\n %d\n %d\n", a2, a1, a3);
		}
		else 
		{
			printf("%d\n %d\n %d\n", a3, a1, a2);
		}
	}
	printf("Para Equipe 2 temos:\n");
	{
		if (b1<b2<b3)
		{
			printf("%d\n %d\n %d\n", b3, b2, b1);
		}
		else if (b2<b3<b1)
		{
			printf("%d\n %d\n %d\n", b1, b3, b2);
		}
		else if (b3<b1<b2)
		{
			printf("%d\n %d\n %d\n", b2, b1, b3);
		}
		else 
		{
			printf("%d\n %d\n %d\n", b3, b1, b2);
		}
	}
	printf("Para Equipe 3 temos:\n");
	{
		if (c1<c2<c3)
		{
			printf("%d\n %d\n %d\n", c3, c2, c1);
		}
		else if (c2<c3<c1)
		{
			printf("%d\n %d\n %d\n", c1, c3, c2);
		}
		else if (c3<c1<c2)
		{
			printf("%d\n %d\n %d\n", c2, c1, c3);
		}
		else 
		{
			printf("%d\n %d\n %d\n", c3, c1, c2);
		}
	}
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o 
//saldomédio no último ano. Faça um programa que leia o saldo médio de um 
//cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma 
//mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void q20() {
	float smedioano, valordosaldo30, valordosaldo40, valordosaldo50;
	printf("Digite o seu saldo médio do último ano:");
	scanf("%f", &smedioano);
	if (smedioano>0 && smedioano<501)
	{
		printf("Sem direito a crédito!\n");
	}
	if (smedioano>500 && smedioano<1001)
	{
		valordosaldo30=(smedioano/100*30)+smedioano;
		printf("Crédito de 30 porcento condedido! Totalizando: %f.\n", valordosaldo30);
	}
	if (smedioano>1000 && smedioano<3001)
	{
		valordosaldo40=(smedioano/100*40)+smedioano;
		printf("Crédito de 40 porcento condedido! Totalizando: %f.\n", valordosaldo40);
	}
	if (smedioano>3000)
	{
		valordosaldo50=(smedioano/100*50)+smedioano;
		printf("Crédito de 50 porcento condedido! Totalizando: %f.\n", valordosaldo50);
	}
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, 
//o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. 
//Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void q21() {
	char livro[60], user;
	printf("Digite 1 para aluno e 2 para professor:\n");
	switch (user)
	{
		case 1:
		printf("Nome do livro desejado:");
		scanf(" %60[^\n]", &livro);
		printf("O livro %s foi emprestado para um aluno e possui um prazo de três dias para devolução.\n", livro);
		break;
		case 2:
		printf("O livro %s foi emprestado para um professor e possui um prazo de dez dias para devolução.\n", livro);
		break;
		default:
		printf("O livro %s não pode ser emprestado!\n", livro);
		break;
	}
}


//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo C, 8 kmpor litro.


//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal


//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dosmotoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe omês em que o emplacamento deve ser renovado.


//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos


int main() {
    q21();
    return EXIT_SUCCESS;
}