#include<iostream>
using namespace std;

int main(){

    int arr[5]={5,4,3,2,1};
    
    int curr_min, profit=INT32_MIN, curr_profit=0, min=INT32_MAX;

    for(int i=0;i<5;i++){
        curr_min=arr[i];
        if(curr_min<min){
            min=curr_min;
        }
        curr_profit=arr[i+1]-min;
        if(curr_profit>profit){
            profit=curr_profit;
        }
    }

    cout<<profit;
    return 0;
}