#include <iostream>
#include <cstdlib>

using namespace std;

int opcion;
float saldo=0;
float retiro, deposito;

int main(){
    cout<<"Bienvenido a tu Banquito"<<endl;
    cout<<"1 Consultar Saldo"<<endl;
    cout<<"2 Depositar"<<endl;
    cout<<"3 Retirar"<<endl;
    cout<<"4 Salir"<<endl;
    cin>>opcion;
    if(opcion==1){
        cout<<"Tu saldo actual es: "<<saldo<<endl;
        cout<<"Elija otra opción"<<endl;
        cout<<"2 Depositar"<<endl;
        cout<<"3 Retirar"<<endl;
        cout<<"4 Salir"<<endl;
        cin>>opcion;
    }else if(opcion==2){
        cout<<"Inserta tu deposito:"<<endl;
        cin>>deposito;
        saldo=saldo+deposito;
        cout<<"Tu saldo actual es de: "<<saldo<<endl;
        cout<<"Elija otra opción"<<endl;
        cout<<"1 Consultar Saldo"<<endl;
        cout<<"3 Retirar"<<endl;
        cout<<"4 Salir"<<endl;
        cin>>opcion;
    }else if(opcion==3){
        cout<<"Inserta tu retiro:"<<endl;
        cin>>retiro;
        if(retiro>saldo){
        cout<<"Su saldo es insuficiente"<<endl;
        cout<<"Elija otra opción"<<endl;
        cout<<"1 Consultar Saldo"<<endl;
        cout<<"2 Depositar"<<endl;
        cout<<"3 Retirar"<<endl;
        cout<<"4 Salir"<<endl;
        cin>>opcion;
        }
        saldo=saldo-retiro;
        cout<<"Tu saldo actual es de: "<<saldo<<endl;
        cout<<"Elija otra opción"<<endl;
        cout<<"2 Depositar"<<endl;
        cout<<"4 Salir"<<endl;
        cin>>opcion;
    }else if(opcion==4){
        cout<<"Gracias por utilizar tu Banquito"<<endl;
        system("read -n 1 -s -p \"Presione cualquier tecla para continuar. .\"");
    }else{
        cout<<"Esa opción no se encuentra disponible";
        cout<<"Elija otra opción"<<endl;
        cout<<"1 Consultar Saldo"<<endl;
        cout<<"2 Depositar"<<endl;
        cout<<"3 Retirar"<<endl;
        cout<<"4 Salir"<<endl;
        cin>>opcion;
    }
}
