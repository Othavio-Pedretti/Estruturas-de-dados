#include <iostream>


using namespace std;


struct aluno{
    int matricula;
    string nome;
    float nota;
};

int main(){
    aluno fulano,ciclano;
    fulano.matricula = 901921;
    fulano.nome = "joão carlos";
    fulano.nota = 9.7;

    cout << "nome : " << fulano.nome << endl;
    cout << "matr. : " << fulano.matricula << endl;
    cout << "nota : " << fulano.nota << endl;

    cout << "digite o nome e a pos a matricula : " << endl;
    getline(cin,ciclano.nome);
    cin >> ciclano.matricula;
    cin >> ciclano.nota;

    cout << "nome : " << ciclano.nome << endl;
    cout << "matr. : " << ciclano.matricula << endl;
    cout << "nota : " << ciclano.nota << endl;

    return 0;
}