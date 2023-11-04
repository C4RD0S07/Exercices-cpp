#include <iostream>
#include <string>
#include <array>
using namespace std;

void ex1() {

	//Escreve um algoritmo que calcule e mostra o dobro de número.

	float numero, resultado;

	cout << "Introduza um numero: ";
	cin >> numero;

	resultado = numero * 2;

	cout << "O dobro do numero introduzido e: " << resultado;

}

void ex2() {

	//Escreve um algoritmo que calcule e mostre quanto o trabalhador deverá receber no fim do mês de acordo com a quantidade de horas trabalhadas e o valor que é pago por cada hora.

	float qhoras, vpago, vfinal;

	cout << "Introduza o valor pago por hora: ";
	cin >> vpago;

	cout << "Introduza a quantidade de horas trabalhados do mes: ";
	cin >> qhoras;

	vfinal = vpago * qhoras;

	cout << "O trabalhador devera receber " << vfinal;

}

void ex3() {

	//Escreve um algoritmo que calcule o IMC de uma pessoa (IMC é o peso divido pelo dobro da altura).

	float IMC, peso, altura;

	cout << "Introduza o peso: ";
	cin >> peso;

	cout << "Introduza a altura: ";
	cin >> altura;

	IMC = peso / (altura * 2);

	cout << "O IMC e: " << IMC;

}

void ex4() {

	//Escreve um algoritmo que calcule a idade de uma pessoa, sabendo o ano de nascimento.

	int anascimento, ano, idade;

	cout << "Introduza o ano atual: ";
	cin >> ano;

	cout << "Introduza a sua data de nascimento: ";
	cin >> anascimento;

	idade = ano - anascimento;

	cout << "Sua idade: " << idade << " anos.";

}

void ex5() {

	//Escreve um algoritmo que calcule o valor do perímetro de retângulo. P = 2 \* (c + l).

	float comprimento, largura, perimetro;

	cout << "Introduza o comprimento do retangulo: ";
	cin >> comprimento;

	cout << "Introduza a largura do retangulo: ";
	cin >> largura;

	perimetro = 2 * (comprimento + largura);

	cout << "O perimetro do retangulo e: " << perimetro;

}

void ex6() {

	//Escreve um algoritmo que calcule e mostre o valor da gorjeta a ser paga ao garçon (10% valor da conta).

	float vconta, gorjeta;

	cout << "Introduza o valor da conta: ";
	cin >> vconta;

	gorjeta = vconta * 0.10;

	cout << "O valor da gorjeta e: " << gorjeta << " euros.";

}

void ex7() {

	//Escreve um algoritmo que calcule o troco a ser pago a um cliente, sabendo o preço total da compra e o valor dado para o pagamento.

	float ptotal, vdado, troco;

	cout << "Introduza o preco total da compra: ";
	cin >> ptotal;

	cout << "Introduza o valor dado para o pagamento: ";
	cin >> vdado;

	troco = vdado - ptotal;

	cout << "O valor do troco e: " << troco << " euros.";

}

void ex8() {

	//Escreve um algoritmo que receba de entrada um número inteiro e mostre o seu sucessor.

	int n, s;

	cout << "Introduza um numero inteiro: ";
	cin >> n;

	s = n + 1;

	cout << "O numero sucessor do numero " << n << " e: " << s;

}

void ex9() {

	//Escreve um algoritmo que receba de entrada um número inteiro e mostre o seu antecessor.

	int n, a;

	cout << "Introduza um numero inteiro: ";
	cin >> n;

	a = n - 1;

	cout << "O antecessor do numero " << n << " e: " << a;

}

void ex10() {

	//Escreve um algoritmo que receba de entrada um número inteiro e a mostre a metade deste número.

	int n;
	float m;

	cout << "Introduza um numero inteiro: ";
	cin >> n;

	m = (float) n / 2;

	cout << "A metade do numero " << n << " e: " << m;

}

void ex11() {

	//Escreve um algoritmo para calcular a média de um aluno a partir de duas notas. O programa deve mostra a média e também uma mensagem informando se o aluno foi aprovado ou reprovado. 
	//Sabe-se que o aluno é reprovado se a sua média for inferior a 10.

	float n1, n2, m;

	cout << "Introduza a primeira nota do aluno: ";
	cin >> n1;

	cout << "Introduza a segunda nota do aluno: ";
	cin >> n2;

	m = (n1 + n2) / 2;

	cout << "A medio do aluno e: " << m << endl;

	if (m < 10) {

		cout << "O aluno reprovou";
	}
	else {
		cout << "O aluno aprovou";
	}
}

void ex12() {

	//Escreve um algoritmo que calcule o resto da divisão por 2 de um número inserido pelo utilizador.

	int n, r;

	cout << "Introduza um numero: ";
	cin >> n;

	r = n % 2;

	cout << "O resto da divisao do numero " << n << " e: " << r;
}

void ex13() {

	//Escreve um algoritmo que identifique se o número é par ou ímpar.

	int n, r;

	cout << "Introduza um numero: ";
	cin >> n;

	r = n % 2;

	if (r == 1) {

		cout << "O numero " << n << " e um numero impar.";

	}
	else {

		cout << "O numero " << n << " e um numero par.";

	}
}

void ex14() {

	//Escreve um algoritmo que identifique se o número é positivo ou negativo.

	float numero;

	cout << "Introduza um numero: ";
	cin >> numero;

	if (numero >= 0) {
		cout << "O numero " << numero << " e positivo.";
	}
	else {
		cout << "O numero " << numero << " e negativo.";
	}
}

