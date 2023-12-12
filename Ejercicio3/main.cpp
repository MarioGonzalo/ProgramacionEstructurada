#include <iostream>
#include <cstring>


using namespace std;

// Se crea una estructura llamada Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Se crea una funcion que recibe un estudiante y retorna el mismo estudiante
struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

int main() {
    // Se crea un estudiante y se le pide al usuario que ingrese los datos
    struct Estudiante estudiante1;
    cout << "Ingrese el nombre del estudiante: ";
    cin.getline(estudiante1.nombre, sizeof(estudiante1.nombre));
    cout << "Ingrese la edad del estudiante: ";
    cin >> estudiante1.edad;
    cout << "Ingrese el promedio del estudiante: ";
    cin >> estudiante1.promedio;

    // Se copia el estudiante1 en el estudiante2
    struct Estudiante estudiante2 = copiarEstudiante(estudiante1);
    // Se imprime el estudiante2
    cout << "Nombre: " << estudiante2.nombre << ", Edad: " << estudiante2.edad << ", Promedio: " << estudiante2.promedio << endl;


    return 0;
}
