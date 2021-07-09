// Program to find Dijkstra's shortest path using
// priority_queue in STL
#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
  
// iPair ==> Integer Pair
typedef pair<int, int> iPair;

int n, m, q;
int *source;
int nextClc, total=0;
  
// To add an edge
void addEdge(vector <pair<int, int> > adj[], int u,
                                     int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}
   
  
// Prints shortest paths from src to all other vertices
void shortestPath(vector<pair<int,int> > adj[], int V, int src)
{
    int ever=0;
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // http://geeksquiz.com/implement-min-heap-using-stl/
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
  
    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<int> dist(V, INF);
    vector<int> tanda;
    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = 0;
  
    /* Looping till priority queue becomes empty (or all
    distances are not finalized) */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();
  
        // Get all adjacent of u. 
        for (auto x : adj[u])
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = x.first;
            int weight = x.second;
  
            // If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
                tanda.push_back(v);
            }
        }
    }
    cout<<"panjang tanda "<< tanda.size()<<endl;
    for(auto it: tanda)
    {
        if(it==nextClc && !ever)
        {
            total+=dist[it];
            cout<<"in :D ";
            ever=1;
        }
        cout<<dist[it]<<" ";
    }
    
    cout<<endl;
    
//    for(int i=0; i<dist.size(); i++)
//    {
//        
//    }
    
    // Print shortest distances stored in dist[]
    printf("Vertex Distance from Source\n");
    for (int i = 0; i < V; ++i)
    {
        printf("%d \t\t %d\n", i, dist[i]);
    }

//        printf("%d \t\t %d\n", i, dist[i]);
}
  
// Driver program to test methods of graph class
int main()
{
    cin >> n
        >> m
        >> q;
    int V = m;
    vector<iPair > adj[V];
  
    int node1, node2, weight;
    for(int i=0; i<m; i++)
    {
        cin >> node1
            >> node2
            >> weight;
        addEdge(adj, node1, node2, weight);
        cout<<i<<" ()() "<<endl;
    }
    // making above shown graph
//    addEdge(adj, 0, 1, 4);
//    addEdge(adj, 0, 7, 8);
//    addEdge(adj, 1, 2, 8);
//    addEdge(adj, 1, 7, 11);
//    addEdge(adj, 2, 3, 7);
//    addEdge(adj, 2, 8, 2);
//    addEdge(adj, 2, 5, 4);
//    addEdge(adj, 3, 4, 9);
////    addEdge(adj, 3, 5, 14);
////    addEdge(adj, 4, 5, 10);
//    addEdge(adj, 5, 6, 2);
//    addEdge(adj, 6, 7, 1);
//    addEdge(adj, 6, 8, 6);
//    addEdge(adj, 7, 8, 7);
  
//    shortestPath(adj, V, 5);

    if(q==1)
    {
        cout<<'0'<<endl;
    }
    else
    {
        source = new int[q];
        for(int i=0; i<q; i++)
            cin >> source[i];

        for(int i=0; i<q-1; i++)
        {
            cout << source[i]<<":D\n";
            nextClc=source[i+1];
            shortestPath(adj, V, source[i]);
        }
        cout<<"RESSS = "<<total<<endl;
    }
  
    return 0;
}