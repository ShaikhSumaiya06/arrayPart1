#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter element : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    bool flag=false; // means no dublication
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                flag=true;
                cout<<arr[i];
                break;
            }
            
        }
    }
    if(flag==false) cout<<"No duplicate ";
}