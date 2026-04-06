#include<iostream>
using namespace std;

int Binary_search(int arr[],int n,int target){
    int left=0,right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target) return mid;
        else if(arr[left]==target) return left;
        else if(arr[right]==target) return right;
        else if(target<arr[mid]) right=mid-1;
        else if(target>arr[mid]) left=mid+1;
    }
    return -1;
}

int main(){

    int arr[10]={10,68,100,333,500,1000,1200,3400,7000,10102};
    int x=Binary_search(arr,10,10102);
    cout<<x;


    return 0;
}