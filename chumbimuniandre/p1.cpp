#include <iostream>
using namespace std;
void mostrar(int *t,int tama){
    for(int i=0;i<tama;i++){
        cout<<*(t+i);
    }
}
void rotacionizq(int *t,int tama, int rotar){
    int j=0,temp;
    while(j<rotar){
    for(int i=0;i<tama;i++){
        if(i==0){temp=*(t+i);}
        *(t+i)=*(t+i+1);
        if(i==tama-1){
            *(t+tama-1)=temp;
        }
    }
    j++;
    }
}
void rotacionder(int *t,int tama, int rotar){
    int j=0,temp;
    while(j<rotar){
    for(int i=tama-1;i>=0;i--){
        if(i==tama-1){
            temp=*(t+tama-1);
        }
        
        *(t+i)=*(t+i-1);
        if(i==0){*(t+i)=temp;}
        
    }
    j++;
    }
}
int main()
{
    int tama;
    int *t= new int [tama];
    int rotar;
    string direccion,der="derecha",izq="izquierda";
   
    while(tama>100||tama<1){
        cout<<"ingrese el tamaño maximo del arreglo(max 100): "<<endl;
        cin>>tama;}
    cout<<"ingrese los elementos: "<<endl;
    for(int i=0;i<tama;i++){
        cin>>*(t+i);
    }
    cout<<"Ingrese el valor de  (cantidad de posiciones a rotar): ";
    cin>>rotar;
    cout<<"¿Rotar hacia la derecha o izquierda?: ";
    cin>>direccion;
    if(direccion==der){
        rotacionder(t,tama,rotar);
    }
    if(direccion==izq){
        rotacionizq(t,tama,rotar);
    }
    
    cout<<"Arreglo rotado a la derecha: "<<endl;
    mostrar(t,tama);
    return 0;
}
