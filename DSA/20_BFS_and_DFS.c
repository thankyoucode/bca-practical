#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Queue {
    int size, next, previous, * arr;
}QUEUE;

typedef struct Node {
    int vertices;
    struct Node* next;
}NODE;

typedef struct Graph {
    int size;
    NODE* adj;
}GRAPH;

GRAPH graph;
QUEUE q;

int isEmpty(QUEUE* queue) {
    if (queue->previous == queue->next) { return 1; }
    return 0;
}

int isFull(QUEUE* queue) {
    if (queue->previous == queue->size - 1) { return 1; }
    return 0;
}

void enqueue(QUEUE* queue, int value) {
    if (isFull(queue))
        printf("This Queue is full\n");
    else
        queue->arr[queue->previous++] = value;
}

int dequeue(QUEUE* queue) {
    int delvalue = -1;
    if (isEmpty(queue))
        printf("This Queue is empty\n");
    else
        delvalue = queue->arr[queue->next++];
    return delvalue;
}

void add(int source, int destination) {
    NODE* node, * newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->vertices = -1;
    node = &graph.adj[source];
    for (; node->vertices != -1; node = node->next);
    node->vertices = destination;
    node->next = newnode;
}

void addEdge(int source, int destination) {
    add(source, destination);
    add(destination, source);
}

int bfs(int source, int destination) {
    bool vis[graph.size];
    int parent[graph.size];
    int neighbar, current, distance = -1;
    NODE* node;

    for (int i = 0; i < graph.size; i++) {
        vis[i] = false;
    }

    enqueue(&q, source);
    parent[source] = -1;
    vis[source] = true;

    while (!isEmpty(&q)) {
        current = dequeue(&q);
        if (current == destination) break;
        for (node = &graph.adj[current]; node->vertices != -1;node = node->next) {
            if (!vis[neighbar = node->vertices]) {
                enqueue(&q, neighbar);
                vis[neighbar] = true;
                parent[neighbar] = current;
            }
        }
    }

    if (current == destination) {
        current = destination;
        distance = 0;
        while (parent[current] != -1) {
            printf("%d -> ", current);
            current = parent[current];
            distance++;
        }
        printf("%d", current);
    }
    return distance;
}

bool dfsUtil(int source, int destination, bool vis[]) {
    int neighbar;
    NODE* node;
    if (source == destination) return true;

    for (node = &graph.adj[source]; node->vertices != -1;node = node->next) {
        neighbar = node->vertices;
        if (!vis[neighbar]) {
            vis[neighbar] = true;
            bool isConnected = dfsUtil(neighbar, destination, vis);
            if (isConnected) return true;
        }
    }
    return false;
}

bool dfs(int source, int destination) {
    bool vis[graph.size];
    for (int i = 0; i < graph.size; i++) {
        vis[i] = false;
    }
    vis[source] = true;
    return dfsUtil(source, destination, vis);
}



int main() {
    int vertices, edges, source, destination;
    NODE* node;


    // Inilialising Queue (Array Implementation)
    printf("Enter number of vertices and edges \n");
    scanf("%d", &vertices);
    scanf("%d", &edges);

    graph.size = vertices;
    graph.adj = (NODE*)malloc(graph.size * sizeof(NODE));

    for (int i = 0; i < vertices; i++) {
        graph.adj[i].vertices = -1;
    }

    q.size = vertices + 1;
    q.next = q.previous = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));

    printf("Enter %d edges\n", edges);
    for (int i = 0; i < edges; i++) {
        scanf("%d", &source);
        scanf("%d", &destination);
        addEdge(source, destination);
    }

    printf("\n");
    for (int i = 0; i < vertices; i++) {
        printf("%d-> ", i);
        for (node = &graph.adj[i]; node->vertices != -1; node = node->next) {
            printf("%d\t", node->vertices);
        }
        printf("\n");
    }

    printf("Enter Source and Destination\n");
    scanf("%d", &source);
    scanf("%d", &destination);

    printf("\npath step: %d\t", bfs(source, destination));
    // dfs(source, destination) ? printf("possible: Yes\npath step %d", bfs(source, destination)) : printf("possible: No\n");
    // if (dfs(source, destination)) {
    //     printf("possible: Yes\n");
    // }
    // else {
    //     printf("possible: No\n");
    // }
    return 0;
}

/*
Enter number of vertices and edges 
7 10
Enter 10 edges
0 1
0 2
0 3
1 2
1 3
2 3
2 4
3 4
4 5
4 6

0-> 1   2       3
1-> 0   2       3
2-> 0   1       3       4
3-> 0   1       2       4
4-> 2   3       5       6
5-> 4
6-> 4
Enter Source and Destination
0 4
4 -> 2 -> 0
path step: 2                        */
