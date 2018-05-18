#include <iostream>

using namespace std;
class LIstaEnla;
class Nodo{
    friend LIstaEnla;
    int dato;
    Nodo *siguiente;
    Nodo(int a=0){this->dato=a;this->siguiente=NULL;};


};
class LIstaEnla{
public:
    Nodo*inicio;
    LIstaEnla(){this->inicio=NULL;}

    void tamanho(){
        int t=0;
        Nodo *actual;
        actual=inicio;
        while(actual!=NULL){
            t++;
            actual=actual->siguiente;
        }
     cout<<t<<endl;
    }

    void insertar(int a){
        Nodo*nuevo=new Nodo(a);
        if(inicio==NULL){
            inicio=nuevo;
            return;
        }
        Nodo*aux=inicio;
        Nodo*aux2;
        while((aux!=NULL)&&(a>aux->dato)){
            aux2=aux;
            aux=aux->siguiente;
        }
        if(aux==inicio){
            nuevo->siguiente=inicio;
            inicio=nuevo;
        }
        else{
            aux2->siguiente=nuevo;

        }
        nuevo->siguiente=aux;
    }
    void mostrar(){
        Nodo*actual;
        actual=inicio;
        while(actual!=NULL){
            cout<<actual->dato<<" ";
            actual=actual->siguiente;
        }
        cout<<endl;
    }

    void buscar(int x){
        bool a;
        int c=0;
        Nodo *actual;
        actual=inicio;
        while(actual!=NULL){
                c++;
            if(actual->dato==x){a = false;break;}
            else{a= true; actual=actual->siguiente;}

        }

        if(a==true){cout<<"No se encontro el elemento "<<endl;}
        else{cout<<"Elemento encontrado en la posicion "<<c<<endl;}

    }


     void elimval(int x){
        Nodo *aux=inicio;
        Nodo *aux2=inicio->siguiente;
        if(x==inicio->dato){
            inicio=inicio->siguiente;
        }
        else{
            while(aux2!=NULL){
                if(x==aux2->dato){
                    aux->siguiente=aux2->siguiente;
                    return;
                }
                else{
                aux=aux->siguiente;
                aux2=aux2->siguiente;
            }}

        }
    }

    void elimpo(int x){
        int c=1;
        Nodo *aux=inicio;
        Nodo *aux2=inicio->siguiente;
        if(x==c){
            inicio=inicio->siguiente;
        }
        else{
            while(aux2!=NULL){
                    c++;
                if(x==c){
                    aux->siguiente=aux2->siguiente;
                    return;
                }
                else{
                aux=aux->siguiente;
                aux2=aux2->siguiente;
            }}

        }
    }


    void elimlista(){
        while(inicio!=NULL){
            inicio=inicio->siguiente;
        }



    }



};
int main(){
    LIstaEnla lista;

    lista.insertar(0);
    lista.insertar(2);
    lista.insertar(1);
    lista.insertar(4);
    lista.mostrar();
    cout<<"Tamano es :";lista.tamanho();
    lista.buscar(2);
    lista.elimval(1);
    lista.mostrar();
    lista.elimpo(1);
    lista.mostrar();
    lista.elimlista();
    lista.mostrar();
    cout<<"Tamano es :";lista.tamanho();



}
