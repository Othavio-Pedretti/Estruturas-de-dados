#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nomeArquivo;
    long long contagem[256] = {0}; 
    char ch;

    cout << "Digite o nome do arquivo de entrada: ";
    cin >> nomeArquivo;

    ifstream arqEntrada(nomeArquivo);
    if (!arqEntrada) {
        cout << "Erro: O arquivo '" << nomeArquivo << "' nao foi encontrado." << endl;
        return 1;
    }

    // 3. Lê o arquivo e conta cada caractere
    while (arqEntrada.get(ch)) {
        // Transformamos o caractere em um número (0-255) para usar como índice do array
        int indice = (int)ch;
        contagem[indice]++;
    }
    arqEntrada.close();

    // 4. Cria o arquivo CSV de saída
    ofstream arqSaida("contagem_caracteres.csv");

    // Escreve o cabeçalho
    arqSaida << "Caractere,Contagem" << endl;

    // 5. Percorre o array e salva no CSV apenas os caracteres que apareceram
    for (int i = 0; i < 256; i++) {
        if (contagem[i] > 0) {
            char atual = (char)i;

            if (atual == '\n') arqSaida << "Quebra de Linha";
            else if (atual == ',') arqSaida << "Virgula";
            else if (atual == ' ') arqSaida << "Espaco";
            else arqSaida << atual;

            arqSaida << "," << contagem[i] << endl;
        }
    }

    arqSaida.close();
    cout << "Sucesso! Resultado salvo em 'contagem_caracteres.csv'." << endl;

    return 0;
}