#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter element : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<5;i++){
        mini = min(mini,arr[i]);
        // if(arr[i]<min) min=arr[i];
    }
    cout<<"Minimum Element : "<<mini<<endl;
}