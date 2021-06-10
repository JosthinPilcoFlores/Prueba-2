#include <iostream>

using namespace std;

int suma(int,int);
int resta(int,int);
int producto(int,int);
int potencia(int,int);

int main(){
    int a,b,op;
    cout<<"Ingrese dos numeros: ";
    cin>>a>>b;
    cout<<"Ingrese una operacion:\n1)Suma\n2)Resta\n3)Multiplicacion\n4)Potencia";
    cin>>op;
    if(op==1){
        cout<<"Suma: "<<suma(a,b);
    }
    else if(op==2){
        cout<<"Resta: "<<resta(a,b);
    }
    else if(op==3){
        cout<<"Producto: "<<producto(a,b);
    }
    else{
        cout<<"Potencia: "<<potencia(a,b);
    }
    return 0;
}

int suma(int a,int b){
    return a+b;
}

int resta(int a,int b){
    return a-b;
}

int producto(int a,int b){
    return a*b;
}

int potencia(int a,int b){
    int potencia=1;
    for(int i=0;i<b;i++){
        potencia=potencia*a;
    }
    return potencia;
}