#include <iostream>
using namespace std;

void bubbleSort(int arr[], int len);
void swap(int arr[], int a, int b);

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, len);
    
    for(int i=0; i<len; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int len) {
    for(int i=0; i<len-1; i++) {
        for(int j=0; j<len-i-1; j++) {
            if(arr[j+1] < arr[j]) {
                swap(arr, j, j+1);
            }
        }
    }
}

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
