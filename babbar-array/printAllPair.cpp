#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3};
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }

    return 0;
}