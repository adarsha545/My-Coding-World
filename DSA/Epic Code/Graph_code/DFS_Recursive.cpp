#include <iostream>
#include <fstream>
using namespace std;

int visited[6] = {0};
void DFS_recursive(int sv, int graph[20][20])
{
    cout << char(sv + 65) << " ";
    visited[sv] = 1;
    for (int i = 0; i < 6; i++)
    {
        if (graph[sv][i] && visited[i] == 0)
        {
            DFS_recursive(i, graph);
        }
    }
}

int main()
{
    fstream infile;
    infile.open("graph.txt", ios::in);
    if (!infile)
    {
        cout << "OoPs!! Something went wrong" << endl;
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
    cout << "Matrix is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "DFS Traversal in Recursive way: ";
    DFS_recursive(0, graph);
    infile.close();
    return 0;
}