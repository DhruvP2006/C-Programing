#include <iostream>
#include <vector>
#include <climits>

using namespace std;

#define MAX 7

int minDistance(int dist[], bool visited[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < MAX; v++)
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }

    return min_index;
}

void djikstraClassic(int src, int cost[MAX][MAX]) {
    int dist[MAX];    
    bool visited[MAX]; 

    for (int i = 0; i < MAX; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    dist[src] = 0;

    for (int count = 0; count < MAX - 1; count++) {
        int u = minDistance(dist, visited);

        visited[u] = true;

        for (int v = 0; v < MAX; v++) {
            if (!visited[v] && cost[u][v] != 0 && dist[u] != INT_MAX 
                && dist[u] + cost[u][v] < dist[v]) {
                dist[v] = dist[u] + cost[u][v];
            }
        }
    }

    cout << "Vertex \t Distance from Source " << src << endl;
    for (int i = 0; i < MAX; i++) {
        cout << i << " \t\t " << (dist[i] == INT_MAX ? -1 : dist[i]) << endl;
    }
}

int main() {
    int cost[MAX][MAX] = {
        {0, 4, 1, 0, 0, 0, 0},
        {4, 0, 2, 2, 7, 0, 0},
        {1, 2, 0, 4, 0, 8, 4},
        {0, 2, 4, 0, 0, 3, 0},
        {0, 7, 0, 0, 0, 1, 0},
        {0, 0, 8, 3, 1, 0, 5},
        {0, 0, 4, 0, 0, 5, 0}
    };

    djikstraClassic(1, cost);

    return 0;
}