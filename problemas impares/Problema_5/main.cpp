#include <iostream>

using namespace std;

int main()
{
    int k=0;
    char palabra[30],copia[30],letra;
    cout<<"Escribe una palabra:";
    cin.getline(palabra,30,'\n');
    cout<<"Original:"<<palabra<<endl;
    for(int i=0;palabra[i]!='\0';i++){
        letra=palabra[i];
        if(palabra[i]!='+'){
            copia[k]=letra;
            k++;
        }
        palabra[i]='+'; // reemplaza el caracter por este simbolo para no volverlo a tener en cuenta
        for(int j=0;palabra[j]!='\0';j++)if(letra==palabra[j])palabra[j]='+';
    }
    cout<<"Sin repetidas:"<<copia<<endl;
    return 0;
}

