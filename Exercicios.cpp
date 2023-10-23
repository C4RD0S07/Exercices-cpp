#include <iostream>
#include <string>
using namespace std;

void ex1() {

	float numero, resultado;

	cout << "Introduza um numero: ";
	cin >> numero;

	resultado = numero * 2;

	cout << "O dobro do numero introduzido e: " << resultado;

}

void ex2() {

	float qhoras, vpago, vfinal;

	cout << "Introduza o valor pago por hora: ";
	cin >> vpago;

	cout << "Introduza a quantidade de horas trabalhados do mes: ";
	cin >> qhoras;

	vfinal = vpago * qhoras;

	cout << "O trabalhador devera receber " << vfinal;

}

void ex3() {

	float IMC, peso, altura;

	cout << "Introduza o peso: ";
	cin >> peso;

	cout << "Introduza a altura: ";
	cin >> altura;

	IMC = peso / (altura * 2);

	cout << "O IMC e: " << IMC;

}

void ex4() {

	int anascimento, ano, idade;

	cout << "Introduza o ano atual: ";
	cin >> ano;

	cout << "Introduza a sua data de nascimento: ";
	cin >> anascimento;

	idade = ano - anascimento;

	cout << "Sua idade: " << idade << " anos.";

}

void ex5() {

	float comprimento, largura, perimetro;

	cout << "Introduza o comprimento do retangulo: ";
	cin >> comprimento;

	cout << "Introduza a largura do retangulo: ";
	cin >> largura;

	perimetro = 2 * (comprimento + largura);

	cout << "O perimetro do retangulo e: " << perimetro;

}

void ex6() {

	float vconta, gorjeta;

	cout << "Introduza o valor da conta: ";
	cin >> vconta;

	gorjeta = vconta * 0.10;

	cout << "O valor da gorjeta e: " << gorjeta << " euros.";

}

void ex7() {

	float ptotal, vdado, troco;

	cout << "Introduza o preco total da compra: ";
	cin >> ptotal;

	cout << "Introduza o valor dado para o pagamento: ";
	cin >> vdado;

	troco = vdado - ptotal;

	cout << "O valor do troco e: " << troco << " euros.";

}

void ex8() {

	int n, s;

	cout << "Introduza um numero inteiro: ";
	cin >> n;

	s = n + 1;

	cout << "O numero sucessor do numero " << n << " e: " << s;

}

void ex9() {

	int n, a;

	cout << "Introduza um numero inteiro: ";
	cin >> n;

	a = n - 1;

	cout << "O antecessor do numero " << n << " e: " << a;

}

void ex10() {

	int n;
	float m;

	cout << "Introduza um numero inteiro: ";
	cin >> n;

	m = (float) n / 2;

	cout << "A metade do numero " << n << " e: " << m;

}

void ex11() {

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

	int n, r;

	cout << "Introduza um numero: ";
	cin >> n;

	r = n % 2;

	cout << "O resto da divisao do numero " << n << " e: " << r;
}

void ex13() {

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

	int numero;

	cout << "Introduza um numero para resolver a tabuada: ";
	cin >> numero;

	for (int i = 0; i <= 10; i++) {
		cout << numero << " x " << i << " = " << numero * i << endl;
	}
}

void ex24() {

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

	for (int i = 1000; i <= 1999; i++) {
		
		if (i % 11 == 5) {
			cout << i << endl;
		}
	}
}

void ex27() {

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

	for (int i = 100; i <= 200; i++) {
		if (i % 2 == 1) {
			cout << i << endl;
		}
	}
}

void ex30() {

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

	float racao, gramas, kg;

	cout << "Introduza o peso do saco de racao: ";
	cin >> racao;

	cout << "Introduza a quantidade de comida em gramas que fornece para os gatos: ";
	cin >> gramas;
	kg = gramas / 1000;

	cout << "Apos cinco dias restaram " << racao - kg * 5 << " quilos";
}

void ex32() {

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

	for (int i = 25; i >= 0; i--) {
		cout << i << endl;
	}
}

void ex39() {

	int valor, somatorio = 0;

	cout << "Introduza um valor para retornar o somatorio: ";
	cin >> valor;

	for (int i = 1; i <= valor; i++) {
		somatorio += i;
	}
	cout << somatorio;
}

void ex40() {

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
	// O programa deve calcular e mostrar:
	//A quantidade de produtos com preço inferior a 50.00 euros;
	//O nome dos produtos com preço entre os 50.00 e 100.00 euros;
	//A média dos preços dos produtos com preço superior a 100.00 euros.
}

void ex53() {

	//Faz um programa que receba o total das vendas de cada vendedor e guarde em um vetor. Receba também a percentagem da comissão de cada vendedor e armazene em outro vetor. 
	// Receba os nomes desses vendedores e armazene em um terceiro vetor. Existem apenas dez vendedores. Calcule e mostre:
	//Um relatório com os nomes dos vendedores e os valores a receber;
	//O total das vendas de todos os vendedores;
	//O maior valor a receber e quem o receberá;
	//O menor valor a receber e quem o receberá;

}

void ex54() {

	//Escreve um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos do mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
}
int main() {
	ex52();
	return 0;
} // for ex20; while ex21; do...while ex22 ex25; bool ex47;
