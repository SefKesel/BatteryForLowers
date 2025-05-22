# include<iostream>
# include<cstring>
# include "FuncionesMenuEmpresas.h"
# include "ArchivoEmpresas.h"
# include "Empresa.h"
# include "ArchivoPropiedades.h"

using namespace std;

ArchivoEmpresa archiEmpresa;
ArchivoPropiedades archiPropiedades;
char ID;
Empresa empresa;
int pos2=0;
char nuevoNombre[50];
int aux2=0;

void agregarEmpresa(){
    if(archiEmpresa.agregarRegistro()==true){
        cout<<"REGISTRO AGREGADO";
    }
    else{
        cout<<"NO SE PUDO AGREGAR EL REGISTRO";
    }
    cout<<endl;
}
void bajaPropietario(){
    cout<<"Ingrese DNI: ";
    cin>>ID;
    if(archiEmpresa.bajaLogica(ID)==true){
        cout<<"REGISTRO BORRADO"<<endl;
    }
    else{
        cout<<"NO SE PUDO BORRAR EL REGISTRO"<<endl;
    }
}
void modificarCliente(){
    cout<<"Ingrese DNI: ";
    cin>>ID;
    pos2=archiEmpresa.buscarEmpresa(ID);
    empresa=archiEmpresa.leerRegistro(pos2);
    if(pos2>0 && empresa.getEstado()){
        cout<<"Ingrese nuevo nombre: ";
        cin>>nuevoNombre;
        empresa.setNombre(nuevoNombre);
        if(archiEmpresa.modificarRegistro(empresa,pos2)){
            cout<<"REGISTRO MODIFICADO"<<endl;
        }
        else{
            cout<<"NO SE PUDO MODIFICAR EL REGISTRO"<<endl;
        }
    }
    else if(!empresa.getEstado()){
        cout<<"Propietario dado de baja, desea reactivarlo? (1-Si - 0-No):"<<endl;
        cin>>aux2;
        if(aux2==1){
            empresa.setEstado(true);
            if(archiEmpresa.modificarRegistro(empresa,pos2)==1){
                cout<<"Propietario reactivado!"<<endl;
            }
        }

    }
    else{
        cout<<"PROPIETARIO NO ENCONTRADO"<<endl;
    }
}
void listarEmpresas(){
    if(archiEmpresa.listarRegistros()==false){
        cout<<"NO SE PUDO ABRIR EL ARCHIVO";
    }
    cout<<endl;
}
void buscarPorID(){
    cout<<"Ingrese ID: ";
    cin>>ID;
    pos2=archiEmpresa.buscarEmpresa(ID);
    if(pos2>0){
        empresa=archiEmpresa.leerRegistro(pos2);
        empresa.Mostrar();
    }
    else{
        cout<<"No existe ese cliente."<<endl;
    }
}

void listarInactivos(){
    archiEmpresa.listarInactivos();
    cout<<"Desea activar alguna Empresa? (1-Si / 0-No):";
    cin>>aux2;

    if(aux2==1){
     cout<<"Ingrese ID: ";
        cin>>ID;
        pos2=archiEmpresa.buscarEmpresa(ID);
        if(pos2>0){
            if(archiEmpresa.altaLogica(ID)){
                cout<<"Empresa reactivado satisfactoriamente."<<endl;
            }
        }
        else{
            cout<<"No existe esa Empresa."<<endl;
        }
    }
}
