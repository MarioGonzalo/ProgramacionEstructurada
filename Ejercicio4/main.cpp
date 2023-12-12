#include <iostream>

using namespace std;

// Se define la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    // Se crea una variable de tipo Estudiante
    typedef struct Estudiante Estudiante;

    // Se crea una variable de tipo Estudiante y se pide al usuario que ingrese los datos
    Estudiante estudiante3;
    cout << "Ingrese el nombre del estudiante: ";
    cin.getline(estudiante3.nombre, sizeof(estudiante3.nombre));
    cout << "Ingrese la edad del estudiante: ";
    cin >> estudiante3.edad;
    cout << "Ingrese el promedio del estudiante: ";
    cin >> estudiante3.promedio;
}
