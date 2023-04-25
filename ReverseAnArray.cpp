#include<iostream>
using namespace std;
int main()
{   

    int size;
    cout<<"How many elements do you want in your array: ";
    cin>>size;
    int arr[100];

    cout<<"Enter the ELements of the array: "<<endl;
    for( int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Printing Normal array: "<<endl;
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Reversed array: "<<endl;
    for(int i = size - 1 ; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
