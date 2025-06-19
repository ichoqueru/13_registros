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
    int n,mayor,mayorvent,sumavent;
    cout<<"Ingrese la cantidad de empleados: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nEmpleado #"<<i+1<<endl;
        cin.ignore();
        cout<<"Ingrese el nombre: ";
        getline(cin,EMPLEADOS[i].nom);

        for(int j=0; j<12;j++){
            cout<<"Venta del mes "<<j+1<<" : ";
            cin>>EMPLEADOS[i].ven[j];  
			sumavent=0;  
			sumavent+=EMPLEADOS[i].ven[j];                       
        }
        cout<<"Ingrese el salario: ";
        cin>>EMPLEADOS[i].sal;
        cout<<endl;
        if(sumavent>mayorvent || i==0){
            	mayorvent=sumavent;
            	mayor=i;
        }
    }
    cout<<"-Datos del empleado-\n";
      for(int i=0;i<n;i++){
        cout<<"\nEmpleado #"<<i+1<<endl;
        cout<<"Nombre: ";
        cout<<EMPLEADOS[i].nom<<endl;
        cout<<"Ventas de cada mes: ";
        for(int j=0; j<12;j++){
            cout<<EMPLEADOS[i].ven[j]<<" ";            
        }
        cout<<"Salario: ";
        cout<<endl<<EMPLEADOS[i].sal<<endl<<endl;
    }
    cout<<"\nEl empleado con mayores ventas del mes: \n";
    cout<<"Nombre: "<<EMPLEADOS[mayor].nom<<endl;
    cout<<"Ventas totales: "<<mayorvent<<endl;    
    return 0;
}
