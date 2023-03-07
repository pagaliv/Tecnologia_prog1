#include <iostream>
#include <fstream>
using namespace std;

void readFichEnt(){
    ifstream f;
    int n;
    char nombref[30];
    cout << "Escribe el fichero que quiere mostrar" << endl;
    cin >> nombref;
    if(f){
        f.open(nombref,ios::in);
        f >> n;
        while (!f.eof()){
            cout << n << endl;
            f >> n;
        }
        f.close();
    }
}
void makeFich100(){
    ofstream f;
    int n=1;
    f.open("NUMEROS.DAT",ios::out);
    while(n<101){
        f<<n<<endl;
        n++;
    }
    f.close();
}
void makeFichTerm0(){
    ofstream f;
    int n;
    char nombref[30];
    cout << "Escribe el fichero que quiere mostrar" << endl;
    cin >> nombref;
    f.open(nombref,ios::out);
    cout << "Escribe el numero que quiere escribir, para terminar escribe 0" << endl;
    cin >> n;
    while(n>0){
        f<<n<<endl;
        cin>>n;
    }
    f.close();
}
void makeFichPar(char nombref[30]){
    ofstream f;
    int n;
    f.open(nombref,ios::out);
    cout << "Escribe el numero que quiere escribir, para terminar escribe 0 o un numero menor, solo se almacenaran los pares" << endl;
    cin >> n;
    while(n>0){
        if(n%2==0){
            f<<n<<endl;
        }
        cin >> n;
    }
    f.close();
}

int main() {
    makeFich100();
    makeFichTerm0();
    return 0;
}

