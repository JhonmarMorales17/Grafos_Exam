#include <iostream>
#include "grafo.h"

using namespace std;

int main() {
    Grafo grafo;
    grafo.agregarArista("A", "B");
    grafo.agregarArista("B", "C");
    grafo.agregarArista("A", "C");
    grafo.agregarArista("C", "D");

    string inicio = "A", fin = "D";
    vector<string> camino = grafo.buscarCamino(inicio, fin);

    if (camino.empty()) {
        cout << "No se encontro un camino entre " << inicio << " y " << fin << "." << endl;
    } else {
        cout << "Camino desde " << inicio << " hasta " << fin << ": ";
        for (const auto& ciudad : camino) {
            cout << ciudad << " ";
        }
        cout << endl;
    }

    return 0;
}
