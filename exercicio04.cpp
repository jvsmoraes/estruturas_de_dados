#include <iostream>
using namespace std;

int main()
{
	float sal;
	cout << "Salario atual: R$";
	cin >> sal;
	
	if (sal<1000){
		sal = sal * 1.15;
	}
	else if (sal >=1000 && sal <= 1500){
		sal = sal * 1.1;
	}
	else if (sal > 1500){
		sal = sal * 1.05;
	}
	cout << "Novo salário: R$" << sal;
	return 0;
}