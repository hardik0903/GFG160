// User function Template for C++

class Solution {
  public:
    
    bool cowsPlace(vector<int>& stalls,int dist, int k){
        int n=stalls.size();
        int cowsCnt=1;
        int last=stalls[0];
        
        for(int i=1;i<n;i++){
            if(stalls[i]-last>=dist){
                cowsCnt++;
                last=stalls[i];
            }
        }
        
        return (cowsCnt>=k);
    }

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(),stalls.end());
        int n=stalls.size();
        int low=1;
        int high=stalls[n-1];
        
        while(low<=high){
            int mid=(low+high)/2;
            
            if(cowsPlace(stalls,mid,k)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};