#include <stdio.h>
#include <stdlib.h>
struct Edge {
    int source, destination, weight;
};

struct Graph {
    int numVertices, numEdges;
    struct Edge* edges;
};

struct Graph* createGraph(int numVertices, int numEdges) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->numEdges = numEdges;
    graph->edges = (struct Edge*)malloc(numEdges * sizeof(struct Edge));
    return graph;
}

int compareEdges(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

int findParent(int parent[], int vertex) {
    if (parent[vertex] == -1)
        return vertex;
    return findParent(parent, parent[vertex]);
}

void kruskalMST(struct Graph* graph) {
    int* parent = (int*)malloc(graph->numVertices * sizeof(int));
    for (int i = 0; i < graph->numVertices; i++)
        parent[i] = -1;

    qsort(graph->edges, graph->numEdges, sizeof(struct Edge), compareEdges);

    int mstWeight = 0;
    printf("Minimum Spanning Tree Edges:\n");
    for (int i = 0; i < graph->numEdges; i++) {
        int sourceParent = findParent(parent, graph->edges[i].source);
        int destParent = findParent(parent, graph->edges[i].destination);

        if (sourceParent != destParent) {
            printf("%d - %d : %d\n", graph->edges[i].source, graph->edges[i].destination, graph->edges[i].weight);
            mstWeight += graph->edges[i].weight;
            parent[sourceParent] = destParent;
        }
    }

    printf("Optimal Cost (Minimum Spanning Tree Weight): %d\n", mstWeight);

    free(parent);
}

int main() {
    int numVertices, numEdges;

    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &numVertices, &numEdges);

    struct Graph* graph = createGraph(numVertices, numEdges);

    printf("Enter the details of edges (source, destination, weight):\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d %d", &graph->edges[i].source, &graph->edges[i].destination, &graph->edges[i].weight);
    }

    kruskalMST(graph);

    free(graph->edges);
    free(graph);

    return 0;
}