void ex15() {

	//Escreve um algoritmo que receba uma idade e classifique nas categorias:
	//Infantil A (5 – 7 anos)
	//Infantil B (8 -10 anos)
	//Juvenil A (11 – 13 anos)
	//Juvenil B (14 - 17 anos)
	//Adulto(maior que 18 anos)

	int idade;

	cout << "Introduza a idade: ";
	cin >> idade;

	if (idade < 5) {
		cout << "Sem categoria.";
	}
	else if (idade >= 5 && idade <= 7) {
		cout << "Infantil A.";
	}
	else if (idade >= 8 && idade <= 10) {
		cout << "Infantil B.";
	}
	else if (idade >= 11 && idade <= 13) {
		cout << "Juvenil A.";
	}
	else if (idade >= 14 && idade <= 17) {
		cout << "Juvenil B.";
	}
	else {
		cout << "Adulto";
	}
}

void ex16() { //PERGUNTAR AO PROF SE PODE SE CONSIDERAR CORRETO

	//Escreve um algoritmo que cálculo o reajuste do salário de um funcionário, sabendo que o funcionário deverá receber uma atualização de 15%
	//se o seu salário seja menor ou igual a 525 €, caso contrário, será de 10%.

	float salario, atualizacao;

	cout << "Introduza o salario: ";
	cin >> salario;

	if (salario <= 525) {
		atualizacao = salario * 0.15;
	}
	else {
		atualizacao = salario * 0.10;
	}

	cout << "Reajuste do salario: " << atualizacao + salario << " euros.";

}

void ex17() {

	//Escreve um algoritmo que leia o plano de trabalho e o salário atual de um funcionário que calcule e imprima o seu novo salário. Use o comando switch.
	//Plano A - Aumento de 10%
	//Plano B - Aumento de 15%
	//Plano C - Aumento de 20%

	float salario, resultado;
	char ptrabalho;

	cout << "Introduza o salario: ";
	cin >> salario;

	cout << "Introduza um plano de trabalho (A/B/C): ";
	cin >> ptrabalho;

	switch (ptrabalho) {
		case 'A':
			resultado = salario * 0.10;
			break;

		case 'B':
			resultado = salario * 0.15;
			break;

		case 'C':
			resultado = salario * 0.20;
			break;
	}

	cout << "O salario com o plano de trabalho da: " << resultado + salario << " euros.";

}

void ex18() {

	//Escreve um algoritmo que leia um número entre 0 e 10, e escreva este número por extenso. Use o comando switch.

	int numero;

	cout << "Introduza um numero inteiro de 0 a 10: ";
	cin >> numero;

	if (numero < 0 || numero > 10) {
		cout << "So pode numeros entre 0 e 10. Tente novamente.";
	}
	else {
		switch (numero) {
			case 0:
				cout << "Zero.";
				break;

			case 1:
				cout << "Um.";
				break;

			case 2:
				cout << "Dois.";
				break;

			case 3:
				cout << "Tres.";
				break;

			case 4:
				cout << "Quatro.";
				break;

			case 5:
				cout << "Cinco.";
				break;

			case 6:
				cout << "Seis.";
				break;

			case 7:
				cout << "Sete.";
				break;

			case 8:
				cout << "Oito.";
				break;

			case 9:
				cout << "Nove.";
				break;

			case 10:
				cout << "Dez.";
				break;
		}
	}
}

void ex19() {

	//Escreve um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. 
	//Considere que a cada execução somente será calculada um item. Use o comando switch.
	//ESPECIFICACAO   | CODIGO | PRECO
	//Cachorro quente |  100   | 1.20
	//Bauru simples   |  101   | 1.30
	//Bauru com ovo   |  102   | 1.50
	//Hamburguer      |  103   | 1.20
	//Cheeseburguer   |  104   | 1.30
	//Refrigerante    |  105   | 1.00

	int codigo, quantidade;

	cout << "Coloque o codigo: ";
	cin >> codigo;

	if (codigo < 100 || codigo > 105) {
		cout << "Este codigo nao existe. Tente novamente.";
		exit(0);
	}

	cout << "Quantidade: ";
	cin >> quantidade;

	if (quantidade <= 0) {
		cout << "Quantidade mal introduzida. Tente novamente.";
		exit(0);
	}

	switch (codigo) {
		case 100:
			cout << "O valor a pagar e: " << quantidade * 1.2;
			break;

		case 101:
			cout << "O valor a pagar e: " << quantidade * 1.3;
			break;

		case 102:
			cout << "O valor a pagar e: " << quantidade * 1.5;
			break;

		case 103:
			cout << "O valor a pagar e: " << quantidade * 1.2;
			break;

		case 104:
			cout << "O valor a pagar e: " << quantidade * 1.3;
			break;

		case 105:
			cout << "O valor a pagar e: " << quantidade * 1;
			break;

	}
}
 
void ex20() {

	//Faz um algoritmo que receba um número inicial e um número final e depois mostre todos os números que compõe o intervalo deles. (for).

	int nfinal, ninicial, intervalo;

	cout << "Introduza o numero inicial: ";
	cin >> ninicial;

	cout << "Introduza o numero final: ";
	cin >> nfinal;

	if (ninicial > nfinal) {
		for (int i = ninicial; i >= nfinal; i--) {
			cout << i << endl;
		}
	}
	else {
		for (int i = ninicial; i <= nfinal; i++) {
			cout << i << endl;
		}
	}
}

