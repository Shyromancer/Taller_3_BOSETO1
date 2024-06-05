#include "Consulta.h"
#include <iostream>
#include <cstring>
#include <cstdio>

class Consulta
{

public:
    int idConsulta;
    char fecha[11];
    char nombrePaciente[100];
    int edadPaciente;
    char generoPaciente[10];
    char correoPaciente[100];
    char fonoContacto[20];
    char estado[20];

    Consulta* left;
    Consulta* right;
    int height;


    Consulta(int _idConsulta, const char* _fecha, const char* _nombrePaciente, int _edadPaciente, const char* _generoPaciente, const char* _correoPaciente, const char* _fonoContacto, const char* _estado)
    {
        idConsulta = _idConsulta;
        strcpy(fecha, _fecha);
        strcpy(nombrePaciente, _nombrePaciente);
        edadPaciente = _edadPaciente;
        strcpy(generoPaciente, _generoPaciente);
        strcpy(correoPaciente, _correoPaciente);
        strcpy(fonoContacto, _fonoContacto);
        strcpy(estado, _estado);
        left = right = nullptr;
        height = 1;


    }

};



