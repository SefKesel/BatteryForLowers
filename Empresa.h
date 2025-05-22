#pragma once

class Empresa{
    // (Id de empresa, nombre, apellido de responsable, numero de teléfono, dirección de email
private:
    char ID[5];
    char nombre[50];
    char apellido[50];
    char celular[15];
    char mail[20];
    bool estado;

public:
    /// getters y setters
    void setID(const char* _id);
    void setNombre(const char* _no);
    void setApellido(const char* _ap);
    void setCelular(const char* _celu);
    void setMail(const char* _mail);
    void setEstado(bool _estado);

    char* getID();
    char* getNombre();
    char* getApellido();
    char* getCelular();
    char* getMail();
    bool getEstado();

    /// métodos
    bool Cargar(char* _nuevoID = (char*) "NADA");
    void Mostrar();
};
