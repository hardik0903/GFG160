#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int missingNumber(vector<int> arr, int k){
    int n=arr.size();
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);
        
        if(missing<k){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return k+low;
}

int main(){

    vector<int> arr={2,3,4,7,11};
    int ans=missingNumber(arr,5);
    cout<<"Calculated Answer is: "<<ans<<" Whereas Real Answer is: 9";
return 0;
}