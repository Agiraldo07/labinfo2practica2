#include <iostream>

using namespace std;

int ConvertInt(char []); // convierte un caracter numerico a un numero entero

int main()
{
    char numerica[30];
    cout<<"Escribe una cadena de caracteres numerica:";
    cin.getline(numerica,30,'\n');
    cout<<"El numero entero retornado es:"<<ConvertInt(numerica)/10<<endl;

    return 0;
}
int ConvertInt(char cadena[30]){
    int i=0,num=0;
    while(cadena[i]!='\0'){
        cadena[i]=cadena[i]-48;
        num=cadena[i]+num;
        num=num*10;
        i++;
    }
    return num;
}
