#ifndef CONTACTOEMAIL_H
#define CONTACTOEMAIL_H
#include<iostream>
#include<string>
using namespace std;

struct correo{
    string user;
    string domain;
    string email;
};

struct contactoEmail{
    string nom;
    char sex;
    int edad;
    struct correo email;
};

void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);
void eliminarContacto(contactoEmail lista[], int &n);
void modificarContacto(contactoEmail lista[], int n);

#endif