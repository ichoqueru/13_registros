#include<iostream>
#include<string>
using namespace std;
struct EMP{
    int num;
    string nom;
    float ven[12], sal, ventotal;    
};

int main(){
    EMP EMPLEADOS[100];
    int n,mayor=0,mayorvent=0;
    cout<<"Ingrese la cantidad de empleados: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nEmpleado #"<<i+1<<endl;
        EMPLEADOS[i].num=i+1;
        cin.ignore();
        cout<<"Ingrese el nombre: ";
        getline(cin,EMPLEADOS[i].nom);

        EMPLEADOS[i].ventotal = 0;
        for(int j=0; j<12;j++){
            cout<<"Venta del mes "<<j+1<<" : ";
            cin>>EMPLEADOS[i].ven[j]; 
			EMPLEADOS[i].ventotal+=EMPLEADOS[i].ven[j];                     
        }
        cout<<"Ingrese el salario: ";
        cin>>EMPLEADOS[i].sal;
        cout<<endl;
        if(EMPLEADOS[i].ventotal>100){
        	EMPLEADOS[i].sal *=1.1;
        }

        if(EMPLEADOS[i].ventotal>mayorvent || i==0){
            	mayorvent=EMPLEADOS[i].ventotal;
            	mayor=i;
        }
    }
    cout<<"-Datos del empleado-\n";
      for(int i=0;i<n;i++){
        cout<<"\nEmpleado #"<<EMPLEADOS[i].num<<endl;
        cout<<"Nombre: ";
        cout<<EMPLEADOS[i].nom<<endl;
        cout<<"Ventas de cada mes: ";
        for(int j=0; j<12;j++){
            cout<<"Mes "<<j+1<<": "<<EMPLEADOS[i].ven[j]<<endl;            
        }
        cout<<"Salario: ";
        cout<<endl<<EMPLEADOS[i].sal<<endl<<endl;
    }
    cout<<"\nEl empleado con mayores ventas del mes: \n";
    cout<<"Nombre: "<<EMPLEADOS[mayor].nom<<endl;
    cout<<"Ventas totales: "<<mayorvent<<endl;    
    return 0;
}
