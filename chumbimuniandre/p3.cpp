#include <iostream>
using namespace std;
int recorrido(int max[],int n,int x,int y){
    
    for(int i=0;i<n;i++){
        int j=i,cont=0;
        while(j<n){
            int lon=0;
        if(*(max+i)%2!=0&&*(max+j+2)%2!=0){
            cont++;
            if(cont>lon){
                lon=cont;
                x=i,y=j;
            }
        }
        j=j+2;
        }
        cont=0;
    }   
}

int main()
{
    
    int max[]={1,2,3,2,2,1,1,3,3,7,5,1,2,3};
    int x=0,y=0;
    
    int n=sizeof(max)/sizeof(max[0]);
    recorrido(max,n,x,y);
    int i=x;
    while(i<y){
        cout<<*(max+i)<<" ";
        i=i+2;
    }


    return 0;
}
