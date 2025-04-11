# Grafos_Exam

Nombre completo: Jhonmar Morales

C.I.: 31.607.934

Materia: Estructura Dinámica de Datos

Sección: "A"

Descripción del Problema:

Se desarrolla un sistema para representar rutas entre ciudades utilizando un grafo no dirigido. Cada ciudad es un nodo y cada ruta directa entre ciudades es una arista. El objetivo es encontrar un camino entre dos ciudades, si es posible, usando estructuras dinámicas de datos.


Justificación del Uso de Grafos:


El uso de grafos permite representar relaciones entre múltiples nodos (en este caso, ciudades) de forma flexible y eficiente. Al ser un grafo no dirigido, se asume que si se puede viajar de una ciudad a otra, también se puede regresar.



❓Por qué usar un grafo❓ 

La estructura de grafo es ideal para este problema porque:

-Nodos: Cada ciudad se representa como un nodo en el grafo (A, B, C, D, etc.)

-Aristas no dirigidas: Las carreteras son conexiones bidireccionales entre ciudades

-Flexibilidad: Permite modelar conexiones directas e indirectas entre nodos

-Eficiencia: Algoritmos como BFS o DFS pueden recorrer el grafo para encontrar caminos óptimos

-Estructuras Dinámicas Utilizadas

✔️unordered_map: para asociar cada nodo con su lista de vecinos.

✔️vector: para almacenar dinámicamente los nodos conectados.

✔️queue: utilizada para recorrer el grafo por niveles.

✔️unordered_set: para llevar un control de nodos visitados.

Implementación

Se implementó una clase Grafo que permite:

-Agregar aristas (conexiones entre nodos).

Buscar un camino entre dos nodos mediante un recorrido

-Clase Grafo: Contiene la lógica para representar las conexiones entre nodos y buscar caminos entre ellos. Se mantuvo modular para facilitar su reutilización.

-main.cpp: Crea un grafo de ejemplo, lo modifica dinámicamente, y muestra el resultado de la búsqueda de caminos.

*Resultado Esperado:

Al ejecutar el programa, debe imprimirse un camino posible entre la ciudad A y la ciudad D. Por ejemplo:

-Camino desde A hasta D: A C D

Esto demuestra que el grafo se construyó correctamente y que la lógica de recorrido funciona.

❓Cómo Ejecutar❓

Abrir el proyecto en Visual Studio Code.

Compilar con g++ main.cpp grafo.cpp -o programa

Ejecutar: ./programa




