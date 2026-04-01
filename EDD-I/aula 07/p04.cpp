//exemplo usando um vetor de structs
#include <iostream>

using namespace std;


struct aluno{
    int matricula;
    string nome;
    float nota;
};
const int NA = 4;
int main(){
   
    // declara um valor do tipo aluno e definimos seus valores
    aluno turma[NA] = {
    {12314, "BALEIA", 7.546},
    {12345, "JACARÉ", 99},
    {45345, "PENGUIM" , 12.89},
    {12346, "SALMÃO" , 56.9324123}
    };

    for(int i = 0; i<NA ; i++){
        cout << "matr: " << turma[i].matricula << ", ";
        cout << "nome: " << turma[i].nome << ", ";
        cout << "nota: " << turma[i].nota << ", " << endl;

    }

    return 0;
}