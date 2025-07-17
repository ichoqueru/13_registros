#include<iostream>
#include<string>
#include"contactoEmail.h"
using namespace std;

void leerContacto(contactoEmail &c, string n, char s, int e, correo em){
    c.nom = n;
    c.sex = s;
    c.edad = e;
    c.email = em;
}

void leerCorreo(correo &c, string u, string d){
    c.user = u;
    c.domain = d;
}

void imprimeContacto(contactoEmail &c){
    cout<<"Nombre: "<<c.nom<<endl;
    cout<<"Sexo: "<<c.sex<<endl;
    cout<<"Edad: "<<c.edad<<endl;
    cout<<"Email: "<<c.email.user<<"@"<<c.email.domain<<endl;
}

void eliminarContacto(contactoEmail lista[], int &n){
    string nombre;
    cin.ignore();
    cout<<"Ingrese el nombre del contacto a eliminar: ";
    getline(cin, nombre);
    for(int i=0;i<n;i++){
        if(lista[i].nom==nombre){
            for(int j=i;j<n-1;j++){
                lista[j]=lista[j+1];
            }
            n--;
            cout<<"Contacto eliminado"<<"\n";
            return;
        }
    }

}

void modificarContacto(contactoEmail lista[], int n){
    string nombre;
    cin.ignore();
        cout<<"Ingrese el nombre del contacto a modificar: ";
        getline(cin, nombre);
    for(int i=0; i<n;i++){
        if(lista[i].nom==nombre){
            cout<<"--Ingrese los nuevos datos--"<<endl;
            cout<<"Nombre: "; getline(cin,lista[i].nom);
            cout<<"Sexo (M/F): "; cin>>lista[i].sex;
            cout<<"Edad: "; cin>>lista[i].edad;
            cout<<"Correo electronico (usuario@dominio): "<<endl;
            cout<<"\tIngrese el usuario: "; cin>>lista[i].email.user;
            cout<<"\tIngrese el dominio: "; cin>>lista[i].email.domain;
            return;
        }    
    }
}