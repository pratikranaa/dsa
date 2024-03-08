#include <iostream>

using namespace std;

void selectionSort(int arr[], int n){
    int min_i;
    int temp;
        for(int i = 0; i<n-1; i++){
            min_i = i;
            for(int j = i+1; j <n; j++){
                if(arr[j]<arr[min_i]){
                    min_i = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[min_i];
            arr[min_i] = temp;
        }
}


int main(){

    int arr[6] = {1,5,7,-1,4,8};

    selectionSort(arr,6);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << endl;
    }
}