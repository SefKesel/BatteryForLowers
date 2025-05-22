# include "Empresa.h"
# include<iostream>
# include<cstring>
# include "ArchivoEmpresas.h"

using namespace std;

    /// getters y setters
    void Empresa::setApellido(const char* _ap){strcpy(apellido, _ap);}
    void Empresa::setNombre(const char* _no){strcpy(nombre,_no);}
    void Empresa::setID(const char* _ID){strcpy(ID,_ID);}
    void Empresa::setCelular(const char* _celu){strcpy(celular,_celu);}
    void Empresa::setEstado(bool _estado){estado=_estado;}

    char* Empresa::getApellido(){return apellido;}
    char* Empresa::getNombre(){return nombre;}
    char* Empresa::getID(){return ID;}
    char* Empresa::getCelular(){return celular;}
    bool Empresa::getEstado(){return estado;}

    /// métodos
    bool Empresa::Cargar(char* _nuevoID){
        ArchivoEmpresa archiEmpr;

        if(strcmp(_nuevoID,"NADA")==0){
            cout<<"Ingrese ID: ";
            cin>>ID;
            if(archiEmpr.buscarEmpresa(ID)>=0){
                cout<<"Ya existe el usuario."<<endl;
                return false;
            }
        }
        else{
            strcpy(ID,_nuevoID);
        }
        cout<<"Ingrese Apellido: ";
        cin>>apellido;
        cout<<"Ingrese nombre: ";
        cin>>nombre;
        cout<<"Ingrese Celular: ";
        cin>>celular;
        estado=true;
        return true;
    }
    void Empresa::Mostrar(){
        cout<<"Datos de la Empresa:"<<endl;
        cout<<"Apellido: "<<apellido<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"DNI: "<<ID<<endl;
        cout<<"Celular: "<<celular<<endl;
        cout<<endl;
    }
