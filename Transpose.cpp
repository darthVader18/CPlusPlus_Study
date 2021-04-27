/*
Problem-
Given a square matrix A & its number of rows (or column) N, return the transpose of A. The transpose of a matrix is the
matrix flipped over its main diagonal, switching the row and column indexes of the matrix
*/

#include "bits/stdc++.h"
using namespace std;

int main() {
    // int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>A[i][j];
        }
    }

    cout<<"Matrix is:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<m; j++) {
            //swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    //print
    cout<<"Transpose is:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

