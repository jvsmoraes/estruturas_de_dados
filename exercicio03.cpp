#include <iostream>
using namespace std;

int main()
{
	float salMin, salB, salL;
	double horaTrab;
	
	cout << "Horas trabalhadas: ";
	cin >> horaTrab;

	cout << "Salario minimo: R$";
	cin >> salMin;

	salB = horaTrab * (salMin / 2);
	salL = salB * 0.97;
	
	cout << "Salario a receber: R$" << salL;
		return 0;
}
