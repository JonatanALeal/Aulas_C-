#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "portuguese");
	/* code */
	string names[2] = {};
	double n1[2] = {};
	double n2[2] = {};
	double media[2] = {};
	
	// entrada de dados no vetor
	for (int i = 0; i < 2; i++) {
		cout << "Digite seu nome:\t";
		cin >> names[i];
		cout << "Digite nota 1:\t";
		cin >> n1[i];
		cout << "Digite nota 2:\t";
		cin >> n2[i];
		media[i] = (n1[i] + n2[i]) /2;
		cout << "A média das notas é: \t" << media[i] <<".\n";	
	}
	
	for (int i = 0; i < 2; i++) {
		cout << names[i] << "\t";
		cout << n1[i] << "\t";
		cout << n2[i] << "\t";
		cout << media[i] << "\n";
	    
	        if (media[i] < 6) {
	        cout << "Lista de alunos reprovados: \n";
    	    
    		cout << names[i] << "\t";
    		
    		cout << n1[i] << "\t";
    		
    		cout << n2[i] << "\t";
    		cout << "A média final: \t" << media[i] <<".\n";
    	}
	}

	return 0;
}

