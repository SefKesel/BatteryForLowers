# include<iostream>
# include<cstring>
# include "ArchivoEmpresas.h"
# include "MenuBaterias.h"
# include "MenuEmpresas.h"

using namespace std;

int main(){
	int opc;
    while(true){
        system("cls");
        cout << "****** BatteryForLowers ******" << endl;
        cout << "1. MENU EMPRESAS" << endl;
        cout << "2. MENU BATERIAS" << endl;
        cout << "3. MENU VENTAS" << endl;
        cout << "0. FIN DEL PROGRAMA" << endl;
        cout << "************************" << endl;
        cout << "SELECCIONAR OPCION " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: menuEmpresas();
                    break;
            case 2: menuBaterias();
                    break;
            case 0: return 0;
                    break;
            default: cout<<"LA SELECCION NO ES CORRECTA"<<endl;

        }
        system("pause");
    }
    return 0;
}
