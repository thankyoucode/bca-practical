#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Queue {
    int size, f, r, * arr;
}QUEUE;

typedef struct Node {
    int v;
    struct Node* next;
}NODE;

typedef struct Graph {
    int size;
    NODE* adj;
}GRAPH;

GRAPH graph;
QUEUE q;

int isEmpty(QUEUE* queue) {
    if (queue->r == queue->f) { return 1; }
    return 0;
}

int isFull(QUEUE* queue) {
    if (queue->r == queue->size - 1) { return 1; }
    return 0;
}

void enqueue(QUEUE* queue, int val) {
    if (isFull(queue))
        printf("This Queue is full\n");
    else
        queue->arr[queue->r++] = val;
}

int dequeue(QUEUE* queue) {
    int delval = -1;
    if (isEmpty(queue))
        printf("This Queue is empty\n");
    else
        delval = queue->arr[queue->f++];
    return delval;
}

void add(int source, int destination) {
    NODE* node, * newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->v = -1;
    node = &graph.adj[source];
    for (; node->v != -1; node = node->next);
    node->v = destination;
    node->next = newnode;
}

void addEdge(int source, int destination) {
    add(source, destination);
    add(destination, source);
}

int bfs(int source, int destination) {
    bool vis[graph.size];
    int parent[graph.size];
    int neighbar, cur, distance = -1;
    NODE* node;

    for (int i = 0; i < graph.size; i++) {
        vis[i] = false;
    }

    enqueue(&q, source);
    parent[source] = -1;
    vis[source] = true;

    while (!isEmpty(&q)) {
        cur = dequeue(&q);
        if (cur == destination) break;
        for (node = &graph.adj[cur]; node->v != -1;node = node->next) {
            if (!vis[neighbar = node->v]) {
                enqueue(&q, neighbar);
                vis[neighbar] = true;
                parent[neighbar] = cur;
            }
        }
    }

    if (cur == destination) {
        cur = destination;
        distance = 0;
        while (parent[cur] != -1) {
            printf("%d -> ", cur);
            cur = parent[cur];
            distance++;
        }
        printf("%d", cur);
    }
    return distance;
}

bool dfsUtil(int source, int destination, bool vis[Graph.size]) {
    int neighbar, cur;
    NODE* node;
    if (source == destination) return true;

    for (node = &graph.adj[source]; node->v != -1;node = node->next) {
        if (!vis[neighbar = node->v]) {
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
    int v, e, source, destination;
    NODE* node;


    // Inilialising Queue (Array Implementation)
    printf("Enter number of vertices and edges \n");
    scanf("%d", &v);
    scanf("%d", &e);

    graph.size = v;
    graph.adj = (NODE*)malloc(graph.size * sizeof(NODE));

    for (int i = 0; i < v; i++) {
        graph.adj[i].v = -1;
    }

    q.size = v + 1;
    q.f = q.r = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));

    printf("Enter %d edges\n", e);
    for (int i = 0; i < e; i++) {
        scanf("%d", &source);
        scanf("%d", &destination);
        addEdge(source, destination);
    }

    for (int i = 0; i < v; i++) {
        printf("%d-> ", i);
        for (node = &graph.adj[i]; node->v != -1; node = node->next) {
            printf("%d\t", node->v);
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
Enter Source and Destination
0 4     */