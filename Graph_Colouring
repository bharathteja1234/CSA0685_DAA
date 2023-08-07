#include <stdio.h>
#include <stdbool.h>
#define V 10
bool isSafe(int v, int graph[V][V], int color[], int c) {
    for (int i = 0; i < V; i++) {
        if (graph[v][i] && color[i] == c) {
            return false;
        }
    }
    return true;
}

bool graphColoringUtil(int graph[V][V], int m, int color[], int v, int numVertices) {
    if (v == numVertices) {
        return true; 
    }

    for (int c = 1; c <= m; c++) {
        if (isSafe(v, graph, color, c)) {
            color[v] = c;

            if (graphColoringUtil(graph, m, color, v + 1, numVertices)) {
                return true; 
            }

            color[v] = 0; 
        }
    }

    return false;
}

bool graphColoring(int graph[V][V], int m, int numVertices) {
    int color[V];
    for (int i = 0; i < V; i++) {
        color[i] = 0; 
    }

    if (!graphColoringUtil(graph, m, color, 0, numVertices)) {
        return false;
    }

    printf("Vertex Coloring:\n");
    for (int i = 0; i < numVertices; i++) {
        printf("Vertex %d: Color %d\n", i, color[i]);
    }
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

    int m;
    printf("Enter the number of colors: ");
    scanf("%d", &m);

    if (graphColoring(graph, m, numVertices)) {
        printf("Graph can be colored with %d colors.\n", m);
    } else {
        printf("Graph cannot be colored with %d colors.\n", m);
    }

    return 0;
}
