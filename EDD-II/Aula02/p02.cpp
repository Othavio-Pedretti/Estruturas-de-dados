
#include<iostream>
#include<fstream>
#include<cctype>
#include <iomanip>

using namespace std;


int main(){

    ifstream arq("gpl3.txt");
    if(!arq){cout << "deu ruim\n";return 1;};
    char ch;
    int nletras=0,ndig=0, nspace=0, outros=0;
    while(arq.get(ch)){
        if(isalpha(ch)){
            nletras++;
        }
        else if(isspace(ch)){
            nspace++;
        }
        else if (isdigit(ch))
        {
            ndig++;    
        }
        else outros++;
    }

    int totalch = nletras+ndig+nspace+outros;
    cout << totalch << "total de caracteres:" << fixed << setprecision(2)
         << nletras << "letras" << nletras * 100 / totalch << ")" << endl
         << ndig << "digitos    (" << ndig * 100 / totalch  << ")" << endl
         << nspace << "espaços  (" << nspace * 100 / totalch << ")" << endl
         << outros << "outros  (" << outros * 100 / totalch << ")";

    return 0;

}