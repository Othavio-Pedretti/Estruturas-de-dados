#include <iostream>

using namespace std;


struct aluno{
    int matricula;
    string nome;
    float nota;
};

int main(){
    aluno fulano,ciclano;
    // fulano.matricula = 901921;
    // fulano.nome = "joão carlos";
    // fulano.nota = 9.7;
    fulano = (9090909, "joão carlos" , 9.7);

    cout << "nome : " << fulano.nome << endl;
    cout << "matr. : " << fulano.matricula << endl;
    cout << "nota : " << fulano.nota << endl;

    return 0;
}