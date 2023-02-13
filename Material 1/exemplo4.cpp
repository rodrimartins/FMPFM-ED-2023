/* programa que calcula o per�metro e a �rea de uma
circunfer�ncia de raio R (fornecido pelo usu�rio) */

#include <iostream> // inclui diretivas de entrada-sa�da
#include <cmath> // inclui diretivas das fun��es matem�ticas */

using namespace std;
#define PI 3.14159

int main( )
{

	int raio;
	float perim, area;

	cout << "Entre com o valor do raio: ";
	cin >> raio;

	perim = 2 * PI * raio;
	area = PI * pow(raio, 2);

	cout << "O perimetro da circunferencia de raio " << raio
		 << " eh " << perim << endl;
	cout << "e a area eh " << area << endl;

	return 0;
}

