#pragma once
#include "Empresa.h"
#include "string.h"

class ArchivoEmpresa{
    private:
        char nombre[30];
        int tamanioRegistro;
    public:
        ArchivoEmpresa(const char *n="Empresas.dat"){
            strcpy(nombre, n);
            tamanioRegistro=sizeof(Empresa);
        }
        int agregarRegistro(char* _nuevoID = (char*) "NADA");
        int agregarRegistro(Empresa reg);
        bool listarRegistros();
        bool listarInactivos();
        int buscarEmpresa(const char* codEmpresa);
        Empresa leerRegistro(int pos);
        int modificarRegistro(Empresa reg, int pos);
        int contarRegistros();
        bool bajaLogica(const char* _ID);
        bool altaLogica(const char* _ID);
    };

