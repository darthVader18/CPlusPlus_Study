/*
Sub array is the continuous part of an array.
Number of sub arrays of an array with n elements = nC2 + n = n*(n+1)/2.

A subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the
order of the remaining elements.
Number of subsequence of an array with n elements = 2^n.

Every sub array is a subsequence but every subsequence is not a sub array.
*/

// Given an array a[] of size n. Output sum of each sub array of the given array.

/*

#include<iostream>
using namespace std;

int main() {
    int mx = -19999999;
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0; i<n; i++) {
        mx = max(mx, a[i]);
        cout<<mx<<endl;
    }

    return 0;
}

*/

#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int curr = 0;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n-1; j++) {
            curr += a[j];
            cout<<curr<<endl;
        }
    }

    return 0;
}
