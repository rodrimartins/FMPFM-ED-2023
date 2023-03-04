#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int contadorOtimo = 0, contadorBom = 0, contadorRegular = 0, contadorRuim = 0, menu = 0;
	float percentOtimo = 0, percentBom = 0, percentRegular = 0, percentRuim = 0, idade = 0;
	float totalEspectadores = 0, totalIdades = 0;
	cout << "PESQUISA DE SATISFACAO.\n";
	cout << "---------------------------------------\n";
	do {

        cout << "INFORME SUA IDADE.\n";
        cin >> idade;
		totalIdades = totalIdades + idade;
		cout << "QUAL SUA OPNIAO EM RELACAO AO FILME?\n";
		cout << "[1] - OTIMO\n";
		cout << "[2] - BOM\n";
		cout << "[3] - REGULAR\n";
		cout << "[4] - RUIM\n";
		cin >> menu;
		switch (menu){
			case 1:
				contadorOtimo = contadorOtimo + 1;
				break;
			case 2:
				contadorBom = contadorBom + 1;
				break;
			case 3:
				contadorRegular = contadorRegular + 1;
				break;
			case 4:
				contadorRuim = contadorRuim + 1;
				break;
			default:
			    cout << "OPCAO INVALIDA" << endl;
				break;
		}
		totalEspectadores = totalEspectadores + 1;
		cout << "DESEJA ADICIONAR NOVA OPINIAO A PESQUISA?\n";
		cout << "[1] - SIM\n";
		cout << "[0] - NAO\n";
		cin >> menu;
	}
	while (menu != 0);
		cout << "-----------------------------------------\n";
		percentOtimo = (contadorOtimo / totalEspectadores) * 100;
		percentBom = (contadorBom / totalEspectadores) * 100;
		percentRegular = (contadorRegular / totalEspectadores) * 100;
		percentRuim = (contadorRuim / totalEspectadores) * 100;
		cout << "QUANTIDADE DE PESSOAS QUE RESPONDERAM A PESQUISA ======= " <<
		totalEspectadores << " PESSOAS\n";
		cout << "MEDIA DE IDADE DAS PESSOAS QUE RESPONDERAM A PESQUISA == " <<
		totalIdades / totalEspectadores << " ANOS\n";
		cout << "PORCENTAGEM DE OTIMO =================================== " << percentOtimo << "%\n";
		cout << "PORCENTAGEM DE BOM =====================================" << percentBom << "%\n";
		cout << "PORCENTAGEM DE REGULAR ================================= " << percentRegular << "%\n";
		cout << "PORCENTAGEM DE RUIM ==================================== " << percentRuim << "%\n";

		return 0;
}
