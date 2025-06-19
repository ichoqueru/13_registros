#include<iostream>
#include<string>
using namespace std;
struct EMP{
    int num;
    string nom;
    float ven[12], sal;    
};

int main(){
    EMP EMPLEADOS[100];
    int n;
    cout<<"Ingrese la cantidad de empleados: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Numero del empleado: ";
        cin>>EMPLEADOS[i].num;
        cin.ignore();
        cout<<"Ingrese el nombre: ";
        getline(cin,EMPLEADOS[i].nom);
        for(int j=0; j<12;j++){
            cout<<"Venta del mes: ";
            cin>>EMPLEADOS[i].ven[j];            
        }
        cout<<"Ingrese el salario: ";
        cin>>EMPLEADOS[i].sal;
        cout<<endl;
    }
      for(int i=0;i<n;i++){
        cout<<"Cantidad de empleados: ";
        cout<<EMPLEADOS[i].num<<endl;
        cout<<"Nombre: ";
        cout<<EMPLEADOS[i].nom<<endl;
        cout<<"Ventas de cada mes: ";
        for(int j=0; j<12;j++){
            cout<<EMPLEADOS[i].ven[j]<<" ";            
        }
        cout<<"Salario: ";
        cout<<endl<<EMPLEADOS[i].sal<<endl<<endl;
    }
    return 0;
}