void ex21() {

	//Faz um algoritmo que receba um número e moste a sequência entre o número inserido até 100 (while).

	int numero;

	cout << "Introduza um numero menor que 100: ";
	cin >> numero;

	if (numero >= 100) {
		cout << "Este numero e maior que 100. Tente novamente.";
	}
	else {
		while (numero <= 100) { //enqt a condicao for verdadeira vai repetindo os comandos
			cout << numero << endl;
			numero++;
		}
	}
}

void ex22() {

	//Faz um algoritmo que receba uma senha e mostre “Correta!” se o valor corresponder a “12345”. Caso contrário, peça a senha novamente. (do ... while).

	int senha;

	do { // faca isso enqt a senhor for diferente de 12345.
		cout << "Introduza a senha: ";
		cin >> senha;

		if (senha != 12345) {
			cout << "Senha incorreta." << endl;
		}
	} 
	while (senha != 12345);
	cout << "Senha Correta!";
}

void ex23() {

	//Faz um algoritmo que receba um número inteiro, calcule e imprime a tabuada desse número utilizando uma estrutura de repetição.

	int numero, multiplicador = 0, resultado = 0;

	cout << "Introduza um numero inteiro: ";
	cin >> numero;

	while (resultado != numero * 10) {
		resultado = numero * multiplicador;
		cout << numero << " * " << multiplicador << " = " << resultado << endl;
		multiplicador++;
	}
}

void ex231() {

	//Faz um algoritmo que receba um número inteiro, calcule e imprime a tabuada desse número utilizando uma estrutura de repetição.

	int numero;

	cout << "Introduza um numero para resolver a tabuada: ";
	cin >> numero;

	for (int i = 0; i <= 10; i++) {
		cout << numero << " x " << i << " = " << numero * i << endl;
	}
}

void ex24() {

	//Faz um algoritmo que receba um valor maior que 10. Escrever todos os números pares entre 1 e o valor recebido.

	int algoritmo;

	do {
		cout << "Introduza um numero maior que 10: ";
		cin >> algoritmo;

		if (algoritmo <= 10) {
			cout << "O numero introduzido e menor que 10." << endl;
		}
	}
	while (algoritmo <= 10);

	for (int i = 1; i <= algoritmo; i++) { // enqt o i for menor ou igual ao algoritmo ele vai smp repetindo.
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}
}

void ex25() {

	//Faz um algoritmo que receba números inteiros entre 0 e 100 pelo teclado. A condição de parar deve ser 0 (zero). No final mostre:
	//Maior número
	//Menor número
	//Média dos números

	int numero, nmaior = 0, nmenor = 100, contador = 0, soma = 0;
	float media;

	do {
		do {
			cout << "Introduza um numero inteiro entre 0 e 100: ";
			cin >> numero;

			if (numero < 0 || numero > 100) {
				cout << "O numero introduzido nao e entre 0 e 100." << endl;
			}
		} while (numero < 0 || numero > 100);

		if (numero >= 1 && numero <= 100) {
			if (numero > nmaior) {
				nmaior = numero;
			}
			if (numero < nmenor) {
				nmenor = numero;
			}
			contador++;
			soma += numero;
		}
	} while (numero != 0);
	 
	media = (float) soma / contador;

	cout << "O numero maior introduzido: " << nmaior << endl;
	cout << "O numero menor introduzido: " << nmenor << endl;
	cout << "Media: " << media;
}

void ex26() {

	//Faz um algoritmo que gere números de 1000 a 1999 e escreva aqueles que dividindo por 11 dão resto igual a 5.

	for (int i = 1000; i <= 1999; i++) {
		
		if (i % 11 == 5) {
			cout << i << endl;
		}
	}
}

void ex27() {

	//Escreve um algoritmo que recebe 10 valores, um de cada vez, e que conte quantos deles estão no intervalo [10,20] e quantos estão fora do intervalo.

	int valores, dentro = 0, fora = 0;

	for (int i = 1; i <= 10; i++) {
		cout << "Introduza um numero: ";
		cin >> valores;

		if (valores >= 10 && valores <= 20) {
			dentro += 1;
		}
		else {
			fora += 1;
		}
	}
	cout << "Tem " << dentro << " numero(s) dentro do intervalo de 10 e 20." << endl;
	cout << "Tem " << fora << " numero(s) fora do intervalo de 10 e 20.";
}

void ex271() {

	//Escreve um algoritmo que recebe um vetor de 10 numeros, um de cada vez, e que conte quantos deles estão no intervalo [10,20] e quantos estão fora do intervalo.

	int vetor[9], dentro = 0, fora = 0;

	for (int i = 0; i <= 9; i++) {
		cout << "Introduza um numero para a posicao " << i << ": ";
		cin >> vetor[i];

		if (vetor[i] >= 10 && vetor[i] <= 20) {
			dentro += 1;
		}
		else {
			fora += 1;
		}
	}
	cout << "Tem " << dentro << " numero(s) dentro do intervalo de 10 e 20." << endl;
	cout << "Tem " << fora << " numero(s) fora do intervalo de 10 e 20.";
}

void ex28() {

	//Escreve um algoritmo que leia a altura de 15 pessoas e mostre:
	//A menor altura do grupo;
	//A maior altura do grupo.

	float altura, maior = 0, menor = 400;

	for (int i = 1; i <= 15; i++) {
		cout << "Introduza a altura da " << i << " pessoa: ";
		cin >> altura;

		if (altura > maior) {
			maior = altura;
		}
		if (altura < menor) {
			menor = altura;
		}
	}
	cout << "Menor altura: " << menor << endl;
	cout << "Maior altura: " << maior;
}

