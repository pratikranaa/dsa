#include <iostream>

void updateArray(int array[], int size);
void printArray(int array[], int size);
int getMin(int array[], int size);
int getMax(int array[], int size);

using namespace std;



int main(){

    int number[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 
                      10, 11, 12, 13, 14, 15};

    printArray(number, 15);
    cout << "Min : " << getMin(number, 15) << endl;
    cout << "Max : " << getMax(number, 15) << endl;

    updateArray(number, 15);

    cout <<endl << "Everything is Fine" <<endl << endl;

    return 0;
}


void updateArray(int array[], int size){

    cout << '\n' << "Updating the Array" << '\n' << '\n';

    printArray(array, size);




    cout << '\n' << "Going back to Main" << '\n' << '\n';

}

void printArray(int array[], int size){

    cout << endl << "Printing the Array" << endl << endl;

    for (int i = 0; i < size; i++){
        cout << array[i] << endl;
    }

    cout << endl;
}

int getMin(int array[], int size){

    int min = INT32_MAX;

    for (int i = 0; i < size; i++){
        if(array[i] < min)
            min = array[i];
    }

    return min;

}

int getMax(int array[], int size){

    int max = INT32_MIN;

    for (int i = 0; i < size; i++){
        if(array[i] > max)
            max = array[i];
    }

    return max;

}