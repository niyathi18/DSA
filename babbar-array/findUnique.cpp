#include<iostream>
using namespace std;

int getUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

int arr[]={1,1,5,6,6,5,7};
int n=7;
int finalAns=getUnique(arr,n);
cout<<"final answer is : "<<finalAns<<endl;
    return 0;
}