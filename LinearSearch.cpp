// C++ Program to find if a element is present in the given array or not using Linear Search.

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    
    // Searching for the element/key one by one in the array
    for(int i= 0; i < size; i++){

        if(key == arr[i])
        // If found the function will true
        return true;
    }

    // If not found then the function will return true
    return false;
}

int main()
{
    int arr[10] = {5, 7 ,-2, 10, 22, -2, 0, 5, 22, 1};

    // Inputting the element to find in the array
    int key;
    cout<<"Enter the Element/Key you want to search in the array: ";
    cin>>key;
    
    // Calling the search Function
    bool found = search(arr, 10, key);

    // Checking the bool value returned by the function and then output
    if(found){
        cout<<"Element "<<key<<" is present in the array.";
    }
    else{
        cout<<"Element "<<key<<" is not present in the array.";
    }

    return 0;
}
