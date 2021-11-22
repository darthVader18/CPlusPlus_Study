#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int array[], int size) {
    int *p1 = array;
    int *p2 = array + size - 1;
    while (p1 < p2) {
        swap(p1, p2);
        p1++;
        p2--;
    }
}

void print(int* array, int size) {
    int *len = array + size,
    *p = array;
    for (p = array; p < len; p++) {
         cout << *p << " ";
    }
}

int main() {
    int array[] = { 2, 4, -6, 5, 8, -1 };

    cout << "Before Reversing: ";
    print(array, 6);

    cout << "After Reversing: ";
    reverse(array, 6);
    print(array, 6);
    return 0;
}
