#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double peso, altura, imc;
	
	cout << "Peso (KG): ";
	cin >> peso;
	cout << "Altura (m): ";
	cin >> altura;
	
	imc = peso / pow(altura, 2);
	
	if (imc < 20){
		cout << "Abaixo do Peso!" << endl;
	}
	else if (imc >= 20 && imc < 25){
		cout << "No peso ideal!" << endl;
	}
	else if (imc >= 25) {
		cout << "Acima do peso!" << endl;
	}
	return 0;
}