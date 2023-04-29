#include <iostream>
using namespace std;
void print_graph(int graph[][20], int v)
{
    int i, j;
    cout << "        " << endl;
    for (int k = 0; k < v; k++)
    {

        cout << "   "
             << "(" << k + 1 << ")";
    }
    cout << "\n";

    for (i = 0; i < v; i++)
    {
        cout << " "
             << "(" << i + 1 << ")";
        for (j = 0; j < v; j++)
        {
            cout << "  " << graph[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    int v;
    cout << "Enter the number of vertex: " << endl;
    cin >> v;
    int graph[20][20];
    for (int i = 0; i < v; i++)
    {
        for (int j = i; j < v; j++)
        {
            if (i != j)
            {
                cout << "Enter 1 for edge b/w " << i + 1 << " and " << j + 1 << " otherwise 0 : ";
                cin >> graph[i][j];
                graph[j][i] = graph[i][j];
            }
            else
            {
                graph[i][j] = 0;
            }
        }
    }
    print_graph(graph, v);

    return 0;
}