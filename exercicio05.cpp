#include <iostream>
using namespace std;

int main()
{
	float pe;
	int cp;

	cout << "Preco da etiqueta: R$";
	cin >> pe;
	cout << " ===Codigo da condicao de pagamento===" << endl;
	cout << " = [1] A vista em dinheiro ou cheque=" << endl;
	cout << " = [2] A vista com cartao de credito=" << endl;
	cout << " = [3] Em 2 vezes                   =" << endl;
	cout << " = [4] Em 3 vezes                   =" << endl;
	cout << " ====================================" << endl;
	cout << " Codigo: ";
	cin >> cp;

	switch(cp)
	{
	case 1:
		pe = pe * 0.9;
		cout << "================" << endl;
		cout << "Valor: R$" << pe << endl;
		cout << "================" << endl;
		break;

	case 2:
		pe = pe * 0.95;
		cout << "================" << endl;
		cout << "Valor: R$" << pe << endl ;
		cout << "================" << endl;
		break;
	case 3:
		pe = pe / 2;
		
		cout << "================" << endl;
		cout << "Valor: 2x de R$" << pe << endl;
		cout << "================" << endl;
		break;
	case 4:
		pe = (pe * 1.1) / 3;
		cout << "================" << endl;
		cout << "Valor: 3x de R$" << pe << endl ;
		cout << "================" << endl;
		break;
	default:
		cout << "================" << endl;
		cout << "===Codigo invalido===" << endl;
		cout << "================" << endl;
		break;
	}
	return 0;
}
