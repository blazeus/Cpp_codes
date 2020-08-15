#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int *arr = new int[10];
    for(int i=0; i<10; i++) {
        arr[i] = rand()%100;
    }
    for (int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nAfter Insertion Sort" << endl;
    //Insertion Sort
    int key=0,i=0;
    for(int j=1; j<10; j++) {
        key = arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key) {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
    for (int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}