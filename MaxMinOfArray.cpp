#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MIN;

    for(int i = 0; i< size; i++){
        if( arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i = 0; i< size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin>>size;
    int arr[100];

    // taking Input for array
    for (int i = 0; i < size; i++){
        cin>> arr[i];
    }

   cout<< "Minimum element: " << getMin(arr, size)<< endl;
   cout<< "Maximum element: " << getMax(arr, size)<< endl;
    return 0;
}
