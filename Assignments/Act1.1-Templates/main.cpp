#include <iostream>
#include "list.h"

using namespace std;

int main(){
    int option=0;
    list<int> list;
    while (option != -1 ){
        cout<<endl;
     cout<<"-------------------------------------------------------------"<<endl;
     cout<<"Ingresa una opcion ( -1 para terminar ): "<<endl;
     cout<<"\nNota: El orden de posicion de los valores del vector comienza en 0\n"<<endl;
     cout<<"1. Insertar un valor al final del vector"<<endl;
     cout<<"2. Elimina el ultimo valor en el vector"<<endl;
     cout<<"3. Encuentra lel valor deseado en una determinada posicion"<<endl;
     cout<<"4. Tamano del vector"<<endl;
     cout<<"5. Encuentra el valor maximo dentro del vector"<<endl;
     cout<<"6. Ingresa un valor cualquiera en la posicion deseada"<<endl;
     cout<<"7. Elimina el valor de la posicion deseada"<<endl;
     cout<<"8. Imprime el vector"<<endl;
     
     cout<<"-------------------------------------------------------------"<<endl;

     cin>>option;

     switch (option)
     {
     case 1:{
        int a;
        cout<<"Escribe el valor a insertar en el vector: ";
        cin>>a;
        list.insert(a);
        cout<<endl;
        break;
        }
    case 2:{
        cout<<"Eliminando el ultimo valor del vector....";
        list.removeLast();
        cout<<endl;
        break;
        }
    case 3:{
        int pos;
        cout<<"Escribe la posicion que deseas encontrar: ";
        cin>>pos;
        int temp;
        temp=list.getdata(pos);
        if (temp != 0){
        cout<<"Elemento encontrado: "<<temp;
        }
        cout<<endl;
        break;
        }
    case 4:{
        int tamano=list.getsize();
        cout<<"El tamano del vector es: "<<tamano<<endl;
        break;
        }
    case 5:{
        int maxi;
        maxi=list.getmax();
        cout<<"El valor maximo del vector es: "<<maxi<<endl;
        break;
        }
    case 6:{
        int pos;
        int data;
        cout<<"Ingresa la posicion: ";
        cin>>pos;
        cout<<"\nIngresa el dato: ";
        cin>>data;
        list.insertat(data,pos);
        cout<<endl;
        break;
        }
    case 7:{
        int pos;
        cout<<"Ingresa la posicion: ";
        cin>>pos;
        list.removeat(pos);
        cout<<endl;
        break;
        }
    case 8:{
        list.print();
        break;
        }
    case -1:{
        cout<<"Adios :(";
        cout<<endl;
        break;}     
     default:{
        cout<<"Ingresa una opcion valida"<<endl;
        cout<<endl;
        break;}
     }
    }
    return 0;
}