void ex29() {

	//Escreve um algoritmo que escreva os números ímpares entre 100 e 200.

	for (int i = 100; i <= 200; i++) {
		if (i % 2 == 1) {
			cout << i << endl;
		}
	}
}

void ex30() {

	//Escreva um algoritmo que recebe 10 valores, um de cada vez, e mostre:
	//Quantos são pares;
	//Quantos são ímparess.

	int pares = 0, impares = 0, valores;

	for (int i = 1; i <= 10; i++) {
		cout << "Introduza um numero: ";
		cin >> valores;

		if (valores % 2 == 0) {
			pares += 1;
		}
		else {
			impares += 1;
		}
	}
	cout << "Tem " << pares << " numeros pares." << endl;
	cout << "Tem " << impares << " numeros impares.";
}

void ex31() {

	//Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas. 
	//A quantidade diária de ração fornecida para cada gato é sempre a mesma. 
	//Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.

	float racao, gramas, kg;

	cout << "Introduza o peso do saco de racao: ";
	cin >> racao;

	cout << "Introduza a quantidade de comida em gramas que fornece para os gatos: ";
	cin >> gramas;
	kg = gramas / 1000;

	cout << "Apos cinco dias restaram " << racao - kg * 5 << " quilos";
}

void ex32() {

	//Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B 
	//e a variável B passe a possuir o valor da variável A. Apresentar os valores após a efetivação do processamento da troca.

	int A, B, temp;
	
	cout << "Introduza um valor para A: ";
	cin >> A;

	cout << "Introduza um valor para B: ";
	cin >> B;

	temp = A;
	A = B;
	B = temp;

	cout << "Depois da troca de A o valor e: " << A << endl;
	cout << "Depois da troca de B o valor e: " << B;
}

void ex33() {

	// Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, utilizando a fórmula VOLUME <- COMPRIMENTO x LARGURA x ALTURA.

	float comprimento, largura, altura;

	cout << "Introduza o comprimento: ";
	cin >> comprimento;

	cout << "Introdua a largura: ";
	cin >> largura;

	cout << "Introduza a altura: ";
	cin >> altura;

	cout << "O volume do retangulo e " << comprimento * largura * altura << " metros cubicos.";
}

void ex34() {
	
	//Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
	//1,2,3,4 = voto para os respectivos candidatos;
	//5 = voto nulo;
	//6 = voto em branco;
	//Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
	//total de votos para cada candidato;
	//total de votos nulos;
	//total de votos em branco;
	//Como finalizador do conjunto de votos, tem-se o valor 0.

	int escolha, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;
	do {
		cout << "1 - Votar no primeiro canditado;" << endl;
		cout << "2 - Votar no segundo canditado;" << endl;
		cout << "3 - Votar no terceiro canditado;" << endl;
		cout << "4 - Votar no quarto canditado;" << endl;
		cout << "5 - Voto nulo;" << endl;
		cout << "6 - Voto em branco;" << endl;
		cout << "0 - Conjunto de votos;" << endl;
		cout << "Introduza um numero: ";

		cin >> escolha;

		if (escolha == 1) {
			c1 += 1;
		}
		else if (escolha == 2) {
			c2 += 1;
		}
		else if (escolha == 3) {
			c3 += 1;
		}
		else if (escolha == 4) {
			c4 += 1;
		}
		else if (escolha == 5) {
			nulo += 1;
		}
		else if (escolha == 6) {
			branco += 1;
		}
	} while (escolha != 0);
	
	cout << "Total de votos para o primeiro candidato: " << c1 << endl;
	cout << "Total de votos para o segundo candidato: " << c2 << endl;
	cout << "Total de votos para o terceiro candidato: " << c3 << endl;
	cout << "Total de votos para o quarto canditado: " << c4 << endl;
	cout << "Total de votos nulos: " << nulo << endl;
	cout << "Total de votos em branco: " << branco << endl;
}

void ex35() {

	//O programa de fidelidade de uma determinada livraria premia seus clientes de acordo com o número de livros comprados a cada mês. Os pontos são atribuídos da seguinte forma:
	//Se um cliente comprar 0 livros, ele ganhará 0 pontos.
	//Se um cliente comprar um livro, ele ganhará 5 pontos.
	//Se um cliente comprar dois livros, ele ganhará 15 pontos.
	//Se um cliente comprar 3 livros, ele ganhará 30 pontos.
	//Se um cliente comprar 4 ou mais livros, ele ganhará 60 pontos.
	//Crie um algoritmo que leia o número de livros comprado por um cliente e exiba o número de pontos correspondentes.

	int qlivros, pontos = 0;

	cout << "Quantidade de livros que este cliente comprou: ";
	cin >> qlivros;

	if (qlivros == 1) {
		pontos += 5;
	}
	else if (qlivros == 2) {
		pontos += 15;
	}
	else if (qlivros == 3) {
		pontos += 30;
	}
	else if (qlivros >= 4) {
		pontos += 60;
	}
	cout << "Este cliente tem " << pontos << " pontos.";
}

