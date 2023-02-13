/*

O programa verifica se as tr�s vari�veis lado1, lado2, e lado3, podem ser lados
de um tri�ngulo reto. N�s usamos o fato que os tr�s valores devem ser positivos,
e que o quadrado de um dos lados deve ser igual a soma dos quadrados dos outros
lados (Teorema de Pit�goras) para determinar se o tri�ngulo � reto.

*/

#include <iostream>
using namespace std;
int main()
{
	int lado1, lado2, lado3;
	int s1, s2, s3;

	cout << "Entre com o tamanho do lado 1: ";
	cin >> lado1;
	cout << "Entre com o tamanho do lado 2: ";
	cin >> lado2;
	cout << "Entre com o tamanho do lado 3: ";
	cin >> lado3;

	// calcula o quadrado dos lados
	s1 = lado1 * lado1;
	s2 = lado2 * lado2;
	s3 = lado3 * lado3;

	// testa a condicao para um triangulo reto
	if (lado1 > 0 && lado2 > 0 && lado3 > 0 )
	{
		if (s1 == s2 + s3 || s2 == s1 + s3 || s3 == s1 + s2)
		{
			cout << "Triangulo reto!" << endl;
		}
		else
		{
			cout << "Nao pode ser um triangulo reto!" << endl;
		}
	}
	else
	{
		cout << "Nao pode ser um triangulo!" << endl;
	}

	return 0;
}

