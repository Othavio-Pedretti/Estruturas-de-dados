#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <string>

using std::cout, std::cin, std::endl;

namespace graph {

    class diagraph {
        private:
        //nodos do grafo - vertices
            struct node
            {
                std::string value; // valor
                std::vector<node*> links; // lista de ponteiros para os nós de ligações
            };
            // tabela hash que mapea o valor do nodo para o ponteiro do nodo
            std::unordered_map<std::string, node*> nodes;
            public:
            // função para inserir um nodo
            void insert_node(const std::string& s){
                node* aux = new node();
                aux->value = s;
                nodes[s] = aux;
            }

            size_t size(){
                return nodes.size();
            }

            node* find(const std::string& s){
                auto it = nodes.find(s);
                return it == nodes.end() ? nullptr : it->second;
            }

            bool insert_link( const std::string& from, const std::string& to){
                node* pfrom = find(from);
                node* pto = find(to);
                if(pfrom == nullptr || pto == nullptr) return false;
                pfrom->links.push_back(pto);
                return true;
            }
            void export2dot(const std::string &filename){
                std::ofstream dot(filename);
                dot << "digraph {\n";
                for(auto nd : nodes){ // percorre todos os nodos
                    dot << "\t" << nd.first; // escreve o rotulo do nodo a chave
                    if(nd.second->links.size() > 0){
                        dot << " -> {";
                        for(auto vizinho : nd.second->links){
                            dot << vizinho->value;
                        }
                        dot << "} [color=blue]"; // fecha chaves dos vizinhos
                    }
                    dot << ";\n";
                }
                dot << "}\n"; // fecha chaves do diagraph
            }
            void draw(){
                export2dot("graphED02.dot");
                std::system("dot -Tx11 graphED02.dot");
            }
            size_t outdegree(const std::string s){
                node p = find(s);
                if (p != nullptr)return p->second->links.size();
            }
            size_t indegree(const std::string& s){
                size_t contador;
                for(auto aresta : nodes){
                    for(auto nodo : aresta.second->links){
                        if(nodo->value == s)contador++;
                    }
                }
                return contador;
            }
            size_t degree(const std::string& s){
                return indegree(s) + outdegree(s);
            }
    };
}