void ex36() {

	//Uma loja de jogos vende cada jogo por 50 euros, mas oferece descontos conforme a quantidade comprada, conforme a tabela a seguir:
	//QUANTIDADE DE JOGOS COMPRADOS | DESCONTO
	//            10-19             |   20%
	//            20-49             |   30%
	//           50 a 99            |   40%
	//       100 ou mais            |   50%
	//Crie um algoritmo que leia o número de jogos comprados e mostre o valor da compra, o valor do desconto (se houver) e o valor total com o desconto.

	int qjogos;

	cout << "Introduza o numero de jogos comprados: ";
	cin >> qjogos;

	if (qjogos < 10) {
		cout << "Valor da compra: 50 euros." << endl << "Valor do desconto: 0%. " << endl << "Valor total com desconto: 50 euros." << endl;
	}
	else if (qjogos >= 10 && qjogos <= 19) {
		cout << "Valor da compra: 50 euros." << endl << "Valor do desconto: 20%." << endl << "Valor total com desconto: " << 50 - (50 * 0.2) << "  euros." << endl;
	}
	else if (qjogos >= 20 && qjogos <= 49) {
		cout << "Valor da compra: 50 euros." << endl << "Valor do desconto: 30%." << endl << "Valor total com desconto: " << 50 - (50 * 0.3) << "  euros." << endl;
	}
	else if (qjogos >= 50 && qjogos <= 99) {
		cout << "Valor da compra: 50 euros." << endl << "Valor do desconto: 40%." << endl << "Valor total com desconto: " << 50 - (50 * 0.4) << "  euros." << endl;
	}
	else if (qjogos >= 100) {
		cout << "Valor da compra: 50 euros." << endl << "Valor do desconto: 50%." << endl << "Valor total com desconto: " << 50 - (50 * 0.5) << "  euros." << endl;
	}
}

void ex37() {

	//Faz um algoritmo para ler a temperatura atual e conforme leitura, imprima o resultado de acordo com a tabela abaixo.
	//TEMPERATURA | RESULTADO
	//ate 15	  | muito frio
	//de 16 a 23  | frio
	//de 23 a 26  | agradavel
	//de 26 a 30  | quente
	//acima de 31 | muito quente

	float temperatura;

	cout << "Introduza a temperatura: ";
	cin >> temperatura;

	if (temperatura <= 15) {
		cout << "Muito frio.";
	}
	else if (temperatura >= 16 && temperatura <= 23) {
		cout << "Frio";
	}
	else if (temperatura >= 24 && temperatura <= 26) {
		cout << "Agradavel.";
	}
	else if (temperatura >= 27 && temperatura <= 30) {
		cout << "Quente.";
	}
	else if (temperatura > 30) {
		cout << "Muito quente";
	} 
}

void ex38() {

	//Escreve um programa que conte em ordem inversa, de 25 a zero.

	for (int i = 25; i >= 0; i--) {
		cout << i << endl;
	}
}

void ex39() {

	//Crie um programa para que retorne o somatório de todos os números entre 1 e um valor fornecido pelo utilizador. 
	//Por exemplo, se o utilizador fornecer o número 4, o computador deverá calcular o somatório 1 + 2 + 3 + 4 = 10.

	int valor, somatorio = 0;

	cout << "Introduza um valor para retornar o somatorio: ";
	cin >> valor;

	for (int i = 1; i <= valor; i++) {
		somatorio += i;
	}
	cout << somatorio;
}

void ex40() {

	//Escreve um algoritmo que leia uma quantidade de números e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100].

	int numeros, i1 = 0, i2 = 0, i3 = 0, i4 = 0;

	do {
		cout << "Introduza um numero: ";
		cin >> numeros;

		if (numeros > 0 && numeros <= 25) {
			i1 += 1;
		}
		else if (numeros >= 26 && numeros <= 50) {
			i2 += 1;
		}
		else if (numeros >= 51 && numeros <= 75) {
			i3 += 1;
		}
		else if (numeros >= 76 && numeros <= 100) {
			i4 += 1;
		}
	} while (numeros != 0);
	
	cout << "Tem " << i1 << " numeros introduzidos no intervalo de 0 a 25" << endl;
	cout << "Tem " << i2 << " numeros introduzidos no intervalo de 26 a 50" << endl;
	cout << "Tem " << i3 << " numeros introduzidos no intervalo de 51 a 75" << endl;
	cout << "Tem " << i4 << " numeros introduzidos no intervalo de 76 a 100";
}

void ex41() {

	//Faz um algoritmo que permita ao utilizador inserir a idade de quantas pessoas ele desejar. 
	//Após isso o algoritmo deve informar a soma das pessoas maiores de idade e a média de idade das pessoas maiores de idade.

	int idade, midade = 0, soma = 0;
	float media = 0;

	cout << "Introduza a idade: " << endl << "Clique em 0 para parar de introduzir idades." << endl;

	do {
		cin >> idade;

		if (idade >= 18) {
			midade += 1;
			soma += idade;
		}
	} while (idade != 0);

	media = (float)soma / midade;

	cout << "Pessoas com maiores de idade: " << midade << endl;
	cout << "Media de idade das pessoas maiores de idade: " << media;
}

void ex42() {

	//Ler um valor e escrever a mensagem O número é maior que 10! se o valor lido for maior que 10, caso contrário escrever O número é menor que 10!

	int valor;

	cout << "Introduza um valor: ";
	cin >> valor;

	if (valor > 10) {
		cout << "O numero e maior que 10!";
	}
	else if (valor < 10) {
		cout << "O numero e menor que 10!";
	}
	else if (valor == 10) {
		cout << "O numero e 10!";
	}
}

void ex43() {

	//Escreve um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem ser somados. Escreve o valor final da soma efetuada.

	int algoritmo, soma = 0;

	cout << "Introduza 10 algoritmos: ";

	for (int i = 1; i <= 10; i++) {
		cin >> algoritmo;

		if (algoritmo < 40) {
			soma += algoritmo;
		}
	}
	cout << "O resultado da soma dos algoritmos inferiores a 40 e: " << soma;
}

