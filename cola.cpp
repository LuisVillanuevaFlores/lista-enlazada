#include <bits/stdc++.h>
using namespace std;

 template < class T>
 class Queue {
     vector<T>items;
     int a;
     public:
           Queue(){a=0;}
           Queue(vector<T>x){items=x;}
           bool empty () const { return items.empty () ;}
           void push ( const T & item ) { items . push_back ( item );}
           T sizee(){
            return items.size();
           }


           T pop () {
               T fron=items[0];
                items.erase(items.begin());
                return fron;

            }
           T top(){

                T front=items.front();
                return front;
           }
           void mostrar(){
                for(int i=0;i<items.size();i++){
                    cout<<items[i]<<" ";
                }
                cout<<endl;
           }

           bool esta(T item){
               vector<T >aux;
               aux=items;
               Queue<T>a(aux);
               int tama=a.sizee();
               for(int i=0;i<tama;i++){
                    if(a.pop()==item){
                        return true;
                    }

               }
               return false;
               }

  };




template <class X>

Queue <X> operator +(Queue<X>a,Queue<X>b){
    int auxi;
    while(b.empty()!=1){
        auxi=b.pop();
        if(a.esta(auxi)==false){
            a.push(auxi);
        }
    }
return a;
}

template <class X>

Queue <X> operator -(Queue<X>a,Queue<X>b){
    Queue<X>nueva;
    int auxi;
    while(a.empty()!=1){
            auxi=a.pop();
        if(b.esta(auxi)==false){nueva.push(auxi);}
    }

return nueva;
}





  int main(){
   Queue<int>a;
   a.push(2);
   a.push(4);
   a.push(6);
   a.mostrar();
  Queue<int>b;
  b.push(8);
  b.push(4);
  b.push(4);
  b.mostrar();
   Queue<int>c;
   c=a+b;
   c.mostrar();
   Queue<int>d;
   d=a-b;
    d.mostrar();





   }

