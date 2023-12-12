#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

// Se crea una estructura para almacenar los datos de un estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Se crea una función para agregar un estudiante a la lista
void agregarEstudiante(vector<Estudiante> &listaEstudiantes) {
    Estudiante nuevoEstudiante;

    cout << "Ingrese el nombre del estudiante: ";
    cin.getline(nuevoEstudiante.nombre, sizeof(nuevoEstudiante.nombre));

    cout << "Ingrese la edad del estudiante: ";
    cin >> nuevoEstudiante.edad;

    cout << "Ingrese el promedio del estudiante: ";
    cin >> nuevoEstudiante.promedio;

    cin.ignore();

    listaEstudiantes.push_back(nuevoEstudiante);

    cout << "Estudiante agregado correctamente." << endl;
}

// Se crea una función para imprimir los datos de un estudiante
void verEstudiantes(const vector<Estudiante> &listaEstudiantes) {
    cout << "Lista de estudiantes:" << endl;
    for (const Estudiante &estudiante : listaEstudiantes) {
        cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << ", Promedio: " << estudiante.promedio << endl;
    }
}

// Se crea una función para eliminar un estudiante de la lista
void eliminarEstudiante(vector<Estudiante> &listaEstudiantes, const char *nombre) {
    for (auto it = listaEstudiantes.begin(); it != listaEstudiantes.end(); ++it) {
        if (strcmp(it->nombre, nombre) == 0) {
            it = listaEstudiantes.erase(it);
            cout << "Estudiante eliminado correctamente." << endl;
            return;
        }
    }

    cout << "Estudiante no encontrado." << endl;
}

int main() {
    // Se crea una lista de estudiantes, se agregan dos estudiantes y se imprimen
    vector<Estudiante> listaEstudiantes;

    agregarEstudiante(listaEstudiantes);
    agregarEstudiante(listaEstudiantes);
    verEstudiantes(listaEstudiantes);

    char nombreEliminar[50];
    cout << "Ingrese el nombre del estudiante a eliminar: ";
    cin.getline(nombreEliminar, sizeof(nombreEliminar));

    eliminarEstudiante(listaEstudiantes, nombreEliminar);
    verEstudiantes(listaEstudiantes);

    return 0;
}
