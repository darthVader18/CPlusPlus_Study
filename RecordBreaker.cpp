/*
Problem:
Isyana is given the number of visitors at her local theme park for N consecutive days. The number of visitors on the
i-th day is Vi. A day is record breaking if it satisfy both of the following conditions:
1) The number of visitors on the day is strictly larger than the number of visitors in each of the previous days.
2) Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors
on the following day.
Note that every first day could be record breaking day!
Please help Isyana find out the number of record breaking days.

Input:
The first line of the input gives the number of test cases, T. T test cases follow. Each test cases begins with a line
containing the integer N. The second line contains N integer. The i-th integer is Vi.

Output:
For each test case, output one line containing Case #x.y, where x is the test case number (starting from 1) and y is
the number of record breaking days.
*/

#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n+1];
    a[n] = -1;

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    if(n==1) {
        cout<<"1"<<endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for(int i=0; i<n; i++) {
        if(a[i]>mx && a[i]>a[i+1]) {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout<<ans<<endl;

    return 0;
}
