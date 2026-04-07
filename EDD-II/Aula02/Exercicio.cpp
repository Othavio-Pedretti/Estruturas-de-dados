
#include<iostream>
#include<fstream>
#include<cctype>
#include <iomanip>

using namespace std;


int main(){

    string nome;
    char ch;
    cout << "INSIRA O NOME DO ARQUIVO:\n";
    cin << nome;
    ifstream arq(nome);
    if(!arq){
        cout << "O arquivo não exite\n";
        return 1;
    };
    contagem.open("contagem_caracteres.csv");
    while(arq.get(ch)){
        
        cout << ch << " - " << int(ch) << endl;
    }
    return 0;

}