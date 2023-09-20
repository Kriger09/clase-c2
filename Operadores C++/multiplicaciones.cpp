#include <iostream>
#include <cstdlib>

using namespace std;

float number1;
float number2;
float total;

int main(){
    cout<<"Ingresar número"<<endl;
    cin>>number1;
    cout<<"Ingresar otro número"<<endl;
    cin>>number2;
    total=number1*number2;
    cout<<"El resultado de multiplicar "<<number1<<" por "<<number2<<" es "<<total<<endl;
    system("read -n 1 -s -p \"Presione cualquier tecla para continuar. .\"");
}
