#include <iostream>
#include <operacoes_aritmeticas.h>

using namespace std;
using namespace max::aritmetica;

int main()
{
    cout << "Calculadora Simplona" << endl;

    int x;
    int y;

    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;

    cout << "Soma = " << soma(x, y) << "\n";
    cout << "Subtração = " << subtrai(x, y) << "\n";
    cout << "Multiplicação = " << multiplica(x, y) << "\n";
    cout << "Quociente = " << quociente(x, y) << "\n";
    cout << "Resto = " << resto(x, y) << "\n";

    return 0;
}
