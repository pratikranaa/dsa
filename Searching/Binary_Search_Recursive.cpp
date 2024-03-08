#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector <int> v, int x, int start, int end){

    if (start > end){
        return -1;
    }
    int mid = start + (end - start)/2;
    if (x == v[mid]){
        return mid;
    } else if (x < v[mid]){
        end = mid - 1;
        return BinarySearch(v, x, start, end);
    } else {
        start = mid + 1; 
        return BinarySearch(v, x, start, end);
    }
}

int main(){
    vector <int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = v.size();
    int start = 0;
    int end = n-1;
    int x;
    cout << "Enter the number you want to search: ";
    cin >> x;
    if (BinarySearch(v, x, start, end) == -1){
        cout << "Number "<< x << " is not in the array" << endl;
        return 0;
    }
    cout << "Number "<< x << " is at index " << BinarySearch(v, x, start, end) << " in the array" << endl;
    return 0;
}