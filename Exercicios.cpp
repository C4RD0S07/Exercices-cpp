#include <iostream>
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


}

int main() {
	ex27();
	return 0;
} // for ex20; while ex21; do...while ex22;
