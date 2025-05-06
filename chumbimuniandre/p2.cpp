#include <iostream>
using namespace std;
int producto(int long long a,int long long b){
    return a*b;

}
void multiplicar(int long long A[2][2], int k){
    int Ar[2][2],l=0;
    *(*(Ar+0)+0)=2;
    *(*(Ar+0)+1)=3;
    *(*(Ar+1)+0)=4;
    *(*(Ar+1)+1)=5;
    int long long Ap[2][2];
    while(l+1<k){
        if(l==0){
            *(*(Ap+0)+0)=2;
            *(*(Ap+0)+1)=3;
            *(*(Ap+1)+0)=4;
            *(*(Ap+1)+1)=5;}
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            *(*(A+i)+j)=producto(*(*(Ap+i)+0),*(*(Ar+0)+j))+producto(*(*(Ap+i)+1),*(*(Ar+1)+j));
        }
    }
    l++;
    *(*(Ap+0)+0)=*(*(A+0)+0);
    *(*(Ap+0)+1)=*(*(A+0)+1);
    *(*(Ap+1)+0)=*(*(A+1)+0);
    *(*(Ap+1)+1)=*(*(A+1)+1);
    }
    
}
int main()
{
    int long long A[2][2];
    int k;
    *(*(A+0)+0)=2;
    *(*(A+0)+1)=3;
    *(*(A+1)+0)=4;
    *(*(A+1)+1)=5;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<*(*(A+i)+j)<<" ";
        }
        cout<<endl;
    }
    cout<<"ingrese un numero: ";
    cin>>k;
    multiplicar(A,k);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<*(*(A+i)+j)<<" ";
        }
        cout<<endl;
    }


    return 0;
}
