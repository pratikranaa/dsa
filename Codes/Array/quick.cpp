#include <iostream>

using namespace std;

int Partition(int A[], int start, int end){
    int pivot = A[end];
    int pindex = start;
    for (int i = start; i<end; i++){
        if (A[i]<=pivot){
            swap(A[i], A[pindex]);
            pindex++;
        }
    }
    swap(A[pindex],A[end]);
    return pindex;
}

void quick(int A[], int start, int end){
    if (start < end){
        int pindex = Partition(A, start, end);
        quick(A,start, pindex-1);
        quick(A, pindex+1, end);
    }
}

int main(){

    int arr[6] = {1, 5, 7, -1, 3, 8};
    quick(arr, 0, 5);

    for (int i = 0; i < 6; i++)
        cout << arr[i] << endl;

    return 0;

}
