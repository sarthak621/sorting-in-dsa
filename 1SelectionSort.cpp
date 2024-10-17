// array: 10 1 4 8 5 7

//selection sort 
// har round me ith position par sabse smallest value dalo

#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    
    vector<int>arr{10,1,4,8,5,7};
    int n= arr.size();

    for(int i=0;i<n-1;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            
        }
        swap(arr[minIndex],arr[i]);
    }

    //print array
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}