void ex44() {

	//Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo os valores lidos na soma). 
	// Considere que o segundo valor lido será sempre maior que o primeiro valor lido.

	int valor1, valor2, soma = 0;

	do {
		cout << "Introduza o primeiro valor: ";
		cin >> valor1;

		cout << "Introduza o segundo valor (maior que o primeiro): ";
		cin >> valor2;

		if (valor1 >= valor2) {
			cout << "O segundo valor tem de ser maior do que o primeiro. Tente novamente." << endl;
		}

	} while (valor1 >= valor2);
	
	for (int i = valor1; i <= valor2; i++) {
		soma += i;
	}

	cout << "A soma dos inteiros existente entre " << valor1 << " e " << valor2 << " e: " << soma;
}

void ex45() {

	//O mesmo exercício anterior, mas agora, considere que o segundo valor lido poderá ser maior ou menor que o primeiro valor lido, ou seja, deve-se testá-los.

	int valor1, valor2, soma = 0;

	cout << "Introduza o primeiro valor: ";
	cin >> valor1;

	cout << "Introduza o segundo valor: ";
	cin >> valor2;

	if (valor1 < valor2) {
		for (int i = valor1; i <= valor2; i++) {
			soma += i;
		}
	}
	else if (valor1 >= valor2) {
		for (int i = valor2; i <= valor1; i++) {
			soma += i;
		}
	}
	cout << "A soma dos inteiros existente entre " << valor1 << " e " << valor2 << " e: " << soma;
}

void ex46() {

	// Escreve um algoritmo que leia um número não determinado de valores e calcule a média dos valores lidos, a quantidade de valores positivos, 
	// a quantidade de valores negativos e o percentual de valores negativos e positivos. Mostre os resultados.

	float media = 0, soma = 0, valores, totalvalores = 0, negativos = 0, positivos = 0;

	cout << "Introduza valores (0 para encerrar): " << endl;

	do {
		cin >> valores;

		if (valores > 0) {
			totalvalores += 1;
			positivos += 1;
			soma += valores;
		}
		else if (valores < 0) {
			totalvalores += 1;
			negativos += 1;
			soma += valores;
		}
	} while (valores != 0);

	cout << "Media dos valores introduzidos: " << soma / totalvalores << endl;
	cout << "Quantidade de valores positivos: " << positivos << endl;
	cout << "Quantidade de valores negativos: " << negativos << endl;
	cout << "Percentual dos valores positivos: " << (positivos * 100) / totalvalores << "%" << endl;
	cout << "Percentual dos valores negativos: " << (negativos * 100) / totalvalores << "%";
}

void ex47() {

	//Escreve um algoritmo que leia um vetor com 10 posições de números inteiros e verifique se um determinado valor, 
	//também inserido pelo utilizador se está no vetor. Caso o elemento não esteja no vetor, apresente uma mensagem informar que não está.

	int vetor[10], valor, posicao = -1;
	bool encontrado = false;

	for (int i = 0; i < 10; i++) {
		cout << "Introduza um valor para a posicao " << i << ": ";
		cin >> vetor[i];
	}
	cout << "Digite um valor para procurar no vetor: ";
	cin >> valor;

	for (int i = 0; i < 10; i++) {
		if (vetor[i] == valor) {
			encontrado = true;
			posicao = i;
			break;
		}
	}

	if (encontrado == true) {
		cout << "O valor " << valor << " foi encontrado na posicao " << posicao;
	}
	else {
		cout << "O valor " << valor << " nao foi encontrado.";
	}
}

void ex48() {

	//Faz um programa que possua um vetor designado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
	//Atribua os seguintes valores a e esse vetor: 1, 0, 5, -2, -5, 7.
	//Armazene em uma variável inteira a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre.
	//Mostre cada valor do vetor A, um em cada linha.

	int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

	soma = A[0] + A[1] + A[5];

	cout << "O resultado da soma das posicoes 0, 1 e 5 e: " << soma << endl;
	
	cout << "Cada valor do vetor A:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << A[i] << endl;
	}
}

void ex49() {

	//Faz um programa que leia de seis números inteiros, calcule e mostre:
	//A quantidade de números pares
	//Quais os números pares
	//A Quantidade de números ímpares
	//Quais os números ímpares

	int valores, pares = 0, impares = 0;
	int* vetorp = new int[pares];
	int* vetori = new int[impares];

	cout << "Introduza 6 valores inteiros: " << endl;

	for (int i = 0; i < 6; i++) {
		cin >> valores;

		if (valores % 2 == 0) {
			pares += 1;
			vetorp[pares - 1] = valores;
		}
		else if (valores % 2 == 1) {
			impares += 1;
			vetori[impares - 1] = valores;
		}
	}
	cout << "Quantidade de numeros pares: " << pares << endl;
	cout << "Quantidade de numeros impares: " << impares << endl;
	
	cout << "Numeros pares introduzidos: " << endl;;
	for (int i = 1; i < pares; i++) {
		cout << "posicao " << i << " = " << vetorp[i] << endl;
	}

	cout << "Numero impares introduzidos: " << endl;
	for (int i = 0; i < impares; i++) {
		cout << "posicao " << i << " = " << vetori[i] << endl;
	}
}

