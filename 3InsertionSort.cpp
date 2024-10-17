// INSERTION SORT 

// EK EK ELEMENT KO PAKDO OR USKO USKI SAHI POSITION PAR PLACE KARO

/// STEPS
///////  a)fetch the value
     //  b) compare the value 
     //  c)shifting of value 
     //  d)copy of value 


#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    vector<int>arr{10,1,4,8,5,7};
    int n= arr.size();

    for(int i=1;i<=n;i++){
        //fetch the value
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            //compare the value
            if(arr[j]>temp){
                //shifting of value
                arr[j+1]=arr[j];
            }

            else{
                break;
            }
        }

        // copy the value
        arr[j+1]=temp;         // last updated value of j
    }

    
    //print the array
      for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}








