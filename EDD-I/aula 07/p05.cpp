//exemplo usando um vetor de structs
#include <iostream>
#include <algorithm>

using namespace std;


struct aluno{
    int matricula;
    string nome;
    float nota;
};

bool ordena(const aluno &a1, const aluno &a2){
   return a1.nota > a2.nota || // PRIMEIRO CRITÉRIO
        (a1.nota == a2.nota && a1.nome < a2.nome) || // SEGUNDO CRITÉRIO
        (a1.nota == a2.nota && a1.nome < a2.nome && a1.matricula > a2.matricula); // TERCEIRO CRITÉRIO
   };
}

const int NA = 4;
int main(){
   
    // declara um valor do tipo aluno e definimos seus valores
    aluno turma[NA] = {
    {12314, "BALEIA", 7.546},
    {12345, "JACARÉ", 99},
    {45345, "PENGUIM" , 99},
    {12346, "SALMÃO" , 99}
    };

    sort(turma,turma+NA,ordena);

    for(int i = 0; i<NA ; i++){
        cout << "matr: " << turma[i].matricula << ", ";
        cout << "nome: " << turma[i].nome << ", ";
        cout << "nota: " << turma[i].nota << ", ";
        cout << endl;
    }

    return 0;
}