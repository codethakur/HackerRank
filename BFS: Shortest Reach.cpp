#include<iostream>
#include<list>

using namespace std;

class Graph{
    int V;
    list<int> *adj;
    int *d;
    public:
    Graph(int n);
    void addEdge(int u, int v);
    void BFS(int s);
    void printDist();
};

Graph::Graph(int n){
    V = n;
    adj = new list<int>[n+1];
    d = new int[V+1];
    for(int i=1;i<=V;i++)
        d[i] = -1;
}

void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::BFS(int s){
    d[s]=0;
    bool visited[V+1];
    for(int i=1;i<=V;i++)
        visited[i] = false;
    list <int> q;
    visited[s] = true;
    q.push_back(s);
    list <int>::iterator i;
    while(!q.empty()){
        s=q.front();
        q.pop_front();
        for(i=adj[s].begin();i!=adj[s].end();++i){
            if(!visited[*i]){
                visited[*i] = true;
                q.push_back(*i);
                d[*i]=d[s]+6;
            }
        }
    }
    
}

void Graph::printDist(){
    for(int i=1;i<=V;i++){
      if(d[i]!=0)
        cout<<d[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q-->0){
        int n,m;
        cin>>n>>m;
        Graph g(n);
        int u,v;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            g.addEdge(u,v);
        }
        int s;
        cin>>s;
        g.BFS(s);
        g.printDist();
        g.~Graph();
    }   
    return 0;
}
