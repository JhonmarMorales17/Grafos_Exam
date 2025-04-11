#include "grafo.h"
#include <unordered_set>

using namespace std;

void Grafo::agregarArista(const string& desde, const string& hacia) {
    adyacentes[desde].push_back(hacia);
    adyacentes[hacia].push_back(desde); 
}

vector<string> Grafo::buscarCamino(const string& inicio, const string& fin) {
    unordered_map<string, string> anteriores;
    unordered_set<string> visitados;
    queue<string> cola;

    cola.push(inicio);
    visitados.insert(inicio);

    while (!cola.empty()) {
        string actual = cola.front();
        cola.pop();

        if (actual == fin) break;

        for (const auto& vecino : adyacentes[actual]) {
            if (visitados.find(vecino) == visitados.end()) {
                cola.push(vecino);
                visitados.insert(vecino);
                anteriores[vecino] = actual;
            }
        }
    }

    vector<string> camino;
    if (anteriores.find(fin) == anteriores.end()) return camino;

    for (string at = fin; at != ""; at = anteriores[at]) {
        camino.insert(camino.begin(), at);
        if (at == inicio) break;
    }

    return camino;
}
