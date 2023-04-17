#include <iostream>
using namespace std;

void print_graph(int &adj,int n, int &visited){
    cout<<n<<endl;
    visited[n];


}

int main()
{
    int v, e;
    cout << "Enter the number of Vertices: " << endl;
    cin >> v;
    cout << "Enter the number of Edges: " << endl;
    cin >> e;
    int adj[v][v];
    cout << "Enter edges:" << endl;
    for (int i = 0; i < e; i++)
    {
        int Fv, Sv;
        cin >> Fv >> Sv;
        adj[Fv][Sv] = 1;
        adj[Sv][Fv] = 1;
    }
    int visited[v] = {0};
    print_graph(adj,0,*visited);

    return 0;
}