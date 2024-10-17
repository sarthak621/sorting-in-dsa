// array: 10 1 4 8 5 7

//bubble sort 
// ith round me ith largest element ko uski sahi jagah par place karo

#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    
    vector<int>arr{10,1,4,8,5,7};
    int n= arr.size();

    for(int round=1;round<=n-1;round++){
        bool swapped=false;
        for(int comp=0;comp<=n-round-1;comp++){
            if(arr[comp]>arr[comp+1]){
                swapped=true;
                swap(arr[comp],arr[comp+1]);
            }
        }
        
        if(swapped==false){
            //swap ho chuka hai
            break;
        }
    }

    //print the array
      for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}