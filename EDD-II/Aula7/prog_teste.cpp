#include <iostream>
#include "graph.cpp"

using namespace std;

int main() {
    graph::diagraph g;
    g.insert_node("A");
    g.insert_node("B");
    g.insert_node("C");
    g.insert_node("D");
    g.insert_node("E");
    g.insert_node("F");
    g.insert_node("G");

    if(g.find_node("A") != nullptr){
        cout << "Nodo A encontrado!" << endl;
    } else {
        cout << "Nodo A nao encontrado!" << endl;
    }
}