#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"\nEnter the size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"\nEnter the elements of the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int great = arr[0];
    for(int i=0; i<size; i++){
        if(great < arr[i]){
            great = arr[i];
        }
    } 
    cout<<"Greatest no. among the array is : "<<great<<endl;
    return 0;
}