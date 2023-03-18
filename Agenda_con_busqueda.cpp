#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct cita{
    string nombre;
    int edad;
    char sexo[10];
    int dia;
    char mes[20];
    char hora[10];
    int folio;
    char marcador;
};

int main (){
    int num = 1, op, i = 0, cont=1,folio1,e;
    string nombre, paterno, materno, completo, comparar;
    struct cita p1[100];
    while (num == 1){
        cout<<"1) Registrar Cita"<<endl;
        cout<<"2) Borrar cita"<<endl;
        cout<<"3) Mostrar citas"<< endl;
        cout<<"4) Buscar nombre"<<endl;
        cout<<"5) Salir"<<endl;
        cin>>op;
        if (op == 1){
            cout<<"Escribe tu nombre"<<endl;
            getline(cin,nombre);
            getline(cin,nombre);
            cout<<"Escribe tu apellido paterno"<<endl;
            getline(cin,paterno);
            cout<<"Escribe tu apellido materno"<<endl;
            getline(cin,materno);
            p1[i].nombre=nombre + " " + paterno + " "+ materno;
            cout<<"Escribe tu sexo"<<endl;
            cin>>p1[i].sexo;
            cout<<"Elige el dia"<<endl;
            cin>>p1[i].dia;
            cout<<"Escribe el mes con letras"<<endl;
            cin>>p1[i].mes;
            cout<<"Elige la hora"<<endl;
            cin>>p1[i].hora;
            p1[i].folio = cont;
            p1[i].marcador = 'A';
            i++;
            cont++;
        }
        if (op == 2){
            cout<<"Escribe el folio de la persona que quieras borrar"<<endl;
            cin>>folio1;
            for (int e = 0; e<i;e++){
                if (p1[e].folio == folio1){
                    if ( p1[e].marcador == 'E'){
                        break;
                    }
                    cout<<"---------------------------------------"<<endl;
                    cout<<"Borraste la cita de: "<<p1[e].nombre<<endl;
                    cout<<"---------------------------------------"<<endl;
                    p1[e].marcador = 'E';
                }
            }
        }
        if (op == 3){
            for (int c=0; c<i;c++){
                if (p1[c]. marcador == 'A'){
                    cout<<"-----------------------------------"<<endl;
                    cout<<"Nombre: "<<p1[c].nombre<<endl;
                    cout<<"Sexo: "<<p1[c].sexo<<endl;
                    cout<<"Dia: "<<p1[c].dia<<" de "<<p1[c].mes<<" a las "<<p1[c].hora<<endl;
                    cout<<"Folio: "<<p1[c].folio<<endl;
                    cout<<"-----------------------------------"<<endl;
                }
            }
        }
        if (op == 4){
            completo = 1;
            cout<<"Escribe el nombre de la persona que quieras buscar"<<endl;
            cout<<"Nombre:"<<endl;
            getline(cin,nombre);
            getline(cin,nombre);
            cout<<"Apellido paterno:"<<endl;
            getline(cin,paterno);
            cout<<"Apellido materno"<<endl;
            getline(cin,materno);
            completo = nombre + " " + paterno + " "+ materno;
            for (e = 0; e<i;e++){
                if ((p1[e].nombre == completo)&& p1[e].marcador == 'A'){
                    cout<<"-----------------------------------"<<endl;
                    cout<<"Nombre: "<<p1[e].nombre<<endl;
                    cout<<"Sexo: "<<p1[e].sexo<<endl;
                    cout<<"Dia: "<<p1[e].dia<<" de "<<p1[e].mes<<" a las "<<p1[e].hora<<endl;
                    cout<<"Folio: "<<p1[e].folio<<endl;
                    cout<<"-----------------------------------"<<endl;
                    break;
                }
                if ((p1[e].nombre == completo)&& p1[e]. marcador == 'E'){
                    cout<<"------------------------"<<endl;
                    cout<<"No existe la ficha"<<endl;
                    cout<<"------------------------"<<endl;
                    break;
                }
            }
            if (p1[e].nombre != completo){
                cout<<"------------------------"<<endl;
                cout<<"No existe la ficha"<<endl;
                cout<<"------------------------"<<endl;
            }
        }
        if (op == 5){
            num = 0;
        }
    }
return 0;
}
