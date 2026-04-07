//Exemplo utilizando o unordered_set
//diferente do map o set armazena apenas chave 
//e não chave,valor
//ambos usam tabela hash;
#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<string> alunos;
    alunos.insert("fulano");
    alunos.insert("beltrano");
    alunos.insert("ciclana");

    //tamanho
    cout << alunos.size() << endl;;
    for(const auto& aluno: alunos){
        cout << aluno << endl;
    }

    //BUscar valores
    //o metodo find retorna um iterator para o elemento - caso encontre
    //Caso não encontre: retorna um iterator para o final do container
    if(alunos.find("fulano") !=alunos.end()){
        cout << "Esta no container\n";
    }else{
        cout << "Não esta!\n";
    }

    return 0 ;
}