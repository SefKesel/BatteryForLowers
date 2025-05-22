# include<iostream>
# include<cstring>
# include "FuncionesMenuEmpresas.h"

using namespace std;

int menuEmpresas(){
	int opc;
    while(true){
        system("cls");
        cout << "****** EMPRESAS ******" << endl;
        cout << "1. ALTA DE EMPRESA" << endl;
        cout << "2. BAJA DE EMPRESA" << endl;
        cout << "3. MODIFICAR DATOS DE LA EMPRESA" << endl;
        cout << "4. LISTAR EMPRESA" << endl;
        cout << "5. BUSCAR EMPRESA POR ID"<<endl;
        cout << "6. LISTAR INACTIVOS"<<endl;
        cout << "0. FIN DEL PROGRAMA" << endl;
        cout << "************************" << endl;
        cout << "SELECCIONAR OPCION " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: agregarEmpresa();
                    break;
            case 2: bajaEmpresa();
                    break;
            case 3: modificarEmpresa();
                    break;
            case 4: listarEmpresas();
                    break;
            case 5: buscarPorID();
                    break;
            case 6: listarInactivos();
                    break;
            case 0: return 0;
                    break;
            default: cout<<"LA SELECCION NO ES CORRECTA"<<endl;

        }
        system("pause");
    }
    return 0;

}
