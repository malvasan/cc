#include <iostream>

using namespace std;

int sumaArreglo(const int arr[],const int tamano)
{
    int suma=0;
    for(int i=0;i<tamano;suma+=arr[i++]);
    return suma;
}

int promedio(const int arr[],const int tamano)
{
    return sumaArreglo(arr,tamano)/tamano;

}

void invertir(int arr[],int tamano)
{
    int temptamano=tamano;
    for(int i=0;i<(tamano/2);i++){
        int temp=arr[i];
        arr[i]=arr[--temptamano];
        arr[temptamano]=temp;
    }
    for(int i=0;i<tamano;i++)
        cout<<arr[i]<<endl;
}

void ordenar(int arr[],int tamano)
{
    int mayor;
    int temptamano=tamano;
    for(int i=0;i<tamano;++i){
        for(int j=0;j<temptamano;++j){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<tamano;i++)
        cout<<arr[i];
}

int tamano(char cadena[])
{

}
int main()
{
    int n;
    cout<<"Ingresa el tamano:";
    cin>>n;
    cout<<"Ingresa los"<<" "<<n<<" "<<"terminos"<<endl;
    int arreglo[n];
    for(int i=0;i<n;i++)
        cin>>arreglo[i];
    char cadena[]="hello";
    cout<<"La suma es:"<<sumaArreglo(arreglo,n)<<endl;
    cout<<"El promedio es:"<<promedio(arreglo,n)<<endl;
    invertir(arreglo,n);
    ordenar(arreglo,n);
}
