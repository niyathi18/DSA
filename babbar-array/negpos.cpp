#include<iostream>
using namespace std;
void negpos(int arr[],int n){
    int j=0;
    for(int index=0;index<n;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }

}

int main(){
    int arr[]={-5,3,-6,3,8,-2};
    int n=6;
    negpos(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}