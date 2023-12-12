#include <iostream>

using namespace std;


// Se crea una estructura para almacenar los datos de un estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Se crea una función para imprimir los datos de un estudiante
void imprimirEstudiante(const Estudiante &estudiante) {
    cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << ", Promedio: " << estudiante.promedio << endl;
}

// Se crea una función para modificar los datos de un estudiante
void modificarEstudiante(Estudiante *est) {
    cout << "Ingrese el nombre del estudiante: ";
    cin.getline(est->nombre, sizeof(est->nombre));

    cout << "Ingrese la edad del estudiante: ";
    cin >> est->edad;

    cout << "Ingrese el promedio del estudiante: ";
    cin >> est->promedio;

    cin.ignore();
}

// Se crea una función para imprimir los datos de un estudiante con punteros
void imprimirEstudiante2 (const Estudiante *est) {
    cout << "Nombre: " << est->nombre << ", Edad: " << est->edad << ", Promedio: " << est->promedio << endl;
}


int main() {
    // Se crean dos variables de tipo Estudiante y se les asigna un valor y se imprimen con las funciones creadas
    Estudiante estudiante1;
    Estudiante estudiante2;

    modificarEstudiante(&estudiante1);
    modificarEstudiante(&estudiante2);

    imprimirEstudiante(estudiante1);
    imprimirEstudiante(estudiante2);

    imprimirEstudiante2(&estudiante1);
    imprimirEstudiante2(&estudiante2);

    return 0;
}