void ex50() {

	//Faz um programa que leia um vetor com dez números inteiros, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.

	int vetor[10], negativos = 0, positivos = 0, soma = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Introduza um valor para a posicao " << i << ": ";
		cin >> vetor[i];

		if (vetor[i] < 0) {
			negativos += 1;
		}
		else {
			positivos += 1;
			soma += vetor[i];
		}
	}
	cout << "Quantidade de numeros negativos: " << negativos << endl;
	cout << "Soma dos valores positivos: " << soma;
}

void ex51() {

	// Faz um programa que alimente um vetor, com um número de posições definidas pelo utilizador. Este vetor deverá armazenar um conjunto de nomes em diferentes posições. 
	// Crie um mecanismo para alimentar elementos no vetor e pesquisar por um valor existente.
	// ========== MENU ==========
	// 1) Registrar nomes
	// 2) Pesquisar um nome
	// 3) Listar todos os nomes
	// 4) Sair do programa
	// Digite uma opcao:

	bool encontrado = false;
	int opcao, quantidade, posicao, opcao2;
	string nprocurado, vetor[500];
	//string* vetor = new string[quantidade * 10];

	do {
		cout << "========== MENU ==========" << endl;
		cout << "1) Registrar nomes" << endl;
		cout << "2) Pesquisar um nome" << endl;
		cout << "3) Listar todos os nomes" << endl;
		cout << "4) Sair do programa" << endl;
		cout << "Digite uma opcao:" << endl;
		
		cin >> opcao;

		if (opcao == 1) {
			cout << "Quantos nomes gostaria de registrar?" << endl;
			cin >> quantidade;

			for (int i = 0; i < quantidade; i++) {
				cout << "Registre um nome para a posicao " << i << ": " << endl;
				cin >> vetor[i];
			}
		}
		else if (opcao == 2) {
			cout << "Escreva o nome que deseja pesquisar: ";
			cin >> nprocurado;

			for (int i = 0; i < quantidade; i++) {
				if (vetor[i] == nprocurado) {
					encontrado = true;
					posicao = i;
					break;
				}
			}
			do {
				if (encontrado == true) {
					cout << "O nome " << nprocurado << " foi encontrado na posicao " << posicao << endl;
					cout << "0) Voltar ao menu." << endl;
				}
				else {
					cout << "O nome " << nprocurado << " nao foi encontrado." << endl;
					cout << "0) Voltar ao menu." << endl;
				}
				cin >> opcao2;
			} while (opcao2 != 0);
			
		}
		else if (opcao == 3) {
			do {
				cout << "Todos os nomes registrados: " << endl;
				for (int i = 0; i < quantidade; i++) {
					cout << vetor[i] << endl;
				}
				cout << "0) Voltar ao menu." << endl;
				cin >> opcao2;
			} while (opcao2 != 0);
		}
		else if (opcao != 4) {
			cout << "Esta opcao nao existe. Tente novamente." << endl;
		}
	} while (opcao != 4);
}

void ex52() {

	//Faz um programa que receba o nome de cinco produtos e os seus respetivos preços, armazene os em dois vetores separados, um para os produtos e o outro para os preços. 
	//O programa deve calcular e mostrar:
	//A quantidade de produtos com preço inferior a 50.00 euros;
	//O nome dos produtos com preço entre os 50.00 e 100.00 euros;
	//A média dos preços dos produtos com preço superior a 100.00 euros.

	string produtos[5];
	float precos[5];
	int p50 = 0, p100 = 0, soma = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Introduza um produto para a posicao " << i << ": ";
		cin >> produtos[i];

		cout << "Introduza o preco do produto introduzido: ";
		cin >> precos[i];

		if (precos[i] < 50) {
			p50 += 1;
		}
		else if (precos[i] > 100) {
			soma += precos[i];
			p100 += 1;
		}
	}
	cout << "Quantidade de produtos com preco inferior a 50.00 euros: " << p50 << endl;
	cout << "Produtos com preco entre 50.00 e 100.00 euros:" << endl;
	for (int i = 0; i < 5; i++) {
		if (precos[i] >= 50 && precos[i] <= 100) {
			cout << produtos[i] << endl;
		}
	}
	cout << "Media de precos dos produtos com preco superior a 100.00 euros: " << (float) soma / p100;
}

void ex53() {

	//Faz um programa que receba o total das vendas de cada vendedor e guarde em um vetor. Receba também a percentagem da comissão de cada vendedor e armazene em outro vetor. 
	//Receba os nomes desses vendedores e armazene em um terceiro vetor. Existem apenas dez vendedores. Calcule e mostre:
	//Um relatório com os nomes dos vendedores e os valores a receber;
	//O total das vendas de todos os vendedores;
	//O maior valor a receber e quem o receberá;
	//O menor valor a receber e quem o receberá;


	float vendas[2], comissao[2], totalvendas = 0, maiorvalor = 0, menorvalor, valor = 0;
	string vendedores[2], vendedormaior, vendedormenor;

	for (int i = 0; i < 2; i++) {
		cout << "Introduza o nome do vendedor/a para a posicao " << i << ": ";
		cin >> vendedores[i];

		cout << "Introduza a comissao em porcentagem do vendedor/a: " << vendedores[i] << endl;
		cin >> comissao[i];

		cout << "Introduza o total de vendas do vendedor/a: " << vendedores[i] << endl;
		cin >> vendas[i];
		totalvendas += vendas[i];
	}
	menorvalor = (comissao[0] / 100) * vendas[0];

	for (int i = 0; i < 2; i++) {
		valor = (comissao[i] / 100) * vendas[i];
		
		if (valor > maiorvalor) {
			maiorvalor = valor;
			vendedormaior = vendedores[i];
		}
		else {
			menorvalor = valor;
			vendedormenor = vendedores[i];
		}
	}
	cout << "Total de vendas de todos os vendedores: " << totalvendas << endl;
	cout << "Maior valor a receber: " << maiorvalor << " euros do vendedor " << vendedormaior << endl;
	cout << "Menor valor a receber: " << menorvalor << " euros do vendedor " << vendedormenor;
}

