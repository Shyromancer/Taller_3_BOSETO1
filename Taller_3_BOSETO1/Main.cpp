#include "Main.h"
#include"ABB.cpp"
#include "AVL.cpp"


int main() {
    ABB especialistas;
    AVL consultas;

    //cargarEspecialistas(especialistas);
    //cargarConsultas(consultas);

    int opcion;
    do {
        cout << "Menu Principal\n";
        cout << "1. Agendar hora\n";
        cout << "2. Buscar especialistas por área\n";
        cout << "3. Agregar trabajador\n";
        cout << "4. Eliminar un trabajador\n";
        cout << "5. Mostrar consultas\n";
        cout << "6. Estadísticas\n";
        cout << "7. Salir\n";
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            // Agendar hora
            break;
        case 2:
            // Buscar especialistas por área
            break;
        case 3:
            // Agregar trabajador
            break;
        case 4:
            // Eliminar un trabajador
            break;
        case 5:
            // Mostrar consultas
            break;
        case 6:
            // Estadísticas
            break;
        case 7:
            // Guardar datos y salir
            break;
        default:
            cout << "Opcion invalida\n";
        }
    } while (opcion != 7);

    return 0;
}


