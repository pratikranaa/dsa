#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right){ 
    int i,j,k;
    k = left;
    int const nL = mid - left + 1;
    int const nR = right - mid;
    int L[nL];
    int R[nR];

    for (int i = 0; i<nL; i++){
        L[i] = arr[left + i];
    }
    for (int i = 0; i <nR; i++){
        R[i] = arr[mid + 1 + i];
    }
    
    i = j = 0;

    while(i<nL && j<nR){
        if (L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i<nL){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j<nR){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int begin, int end){
    if (begin >= end){
        return;
    }
    int n = (end + begin)/2;
    int mid = n;

    mergeSort(arr, begin, mid );
    mergeSort(arr, mid+1, end);
    merge(arr, begin, mid, end);

}

int main(){
    
    int arr[6] = {1, 5, 7, -1, 4, 8};
    mergeSort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
        cout << arr[i] << endl;

    return 0;
}