//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    
    //merging logic
    void merge(vector<int>& arr, int low, int mid, int high){
        vector<int>temp;
        
        int left=low;
        int right=mid+1;
        
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        //if any one of the left guy or riight guy get exhausted in that case add the remaining element
        
        while(left<=mid){
            temp.push_back(arr[left]);
                left++;
        }
        
        while(right<=high){
            temp.push_back(arr[right]);
                right++;
        }
        
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    
    
    
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        int low=l;
        int high=r;
        
        int mid=(l+r)/2;
        
        //base case
        if(l>=r) return; 
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        
        merge(arr,low,mid,high);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends