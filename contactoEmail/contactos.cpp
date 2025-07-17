#include<iostream>
using namespace std;

struct correo{
    string user;
    string domain;
};

struct contactoEmail{
    string nom;
    char sex;
    int edad;
    correo email;
};

void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);
void eliminarContacto(contactoEmail lista[], int &n);
void modificarContacto(contactoEmail lista[], int n);

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
            case 0:
                cout<<"Esta seguro de salir? (S/N): ";
                break;
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}

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