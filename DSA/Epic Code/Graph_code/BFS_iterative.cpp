#include <iostream>
#include "Queue.cpp"
#include <fstream>
using namespace std;

Queue Q;

void BFS_iterative(int sv, int graph[20][20], int n)
{
    int visited[n] = {0};
    visited[sv] = 1;
    Q.Enqueue(sv);
    while (!Q.isEmpty())
    {
        int ele = Q.Dequeue();
        cout << char(ele + 65) << " ";
        for (int i = 0; i < n; i++)
        {
            if (graph[ele][i] == 1 && visited[i] == 0)
            {
                Q.Enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main()
{

    fstream infile;
    infile.open("graph.txt", ios::in);
    if (!infile)
    {
        cout << "Error!! File Not Found.." << endl;
        exit(1);
    }
    int n;
    infile >> n;
    int graph[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            infile >> graph[i][j];
        }
    }
    cout << endl;
    cout << "Matrix is :" << endl;
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << graph[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "\n";
    cout << "BFS Traversal is :" << endl;
    infile.close();
    BFS_iterative(0, graph, n);

    return 0;
}