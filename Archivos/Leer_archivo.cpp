#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /***** LEER MULTIPLES LINEAS ******/
    ifstream entrada;
    char linea[256];
    entrada.open("Estado_archivo.cpp");
    if(entrada.good()){
        cout<<"Archivo en buen estado"<<endl;
        while(!entrada.eof()){
            entrada.getline(linea,256);
            cout<<linea<<endl;
        }
    }
    else{
        cout<<"No se puede leer"<<endl;
    }

    entrada.close();
    return 0;
}

