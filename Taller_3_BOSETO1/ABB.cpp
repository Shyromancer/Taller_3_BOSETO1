#include "ABB.h"
//hay que cambiarlo a .h pero mientras implementamos esto
#include "Especialista.cpp"

using namespace std;

class ABB
{
private:

    Especialista* root;

    void insertar(Especialista*& nodo, Especialista* nuevo)
    {
        if (nodo == nullptr)
        {
            nodo = nuevo;
        }
        else if (nuevo->id < nodo->id) 
        {
            insertar(nodo->left, nuevo);
        }
        else
        {
            insertar(nodo->right, nuevo);
        }
    }
public:
    ABB()
    {
        root = nullptr;
    }

    //funcion para insertar
    void insertar(int id, const char* nombre, const char* especialidad, int aniosExperiencia, double tarifaConsulta, const char* direccionOficina, const char* atributoAdicional)
    {
        Especialista* nuevo = new Especialista(id, nombre, especialidad, aniosExperiencia, tarifaConsulta, direccionOficina, atributoAdicional);
        insertar(root, nuevo);

    }

    // Otros metodos como buscar, eliminar, etc.
};

