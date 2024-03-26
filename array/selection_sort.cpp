// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selectionSort(int arr[], int len);
void swap(int arr[], int a, int b);

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr, len);
    
    for(int i=0; i<len; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int len) {
    for(int i=0; i<len-1; i++) {
        int min_idx = i;
        for(int j=i+1; j<len; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
