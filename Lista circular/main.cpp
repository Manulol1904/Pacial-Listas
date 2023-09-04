
#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo*sig;
}*first, *last;

void insertar(){
    Nodo*nuevo=new Nodo();
    cout<<"ingrese un dato: ";
    cin>>nuevo->dato;
    if(first==NULL){
        first=nuevo;
        first->sig=last;
        last=first;
        last->sig=first;
    }
    else{
        last->sig=nuevo;
        nuevo->sig=first;
        last=nuevo;
        
    }
}
void imprimir(){
    Nodo*actual=new Nodo();
    actual=first;
    if(first==NULL){
       cout<<"no existe la lista"<<endl;
        
    }
    else{
        do{
            cout<<actual->dato<<"->";
            actual=actual->sig;
        }
        while(actual!=first);
        
    }
}

void replace(){
    Nodo*BB=new Nodo();
    BB=first;
    int value;
    int value2;
    cout<<"\ninserta los nuemeros a reemplazar: ";
    cin>>value;
    cout<<"\ninserte el nuevo valor: ";
    cin>>value2;
    if(first==NULL){
       cout<<"no existe la lista"<<endl;
        
    }
    else{
        do{
            if(BB->dato==value){
            BB->dato=value2;
            }
            BB=BB->sig;
        }
        while(BB!=first);
        
    }
    
}

int main(){
for(int i=0; i<5;i++){
   insertar();
}
imprimir();
replace();
imprimir();

    return 0;
}
