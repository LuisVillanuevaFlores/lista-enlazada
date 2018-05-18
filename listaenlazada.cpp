#include <iostream>

using namespace std;
class Nodo{
public:
    int dato;
    Nodo *sig;
    Nodo(int a=0){this->dato=a;this->sig=NULL;};


};
class Lista{
public:
    Nodo*inicio;
    Lista(){this->inicio=NULL;}


    void insertar(int a){
        Nodo*nuevo=new Nodo(a);
        if(inicio==NULL){
            inicio=nuevo;
            return;
        }
        Nodo*aux=inicio;
        Nodo*aux2=aux;
        while((aux!=NULL)&&(a<aux->dato)){
            aux2=aux;
            aux=aux->sig;
        }
        if(aux==this->inicio){
            nuevo->sig=inicio;
            inicio=nuevo;
        }
        else{
            aux2->sig=nuevo;

        }
        nuevo->sig=aux;
    }
    void mostrar(){
        Nodo*actual;
        actual=inicio;
        while(actual!=NULL){
            cout<<actual->dato<<" ";
            actual=actual->sig;
        }
        cout<<endl;
    }

    void tamanho(){
        int t=0;
        Nodo *actual;
        actual=inicio;
        while(actual!=NULL){
            t++;
            actual=actual->sig;
        }
     cout<<t<<endl;
    }

    void buscar(int x){
        bool a;
        int c=0;
        Nodo *actual;
        actual=inicio;
        while(actual!=NULL){
                c++;
            if(actual->dato==x){a = false;break;}
            else{a= true; actual=actual->sig;}

        }

        if(a==true){cout<<"No se encontro el elemento "<<endl;}
        else{cout<<"Elemento encontrado en la posicion "<<c<<endl;}

    }


     void elimval(int x){
        Nodo *aux=inicio;
        Nodo *aux2=inicio->sig;
        if(x==inicio->dato){
            inicio=inicio->sig;
        }
        else{
            while(aux2!=NULL){
                if(x==aux2->dato){
                    aux->sig=aux2->sig;
                    return;
                }
                else{
                aux=aux->sig;
                aux2=aux2->sig;
            }}

        }
    }

    void elimpo(int x){
        int c=1;
        Nodo *aux=inicio;
        Nodo *aux2=inicio->sig;
        if(x==c){
            inicio=inicio->sig;
        }
        else{
            while(aux2!=NULL){
                    c++;
                if(x==c){
                    aux->sig=aux2->sig;
                    return;
                }
                else{
                aux=aux->sig;
                aux2=aux2->sig;
            }}

        }
    }



};
int main(){
    Lista lista;

    lista.insertar(0);
    //cout<<lista.inicio->dato<<endl;
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


}
