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

    if(g.find("A") != nullptr){
        cout << "Nodo A encontrado!" << endl;
    } else {
        cout << "Nodo A nao encontrado!" << endl;
    }

    g.insert_link("A","B");
    g.insert_link("A","D");
    g.insert_link("C","D");
    g.insert_link("C","A");
    g.insert_link("E","C");
    g.insert_link("F","F");

    g.draw();

    cout << g.outdegree("C") << endl;
    cout << g.indegree("C") << endl;
    cout << g.degree("C") << endl;


    return 0;
}