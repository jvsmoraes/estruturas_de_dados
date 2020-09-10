#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	int num;
	int alt;
	double numMaior;
	double maior = 0;
	double menor = 9999;
	double numMenor;
	for(int i = 1; i <= 10; i++)
	{

		cout << "Numero: ";
		cin >> num;
		cout << "Altura (cm): ";
		cin >> alt;


		if(alt > maior)
		{
			maior = alt;
			numMaior = num;
		}
		if(alt < menor)
		{
			menor = alt;
			numMenor = num;
		}
		cout << "Registrado!" << endl;
		system("pause");
		system("cls");
	}

	cout << "O maior aluno eh o numero " << numMaior << " com " << maior << " centimetros" << endl;
	cout << "===================================================" << endl;
	cout << "O menor aluno eh o numero " << numMenor << " com " << menor << " centimetros" << endl;
}
