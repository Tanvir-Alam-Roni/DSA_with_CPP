// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void swap(int arr[], int a, int b);
void insertionSort(int arr[], int len);

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    insertionSort(arr, len);
    
    for(int i=0; i<len; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int len) {
    for(int i=0; i<len; i++) {
        for(int j=i; j>0; j--) {    // i= 2,  arr = 4, 5, 3 -> arr = 4, 3, 5
            if(arr[j-1] > arr[j]) {
                swap(arr, j, j-1);
            }
        }
    }
}

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
