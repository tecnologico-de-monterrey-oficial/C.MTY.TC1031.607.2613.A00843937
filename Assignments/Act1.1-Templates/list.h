#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class list
{
private:
    vector<T> elements;
    int size;

public:
    list();
    void insert(T data);
    void removeLast();
    T getdata(int index);
    int getsize();
    T getmax();
    void print();
    void insertat(T data, int index);
    void removeat(int index);
    bool checkpos(int size);

};

template <typename T>
list<T>::list(){
    size=0;
}

template <typename T>
void list<T>::insert(T data)
{
    elements.push_back(data);
    size++;
}

template <typename T>
void list<T>::removeLast(){
    if (elements.empty()==false){
    cout<<"El elemento a eliminar sera: "<<elements[size-1];
    elements.pop_back();
    size--;
    }else{
        cout<<"NO TIENE ELEMENTOS"<<endl;
    }
}

template <typename T>
bool list<T>::checkpos(int index){
    if (index<=size && index>=0){
        return true;
    }else{
        return false;
    }
}

template <typename T>
T list<T>::getdata(int index){
    if (index>=0 && index<size){
        return elements[index];
    }else{
        cout<<"Indice fuera de rango"<<endl;
        return T();
    }
}

template <typename T>
int list<T>::getsize(){
    return size;
}

template <typename T>
T list<T>::getmax(){
    if (!elements.empty()){
    return *max_element(elements.begin(),elements.end());
    }else{
        return T()
    }
}

template <typename T>
void list<T>::print(){
    for (int i=0; i<size;i++){
        cout<<"["<<i<<"]"<<" - "<<elements[i]<<endl;
    }
}

template <typename T>
void list<T>::insertat(T data, int index){
    if (checkpos(index)){
        elements.insert(elements.begin()+index,data);
        size++;
    }else{
        cout<<"Posicion Invalida"<<endl;
    }
}

template <typename T>
void list<T>::removeat(int index){
    if (size == 0) {
        cout << "NO HAY ELEMENTOS" << endl;
    } else if (index >= 0 && index < size) {
        cout << elements[index] << endl;
        elements.erase(elements.begin() + index);
        size--;
    } else {
        cout << "POSICIÓN INVÁLIDA" << endl;
    }
}


#endif /* LIST_H */
