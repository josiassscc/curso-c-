//3.Utilizando algum dos tipos de la�o vistos em aula, imprima os valores da sequ�ncia de Fibonacci, das seguintes formas:
//Dado um n, at� o �ltimo elemento da sequ�ncia que seja menor ou igual a n.
#include <iostream>
#include <stdlib.h>

int main () {
	
	int num;
	int anterior = 0;
	int atual = 1;
	int auxiliar = 1;
	std::cin >> num;
	system("cls");
	std::cout << "Sequencia de Fibonacci menor igual a ";
	std::cout << num << "\n";
	
if (num < 0) { 
	std::cout << "Nao existe na sequencia de Fibonacci um numero menor igual a ";
	std::cout << num << "\n";
	}
else { 
	while (atual < num) { 
		std::cout << auxiliar << "\n";
		auxiliar = atual + anterior;
		anterior = atual;
	
	}
}
	std::cout << "\n";
	system("PAUSE");
	system("cls");
	return 0;
	
}
