#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter element : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int p=1;
    for(int i=0;i<5;i++){
        p*=arr[i];
    }
    cout<<"Product of all element : "<<p<<endl;
}