#include <iostream>

using namespace std;

int main()
{
    //variáveis
    float numH,valorH, salMin,salBruto,imposto,salLiq;

    //entrada de dados
    cout << "Digite o valor do salario minimo: ";
    cin >> salMin;
    cout << "Digite o numero de horas trabalhadas: ";
    cin >> numH;

    //processamento
    valorH = salMin / 2;
    salBruto = numH * valorH;
    imposto = salBruto * 3/100;
    salLiq = salBruto - imposto;

    cout << "O salario a receber eh " << salLiq << endl;

    return 0;
}
