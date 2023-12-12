#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

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

void verEstudiantes(const vector<Estudiante> &listaEstudiantes) {
    cout << "Lista de estudiantes:" << endl;
    for (const Estudiante &estudiante : listaEstudiantes) {
        cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << ", Promedio: " << estudiante.promedio << endl;
    }
}

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
