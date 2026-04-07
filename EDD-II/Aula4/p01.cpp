//Problema de contagem de palavras em um arquivo
#include <iostream>
#include <string>
#include <list>

using namespace std;

struct Aluno {
    string nome;
    int matricula;
    string email;
};

#define HASH_TABLE_SIZE 10
list<Aluno> hashtable[HASH_TABLE_SIZE];
// tabela hash para armazenar os alunos, 
// onde cada posição é uma lista de alunos (para lidar com colisões)


int HashFunction(int matricula){
    return matricula % HASH_TABLE_SIZE;
}

void Inserir(Aluno aluno){
    int indice = HashFunction(aluno.matricula);
    hashtable[indice].push_back(aluno);
}

Aluno Buscar(int matricula){
    int indice = HashFunction(matricula);
    for (auto it = hashtable[indice].begin(); it != hashtable[indice].end(); it++) {
        if (it->matricula == matricula) {
            return *it; // Retorna o aluno encontrado na posição do iterator.
        }
        cout << "Aluno encontrado!\n";
    }
    return Aluno(); // Retorna um aluno vazio caso não seja encontrado.
}

void remover(int matricula){
    int indice = HashFunction(matricula);
    for (auto it = hashtable[indice].begin(); it != hashtable[indice].end(); it++) {
        if (it->matricula == matricula) {
            hashtable[indice].erase(it);
        }
        cout << "Aluno removido!\n";
    }
}

void imprimir(){
    for(int i = 0 ; i < HASH_TABLE_SIZE; i++){
        for(auto it = hashtable[i].begin(); it != hashtable[i].end(); it++){
            cout << "Nome: " << it->nome << endl;
            cout << "Matricula: " << it->matricula << endl;
            cout << "Email: " << it->email << endl;
        }

    }
    
    

}

int main(){
    Aluno aluno1 = {"João", 123, "joao@email.com"};
    Aluno aluno2 = {"Maria", 456, "Maria@email.com"};
    Aluno aluno3 = {"Pedro", 789, "Pedro@email.com"};
    Aluno aluno4 = {"Ana", 321, "Ana@email.com"};
    Aluno aluno5 = {"Lucas", 654, "Lucas@email.com"};
    Inserir(aluno1);
    Inserir(aluno2);
    Inserir(aluno3);
    Inserir(aluno4);
    Inserir(aluno5);
    imprimir();
    Aluno AlunoBuscado = Buscar(456);
    cout << "Aluno buscado:\n";
    cout << "Nome: " << AlunoBuscado.nome << endl;
    AlunoBuscado = Buscar(111);
    if (AlunoBuscado.nome.empty()) {
        cout << "Aluno não encontrado!\n";
    }else {
        cout << "Aluno encontrado:\n";
        cout << "Nome: " << AlunoBuscado.nome << endl;
    }
    return 0;
}