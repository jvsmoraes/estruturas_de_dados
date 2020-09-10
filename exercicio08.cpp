#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	double op1, op2, op3, op4 = 0;
	int opc = 1;
	double voto = 0;
	float pop1, pop2, pop3, pop4;
	while (opc != 0)
	{
		cout << "=========OPCOES==========" << endl;
		cout << "[1] Candidato 1" << endl;
		cout << "[2] Candidato 2" << endl;
		cout << "[3] Voto nulo" << endl;
		cout << "[4] Voto em branco" << endl;
		cout << "[0] Calcular porcentagens" << endl;
		cout << "Opcao: ";
		cin >> opc;


		if (opc == 1)
		{
			op1++;
			voto++;
			cout << "====VOTO SALVO====" << endl;
			system("pause");
			system("cls");
		}
		else if (opc == 2)
		{
			op2++;
			voto++;
			cout << "====VOTO SALVO====" << endl;
			system("pause");
			system("cls");
		}
		else if (opc == 3)
		{
			op3++;
			voto++;
			cout << "====VOTO SALVO====" << endl;
			system("pause");
			system("cls");
		}
		else if (opc == 4)
		{
			op4++;
			voto++;
			cout << "====VOTO SALVO====" << endl;
			system("pause");
			system("cls");
		}
		else if (opc == 0)
		{

		}
		else
		{
			cout << "OPCAO INVALIDA!" << endl;
			voto--;
			system("pause");
			system("cls");
		}


	}

	pop1 = (op1 / voto) * 100;
	pop2 = (op2 / voto) * 100;
	pop3 = (op3 / voto) * 100;
	pop4 = (op4 / voto) * 100;


	cout << "========RESULTADOS========" << endl;
	cout <<  "Candidato 1: " << pop1 << "%"  << endl;
	cout << "Candidato 2: " << pop2 << "%" << endl;
	cout << "Nulos: " << pop3 << "%" << endl;
	cout << "Em branco: " << pop4 << "%" << endl;
	cout << "TOTAL: " << voto << endl;
}

