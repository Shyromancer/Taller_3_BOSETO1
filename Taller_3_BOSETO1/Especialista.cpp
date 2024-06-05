#include "Especialista.h"
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

class Especialista
{
public:
    //Si ves necesario cambiar el char solo hazlo pero intentemos mantener la estructura del codigo 
    int id;
    char nombre[100];
    char especialidad[50];
    int aniosExperiencia;
    double tarifaConsulta;
    char direccionOficina[150];
    char atributoAdicional[100];

    Especialista* left;
    Especialista* right;

    Especialista(int _id, const char* _nombre, const char* _especialidad, int _aniosExperiencia, double _tarifaConsulta, const char* _direccionOficina, const char* _atributoAdicional)
    {
        id = _id;
        strcpy(nombre, _nombre);
        aniosExperiencia = _aniosExperiencia;
        tarifaConsulta = _tarifaConsulta;
        strcpy(direccionOficina, _direccionOficina);
        strcpy(atributoAdicional, _atributoAdicional);
        left = right = nullptr;

    }
    


};

