#include <iostream>

using namespace std;

void bubble(int arr[], int n){
    for(int k = 1; k < n-1; k++){
        int flag = 0;
        for(int i = 0; i < n-k-1; i++ ){
            if (arr[i]> arr[i+1]){
                swap(arr[i],arr[i+1]);
                flag = 1;
            }
        }
        if (flag == 0)
        break;
    }

}

int main(){
    
    int arr[6] = {1,5,7,-1,4,8};
    bubble(arr, 6);

    for(int i = 0; i< 6-1; i++)
    cout << arr[i] << endl;
}