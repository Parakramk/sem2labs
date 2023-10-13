/*1. Program to represent the graph using adjacency matrix.*/
#include <iostream>
using namespace std;
void readgraph(int adjmat[50][50], int n) {
    char reply;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                adjmat[i][j] = 0;
                continue;
            }
            cout << "Vertices " << i << " and " << j << " are adjacent?(Y/N): ";
            cin >> reply;
            if (reply == 'y' || reply == 'Y')
                adjmat[i][j] = 1;
            else
                adjmat[i][j] = 0;
        }
    }
    cout << "The matrix elements are " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << adjmat[i][j] << "\t";
        }
        cout << endl;
    }
}

void undirgraph() {
    int adjmat[50][50];
    int n, deg;
    cout << "Enter the number of vertices: ";
    cin >> n;
    readgraph(adjmat, n);
    cout << "Vertex\tDegree" << endl;
    for (int i = 1; i <= n; i++) {
        deg = 0;
        for (int j = 1; j <= n; j++) {
            if (adjmat[i][j] == 1)
                deg++;
        }
        cout << i << "\t" << deg << endl;
    }
}

int main() {
    undirgraph();
    return 0;
}

/*
OUTPUT:
Enter the number of vertices: 4
Vertices 1 and 2 are adjacent?(Y/N): Y
Vertices 1 and 3 are adjacent?(Y/N): Y
Vertices 1 and 4 are adjacent?(Y/N): N
Vertices 2 and 1 are adjacent?(Y/N): Y
Vertices 2 and 3 are adjacent?(Y/N): Y
Vertices 2 and 4 are adjacent?(Y/N): N
Vertices 3 and 1 are adjacent?(Y/N): Y
Vertices 3 and 2 are adjacent?(Y/N): Y
Vertices 3 and 4 are adjacent?(Y/N): Y
Vertices 4 and 1 are adjacent?(Y/N): N
Vertices 4 and 2 are adjacent?(Y/N): N
Vertices 4 and 3 are adjacent?(Y/N): Y
The matrix elements are
0       1       1       0
1       0       1       0
1       1       0       1
0       0       1       0
Vertex  Degree
1       2
2       2
3       3
4       1
*/