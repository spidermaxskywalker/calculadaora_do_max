#include <iostream>

using namespace std;

int main()
{
    cout << "Calculadora Simplona" << endl;

    int x;
    int y;

    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;

    cout << "Soma = " << (x + y) << "\n";
    cout << "Subtração = " << (x - y) << "\n";
    cout << "Multiplicação = " << (x * y) << "\n";

    return 0;
}
