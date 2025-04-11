#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <string>

using namespace std;

class Grafo {
public:
    void agregarArista(const string& desde, const string& hacia);
    vector<string> buscarCamino(const string& inicio, const string& fin);

private:
    unordered_map<string, vector<string>> adyacentes;
};

#endif
