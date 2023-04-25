#include<iostream>
using namespace std;

int main()
{
    // Declaring Variables
    int size,sum = 0;

    // Taking input form user for Array Size
    cin>>size;

    // Declaring array 
    int arr[100];

    // Initializing Array by taking user input
    for(int i = 0; i < size ; i++){
        cin>> arr[i];
    }

    // Calculating Sum of Array using loop
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    // Printing sum
    cout<<"Sum is: " <<sum;
    return 0;
}
