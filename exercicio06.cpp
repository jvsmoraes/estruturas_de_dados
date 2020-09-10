#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int quad = 0;
	for(int i = 1; i <= 20 ; i++)
	{
		quad = i * i;
		cout << i << " ao quadrado = " << quad << endl;
	}
}

