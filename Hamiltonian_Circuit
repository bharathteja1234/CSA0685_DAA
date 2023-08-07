#include <stdio.h>
#include <stdbool.h>
#define V 10 

bool isSafe(int v, int graph[V][V], int path[], int pos, int numVertices) {
    if (!graph[path[pos - 1]][v]) {
        return false; 
    }

    for (int i = 0; i < pos; i++) {
        if (path[i] == v) {
            return false; 
        }
    }

    return true;
}

bool hamiltonianCircuitUtil(int graph[V][V], int path[], int pos, int numVertices) {
    if (pos == numVertices) {
        if (graph[path[pos - 1]][path[0]]) {
            return true; 
        }
        return false; 
    }

    for (int v = 1; v < numVertices; v++) {
        if (isSafe(v, graph, path, pos, numVertices)) {
            path[pos] = v;

            if (hamiltonianCircuitUtil(graph, path, pos + 1, numVertices)) {
                return true; 
            }

            path[pos] = -1; 
        }
    }

    return false;
}

bool hamiltonianCircuit(int graph[V][V], int numVertices) {
    int path[V];
    for (int i = 0; i < V; i++) {
        path[i] = -1; 
    }
    path[0] = 0; 

    if (!hamiltonianCircuitUtil(graph, path, 1, numVertices)) {
        return false;
    }

    printf("Hamiltonian Circuit: ");
    for (int i = 0; i < numVertices; i++) {
        printf("%d ", path[i]);
    }
    printf("%d\n", path[0]);

    return true;
}

int main() {
    int numVertices;

    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    int graph[V][V];
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    if (!hamiltonianCircuit(graph, numVertices)) {
        printf("No Hamiltonian circuit found.\n");
    }

    return 0;
}
