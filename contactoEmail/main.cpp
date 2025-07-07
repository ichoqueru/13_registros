#include<iostream>
#include "contacto.h"
#include "gestorContacto.h"
#define MAX 10
using namespace std;
int main(){
    int n, op;
    string nom, user, domain;
    char sex, SN;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Mostrar contactos"<<endl;
        cout<<"3. Eliminar un contacto"<<endl;
        cout<<"4. Modificar un contacto"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"\nElige una opcion: "; cin>>op;
        cout<<endl;
        switch(op){
            case 1:
                cout<<"---Agregar contacto--- "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 2:
                if(n == 0){
                    cout<<"Aun no se han registrado contactos"<<endl;
                }
                else
                    mostrarContactos(lista,n);
                break;
            case 3:
                //elimina un contacto
                eliminarContacto(lista,n);        
                system("pause");        
                break;
            case 4:
                modificarContacto(lista,n);
                system("pause");
                break;
            case 0:
                cout<<"Esta seguro de salir? (S/N): ";
                cin>>SN;
                if(SN != 'S' && SN != 's'){
                    op = -1;
                    cout<<"Se cancelo la operacion"<<endl;
                }
                else
                    cout<<"Hasta la proxima!"<<endl;
                break;
            default:
            cout<<"Opcion no valida!"<<endl;
                break;
        }
        cout<<"\nPresione una tecla para continuar...";
        cin.ignore();
        cin.get();
    } while(op != 0);
    return 0;
}