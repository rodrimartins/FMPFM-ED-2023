#include <iostream>
using namespace std;

int main()
{
	int num1, num2, resultado;
	float div;
	char op; // opera��o

	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "Digite a operacao: " << endl;
	cout << "[+]" << endl;
	cout << "[-]" << endl;
	cout << "[*]" << endl;
	cout << "[/]" << endl;
	cin >> op;

	switch(op)
	{
	case '+':
		resultado = num1 + num2;
		cout << "Soma: " << resultado << endl;
		break;
	case '-':
		resultado = num1 - num2;
		cout << "Subtracao: " << resultado << endl;
		break;
	case '*':
		resultado = num1 * num2;
		cout << "Multiplicao: " << resultado << endl;
		break;
	case '/':
		if(num2 != 0)
		{
			div = (float)num1 / num2;
			cout << "Divisao: " << div << endl;
		}
		else
		{
			cout << "Divisao por zero!" << endl;
		}
		break;
	default:
		cout << "Operacao inexistente." << endl;
		break;
	}

	return 0;
}

