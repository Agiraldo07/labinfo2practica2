#include <iostream>
#include <ctime> // libreria de tiempo

#define hour NULL

using namespace std;

int main()
{
    int count;
    char pala[200];
    srand(unsigned (time(hour))); // es necesario para generar numero aleatorio diferente cada vez que se ejecute el codigo
    for(int i=0;i<200;i++){
        pala[i]=65+rand()%((90+1)-65);
        cout<<pala[i];
    }
    cout<<endl;
    for(int j=65;j<=90;j++){
        count=0;
        for(int i=0;i<200;i++){
            if(pala[i]==j)count++;
        }
        cout<<char(j)<<':'<<count<<endl;
    }
    return 0;
}
