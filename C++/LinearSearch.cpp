#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int Search){
    
    for(int i=0;i<size;i++){
        if(Search==arr[i]){
            return i;
        }
}
return -1;
}


int main(){

    int size;
    int key;


    cout<<"\nEnter Size of array : ";
    cin>>size;
    int arr[size];

    cout<<"\nEnter the elements of array : ";
        for(int i = 0 ; i < size ; i++){
            cin>>arr[i];
        }


    cout<<"\nEnter Element fo Find : ";
    cin>>key;

    int Result=linearSearch(arr,size, key);

    if(Result>=0){
        cout<<"\nElement "<<key<<" found at Index "<<Result;
    }
    else{
        cout<<"\nElement Not Present";
    }


    return 0;
}