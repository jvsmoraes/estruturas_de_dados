#include <iostream> /* inclui diretivas de entrada-sa�da */


//utiliza o namespace std para definir todas as fun��es da biblioteca padr�o
using namespace std;

//declara��o de constante
#define PRECO 1.99

int main()
{
    //declarando as vari�veis
	int pera = 3;
    char qualidade = 'A';
    float peso = 2.5;

	//sa�da de dados (cout)
    cout << "Existem " << pera << " peras de qualidade " << qualidade
         << " pesando " << peso << " quilos." << endl;
    cout << "O preco por quilo eh R$" << PRECO
         << ", o total em R$ eh " << peso * PRECO << endl;
		 
    return 0;
}