void ex54() {

	//Escreve um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos do mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

	int vetor1[10], vetor2[10], vetor3[10];

	for (int i = 0; i < 10; i++) {
		cout << "Introduza um algoritmo para o primeiro vetor na posicao " << i << ": ";
		cin >> vetor1[i];

		cout << "Introduza um algoritmo para o segundo vetor na posicao " << i << ": ";
		cin >> vetor2[i];

		vetor3[i] = vetor1[i] * vetor2[i];
	}
	for (int i = 0; i < 10; i++) {
		cout << vetor3[i] << endl;
	}
}

void ex56() {

	//Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos. Escreve no final o vetor obtido.

	int vetor[16], vetor1[8], vetor2[8];

	for (int i = 0; i < 16; i++) {
		cout << "Introduza um valor para a posicao " << i << ": ";
		cin >> vetor[i];
	}
	for (int i = 0; i < 8; i++) {
		vetor1[i] = vetor[i];
	}
	for (int i = 8; i < 16; i++) {
		vetor2[i - 8] = vetor[i];
	}
	for (int i = 0; i < 8; i++) {
		vetor[i] = vetor2[i];
	}
	for (int i = 8; i < 16; i++) {
		vetor[i] = vetor1[i - 8];
	}
	for (int i = 0; i < 16; i++) {
		cout << vetor[i] << endl;
	}
}

void ex57() {

	//Escreve um programa que lê 6 valores inteiros e, em seguida, mostre os valores lidos pela ordem inversa.

	int vetor[6];

	for (int i = 0; i < 6; i++) {
		cout << "Introduza um valor inteiro para a posicao " << i << ": ";
		cin >> vetor[i];
	}
	for (int i = 5; i >= 0; i--) {
		cout << vetor[i] << endl;
	}
}

void ex58() {

	//Faz um programa para ler a nota de 10 alunos e guarde num vetor. Calcule e imprima a média em geral.

	int soma = 0;
	float notas[10];

	for (int i = 0; i < 10; i++) {
		cout << "Introduza a nota para a posicao " << i << ": ";
		cin >> notas[i];

		soma += notas[i];
	}
	cout << "Media geral: " << (float) soma / 10;
}

void ex59() {

	//Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.

	int vetor[10];
	bool valoresiguais = false;

	for (int i = 0; i < 10; i++) {
		cout << "Introduza um valor para a posicao " << i << ": ";
		cin >> vetor[i];
	}
	for (int i = 0; i < 10; i++) {
		for (int x = i + 1; x < 10; x++) { //duvida: se o x = 1 da problema
			if (vetor[i] == vetor[x]) {
				valoresiguais = true;
				cout << "O valor da posicao " << i << " e igual ao valor da posicao " << x << endl;
				cout << "Valor: " << vetor[i] << endl;
			}
		}
	}
	if (!valoresiguais) { //Verifica se a variável booleana encontrouValoresIguais é igual a false. Se for o caso, o código dentro desse bloco if será executado.
		cout << "Nao ha valores iguais no vetor";
	}
}

void ex60() {

	//Faz um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontra o maior e o menor.

	int vetor[5], maior = 0, menor = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Introduza um valor para a posicao " << i << ": ";
		cin >> vetor[i];

		if (vetor[i] > vetor[maior]) {
			maior = i;
		}
		else if (vetor[i] < vetor[menor]) {
			menor = i;
		}
	}
	cout << "Posicao do maior valor: " << maior << endl;
	cout << "Posicao do menor valor: " << menor << endl;
}

void ex61() {

	//Faz um programa para ler 5 valores e, em seguida mostrar a posição onde se encontra o maior e o menor valor.

	int vetor[5], maior = 0, menor = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Introduza um valor para a posicao " << i << ": ";
		cin >> vetor[i];

		if (vetor[i] > vetor[maior]) {
			maior = i;
		}
		else if (vetor[i] < vetor[menor]) {
			menor = i;
		}
	}
	cout << "Posicao do maior valor: " << maior << endl;
	cout << "Posicao do menor valor: " << menor << endl;
}

void ex62() {

	//Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos.

	int vetor[20];

	for (int i = 0; i < 20; i++) {
		cout << "Introduza um valor para a posicao " << i << ": ";
		cin >> vetor[i];
	}
	
	cout << "Valores do vetor:" << endl;
	for (int i = 0; i < 20; i++) {
		for (int x = i + 1; x < 20; x++) { //duvida: se o x = 1 da problema
			if (vetor[i] == vetor[x]) {
				vetor[x] = 0;
			}
		}
		cout << vetor[i] << endl;
	}
}

void ex63() {

	//Escreva um programa que leia números inteiros no intervalo [0,50] e os guarde em um vetor com 10 posições. Preencha um segundo vetor com os números ímpares do primeiro vetor. 
	//Imprima os dois vetores.
}

void ex64() {

	//Escreva um programa que leia um vetor de 10 posições e crie um segundo vetor substituindo os valores negativos por 1.
}

int main() {
	ex62();
	return 0;
} // for ex20; while ex21; do...while ex22 ex25; bool ex47;
