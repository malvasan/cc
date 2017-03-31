#include <iostream>

using namespace std;
/*
int main()
{

    int arreglo[4];
    int a;

    cout<<"Ingresa el primer valor:";
    cin>>arreglo[0];

    cout<<"Ingresa el segundo valor:";
    cin>>arreglo[1];

    cout<<"Ingresa el tercer valor:";
    cin>>arreglo[2];

    cout<<"Ingresa el cuarto valor:";
    cin>>arreglo[3];

    a=arreglo[0];
    arreglo[0]=arreglo[3];
    arreglo[3]=a;

    a=arreglo[1];
    arreglo[1]=arreglo[2];
    arreglo[2]=a;

    cout<<"El arreglo es: "<<arreglo[0]<<arreglo[1]<<arreglo[2]<<arreglo[3]<<endl;

}
*/

int main()
{
    int tamano;
    cout<<"Tamano del arreglo: ";
    cin>>tamano;
    int arreglo[tamano];
    int c,i;
    int temp;
    int sum=0;
    for(i=0;i<tamano;i++){
        cout<<"Ingresa el valor:";
        cin>>arreglo[i];
        sum+=arreglo[i];
    }
    c=--i;
    for(int a=0;a<(tamano/2);++a){
        temp=arreglo[a];
        arreglo[a]=arreglo[c];
        arreglo[c]=temp;
        --c;
    }
    cout<<"El arreglo es: ";
    for(int i=0;i<tamano;i++){
        cout<<arreglo[i];
    }
    cout<<endl;
    cout<<"La suma es: "<<sum<<endl;
}
