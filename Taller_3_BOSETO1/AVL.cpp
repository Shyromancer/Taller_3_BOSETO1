#include "AVL.h"
#include "Consulta.cpp"
#include "Especialista.cpp"
#include "ABB.cpp"


class AVL {
private:
    Consulta* root;

    int height(Consulta* N) {
        if (N == nullptr)
            return 0;
        return N->height;
    }

    Consulta* rightRotate(Consulta* y) {
        Consulta* x = y->left;
        Consulta* T2 = x->right;
        x->right = y;
        y->left = T2;
        y->height = max(height(y->left), height(y->right)) + 1;
        x->height = max(height(x->left), height(x->right)) + 1;
        return x;
    }

    Consulta* leftRotate(Consulta* x) {
        Consulta* y = x->right;
        Consulta* T2 = y->left;
        y->left = x;
        x->right = T2;
        x->height = max(height(x->left), height(x->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;
        return y;
    }

    int getBalance(Consulta* N) {
        if (N == nullptr)
            return 0;
        return height(N->left) - height(N->right);
    }

    Consulta* insertar(Consulta* nodo, Consulta* nuevo) {
        if (nodo == nullptr)
            return nuevo;

        if (nuevo->idConsulta < nodo->idConsulta)
            nodo->left = insertar(nodo->left, nuevo);
        else if (nuevo->idConsulta > nodo->idConsulta)
            nodo->right = insertar(nodo->right, nuevo);
        else
            return nodo;

        nodo->height = 1 + max(height(nodo->left), height(nodo->right));

        int balance = getBalance(nodo);

        if (balance > 1 && nuevo->idConsulta < nodo->left->idConsulta)
            return rightRotate(nodo);

        if (balance < -1 && nuevo->idConsulta > nodo->right->idConsulta)
            return leftRotate(nodo);

        if (balance > 1 && nuevo->idConsulta > nodo->left->idConsulta) {
            nodo->left = leftRotate(nodo->left);
            return rightRotate(nodo);
        }

        if (balance < -1 && nuevo->idConsulta < nodo->right->idConsulta) {
            nodo->right = rightRotate(nodo->right);
            return leftRotate(nodo);
        }

        return nodo;
    }

public:
    AVL() {
        root = nullptr;
    }

    void insertar(int id_consulta, const char* fecha, const char* nombre_paciente, int edad_paciente, const char* genero_paciente, const char* correo_paciente, const char* fono_contacto, const char* estado) {
        Consulta* nuevo = new Consulta(id_consulta, fecha, nombre_paciente, edad_paciente, genero_paciente, correo_paciente, fono_contacto, estado);
        root = insertar(root, nuevo);
    }

    // Otros métodos como buscar, eliminar, etc.
};

void cargarEspecialistas(ABB& especialistas) {
    return;
}

void cargarConsultas(AVL& consultas) {
    return;
}