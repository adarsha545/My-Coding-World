#include <iostream>
#include <fstream>
using namespace std;
int n;
int gra[20][20];
int visited[20] = {0};
void readgraph()
{
    fstream input;
    input.open("graph.txt", ios::in);
    if (!input)
    {
        cout << "Something wenr wrong!!" << endl;
    }
    input >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            input >> gra[i][j];
        }
    }
    input.close();
}

void DFS(int sv)
{
    cout << char(65 + sv) << " ";
    visited[sv] = 1;
    for (int i = 0; i < n; i++)
    {
        if (gra[sv][i] && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    // cin >> n;
    cout << "Matrix is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << gra[i][j] << " ";
        }
        cout << endl;
    }
    DFS(0);
    return 0;
}
