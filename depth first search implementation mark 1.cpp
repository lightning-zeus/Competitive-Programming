#include <bits/stdc++.h>

using namespace std;

class Graph{
    int V; //no of vertices
    vector<int> *adj; //pointer to a vector of linked lists
    void DFSU(int V, bool visisted[]); //function for depth first search with a bool visisted array to keep track of visisted nodes
    public:
    Graph(int V);
    void addedge(int v, int w); //add a node from v to w and vice versa in a unidrected graph
    void DFS(); // print the traversal
};
Graph::Graph(int V){
    this->V = V;
    adj = new vector<int>[V];
}
// 2-D vector to store the linked list as a vector as it is more cache friendly
void Graph::addedge(int v,int w){
    adj[v].push_back(w);
    adj[w].push_back(v);
}
void Graph::DFSU(int v, bool visited[]){
    // mark the current node as visited and print it
    visited[v] = true;
    cout<< v << " ";
   
   //visit the nodes adjacent to the current node
   vector<int>::iterator it;
   for(it = adj[v].begin();it!=adj[v].end();it++){
       if(!visited[*it])
         DFSU(*it, visited);
          
   }

}
//function to do the depth first search that implements the recursive DFSU

void Graph::DFS(){
    bool *visited = new bool[V];
    for(int i =0;i<V;i++){
        visited[i] = false;
    }

    for(int i =0;i<V;i++){
        if(visited[i]==false)
           DFSU(i,visited);
    }
}

int main(){
    int n; //no of vertices
    cin>>n;
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0, 2); 
    g.addedge(1, 2); 
    g.addedge(2, 0); 
    g.addedge(2, 3); 
    g.addedge(3, 3); 
     g.DFS();
 


    }