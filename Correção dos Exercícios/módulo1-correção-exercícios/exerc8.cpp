#include <iostream>
#include<stdlib.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int menu = 1;
	float candidato1 = 0, candidato2 = 0, nulos = 0, brancos = 0, total = 0;
	do
	{
		cout << "ELEICOES 2022\n";
		cout << "ESCOLHA UMA DAS OPCOES:\n";
		cout << "[1] - Candidato 1\n";
		cout << "[2] - Candidato 2\n";
		cout << "[3] - Nulo\n";
		cout << "[4] - Branco\n";
		cout << "[0] - Sair\n";
		cin >> menu;
		switch (menu)
		{
		case 1:
			candidato1 = candidato1 + 1;
			break;
		case 2:
			candidato2 = candidato2 + 1;
			break;
		case 3:
			nulos = nulos + 1;
			break;
		case 4:
			brancos = brancos + 1;
			break;
        case 0:
			break;
		default:
            cout << "CODIGO INVALIDO" << endl;
			break;
		}
	}
	 while (menu != 0);
        total = candidato1 + candidato2 + nulos + brancos;
        cout << "Candidato 1 ============= " << (candidato1 / total) * 100 << "%\n";
		cout << "Candidato 2 ============== " << (candidato2 / total) * 100 << "%\n";
		cout << "Nulos =================== " << (nulos / total) * 100 << "%\n";
		cout << "Brancos ================= " << (brancos / total) * 100 << "%\n";
		cout << "////////////////////////////////////////\n ";
		cout << "Total de Votos ========== " << total << "\n";
	return 0;
}
