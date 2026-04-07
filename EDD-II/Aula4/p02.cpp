//unordered_map

#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
                //<chave,valor>
    unordered_map<string,float> notas; 
    
    notas["fulano"] = 9.5;
    notas["beltrano"] = 10;
    notas["ciclano"] = 7.8;

    cout << notas["beltrano"] << endl;
    cout << "Tamanho da estrutura: " << notas.size() << endl<<endl;

    // Buscar alguma chave que não esta presente:
    cout << notas["ele"] << endl;
    cout<< notas["ela"] << endl;

    cout << "Percorrendo a tabela hash:\n";
    for(auto n: notas){
        cout << n.first <<": " << n.second << endl;
    }
    cout << "Novo tamanho da estrutura: " <<notas.size() << endl;

    return 0;

}