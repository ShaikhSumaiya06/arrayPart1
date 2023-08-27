#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter element : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int max1=INT_MIN , max2=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        } 
        else if(arr[i]>max2 && arr[i]!=max1) max2=arr[i];
    }
    if(max2==INT_MIN) cout<<"There is no second largest element in this array .";
    cout<<"Second Largest Element : "<<max2<<endl;
}