#include <iostream>
#include <cstdlib>
#include <iostream>
#include<iomanip>

using namespace std;

int main(int argc, char *argv[])
{
	int opc = 1;
	int x, y, z = 1;
	int ID, OP;
	double IDtotal = 0;
	double Otimo = 0;
	double Bom = 0;
	double Regular = 0;
	double  Ruim = 0;
	float pOtimo, pBom, pRegular, pRuim;
	float mID;
	double Qtd = 0;
	while (opc != 0)
	{
		x = 1;
		while (x == 1)
		{
			cout << "IDADE: ";
			cin >> ID;
			if (ID < 0)
			{
				cout << "IDADE INEXISTENTE" << endl;
			}
			else
			{

				x = 0;
			}
		}
		y = 1;
		while (y == 1)
		{
			cout << "Opiniao: ";
			cin >> OP;



			if (OP == 1)
			{
				Otimo++;
				y = 0;
			}
			else if (OP == 2)
			{
				Bom++;
				y = 0;
			}
			else if (OP == 3)
			{
				Regular++;
				y = 0;
			}
			else if (OP == 4)
			{
				Ruim++;
				y = 0;
			}
			else
			{
				cout << "VALOR INVALIDO!" << endl;;
				system("pause");
			}

		}
		z = 1;
		while (z == 1)
		{
			system("cls");
			cout << "[1] INSERIR OUTRA OPINIAO" << endl;
			cout << "[0] IR PARA RESULTADOS" << endl;
			cout << "OPCAO: ";
			cin >> opc;
			if (opc == 1)
			{
				z = 0;
				system("cls");
			}
			else if (opc == 0)
			{
				z = 0;
				system("cls");
			}
			else
			{
				cout << "OPCAO INVALIDA!" << endl;
				system("pause");
			}

		}
		IDtotal = IDtotal + ID;
		Qtd++;
	}

	pOtimo = (Otimo / Qtd) * 100;
	pBom = (Bom / Qtd) * 100;
	pRegular = (Regular / Qtd) * 100;
	pRuim = (Ruim / Qtd) * 100;

	mID = IDtotal / Qtd;

	cout << fixed << setprecision(2);
	cout << "==========RESULTADO==========" << endl;
	cout << "PESSOAS: " << Qtd << endl;
	cout << "MEDIA DE IDADE: " << mID << endl;
	cout << "OTIMO: " << pOtimo << "%" << endl;
	cout << "BOM: " << pBom << "%"  << endl;
	cout << "REGULAR: " << pRegular << "%" << endl;
	cout << "RUIM: " << pRuim << "%" << endl;
	cout << "==================================" << endl;
}

