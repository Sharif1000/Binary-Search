#include <bits/stdc++.h>
using namespace std;


int search(vector<int>& nums, int target) {
        // Set the left and right boundaries
        int left = 0, right = int(nums.size()) - 1;
        
        // Under this condition
        while (left <= right) {
            // Get the middle index and the middle value.
            int mid = left + (right - left) / 2;
            
            // Case 1, return the middle index.
            if (nums[mid] == target) {
                return mid;
            } 
            // Case 2, discard the smaller half.
            else if (nums[mid] < target) {
                left = mid + 1;   
            } 
            // Case 3, discard the larger half.
            else {
                right = mid - 1;
            }
        }
        
        // If we finish the search without finding target, return -1.
        return -1;
    }
    
    
    int searchup(vector<int>& nums, int target) {
        // Set the left and right boundaries
        int left = 0, right = int(nums.size());
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }


int mySqrt(int x) {
        if(x==0)
            return 0;
        int lo=1,high=x,res;
        uint64_t mid;
        while(lo<=high)
        {
            mid=lo+(high-lo)/2;
            if(mid*mid<=x)
            {
                lo=mid+1;
                res=mid;
            }
            else
                high=mid-1;
        }
        return res;
    }

int main(){
  int t; cin>>t;
  while(t--){
    int n, tar; cin>>n>>tar;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    // int idx = searchup(v, tar);
    // cout<<idx;
    int idx = lower_bound(v.begin(), v.end(), tar) - v.begin();
    cout<<idx;
  }
  return 0;
}
