#include<iostream>

using namespace std;

int main() {
    int adjMat[100][100];
    int n, e, x, y;

    cin >> n >> e;
    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n; j++ ) {
            adjMat[i][j] = 0;
        }
    }
    for( int i = 0; i < e; i++ ) {
        cin >> x >> y;
        adjMat[x][y] = 1;
        adjMat[y][x] = 1;
    }

    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < n; j++ ) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    int h;
    cout<<"Enter adjancy nodes: ";
    cin>>h;
    for( int i = 0; i < n; i++ ) {
        //for( int j = 0; j < n; j++ ) {
            //cout << adjMat[i][j] << " ";
        //}
        //cout << endl;
        if(adjMat[h-1][i]==1)
            cout<<i+1<<" ";
    }

    return 0;
}
/*
5 7
0 1
0 4
1 2
1 3
3 2
4 1
4 3
*/
