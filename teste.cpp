#include <iostream>
#include <stdlib.h>

int main () {
	
	int vetor[5] = { 74, 87, 91, 1, 2 }; 
	int a;
	std::cout << "Cite o vetor desejado: ";
	std::cin >> a;	
	int cont = 0;

	do {
		if (a == vetor[cont]) {
			std::cout << "O vetor " << a << " esta na posiao: ";
			std::cout<< cont << "\n";
			cont = -1;	
			system("PAUSE");
			}
		else
			cont++;
		} 
		
		while (cont < sizeof(vetor)/sizeof(int) && cont != -1); {
		
		std::cout<< " Nao foi encontrado este vetor!"; }
		
		

	return 0;
}



