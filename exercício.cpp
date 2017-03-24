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
