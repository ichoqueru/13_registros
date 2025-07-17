#include<iostream>
#include<string>
#include"contactoEmail.h"
using namespace std;


int main(){
    int n, op;
    string nom, user, domain;
    char sex;
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
        cout<<"Elige una opcion: "; cin>>op;
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
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                system("pause");
                break;
            case 3:
                //elimina un contacto;                 
                eliminarContacto(lista,n);        
                system("pause");        
                break;
            case 4:
                modificarContacto(lista,n);
                system("pause");
                break;

            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}

