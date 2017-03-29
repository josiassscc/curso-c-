#include <iostream>
#include <stdlib.h>

int main() {
	int cont[0];
	int x;
	int y;
	std::cout << "Digite ate que posicao na sequencia de fibonacci voce deseja:";
	std::cin >> y;
	int anterior = 0;
	int atual = 1;
	int auxiliar = 1;

	
	
	for (x = 0; x < y; ++x) {
		auxiliar = atual + anterior;
		anterior = atual;
		atual = auxiliar;
	
	if(x <= y){
		std::cout << atual << "\n"; }
	}
	std::cout << "\n\n";
	system ("PAUSE");
	return 0;

}
