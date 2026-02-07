#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

#define MAX 7

typedef pair<int, int> pii;

void djikstraPQ(int src, int cost[MAX][MAX]) {
    vector<int> dist(MAX, INT_MAX);
    
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;

        for (int v = 0; v < MAX; v++) {
            if (cost[u][v] != 0) {
                int weight = cost[u][v];

                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
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

    djikstraPQ(1, cost);

    return 0;
}