#include <iostream>
#include <cstring>

using namespace std;

// Se crea una union llamada Dato
union Dato{
    int i;
    float f;
    char str[20];
};
int main() {
    // Se crea una variable de tipo Dato
    Dato d;
    // Se pide al usuario que ingrese un entero, un flotante y una cadena
    int nint;
    cout << "Ingrese un entero: ";
    cin >> nint;
    d.i = nint;
    cout << d.i << endl;
    float nfloat;
    cout << "Ingrese un flotante: ";
    cin >> nfloat;
    d.f = nfloat;
    cout << d.f << endl;
    cout << "Ingrese una cadena: ";
    cin >> d.str;
    cout << d.str << endl;
    return 0;
}
