//3.Utilizando algum dos tipos de laço vistos em aula, imprima os valores da sequência de Fibonacci, das seguintes formas:
//Dado um n, até o último elemento da sequência que seja menor ou igual a n.
#include <iostream>
#include <stdlib.h>

int main () {
	
	int num;
	int anterior = 0;
	int atual = 1;
	int auxiliar = 1;
	std::cin >> num;
	system("cls");
	std::cout << "Sequencia de Fibonacci inferior a ";
	std::cout << num << "\n";
if (num < 0) { 
	std::cout << "Número Inválido"; 
}

else { 
	while (atual < num) { 
		std::cout << auxiliar << "\n";
		auxiliar = atual + anterior;
		anterior = atual;
		atual = auxiliar; 
	}
}
	std::cout << "\n";
	system("PAUSE");
	system("cls");
	return 0;
	
}
