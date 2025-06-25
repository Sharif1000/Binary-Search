#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int target){
  int l = 0, r = v.size() - 1;
  while(l <= r){
    int mid = l + (r - l) / 2;
    if(v[mid] == target) return mid;
    else if(v[mid] < target) l = mid + 1;
    else r = mid - 1;
  }
  return -1;
}


int binarySearchlower(vector<int> v, int target){
  int l = 0, r = v.size() - 1;
  int ans = v.size();
  while(l <= r){
    int mid = l + (r - l) / 2;
    if(v[mid] >= target){
      ans = mid;
      r = mid - 1;
    }
    else l = mid + 1;
  }
  return ans;
}

int binarySearchupper(vector<int> v, int target){
  int l = 0, r = v.size() - 1;
  int ans = v.size();
  while(l <= r){
    int mid = l + (r - l) / 2;
    if(v[mid] > target){
      ans = mid;
      r = mid - 1;
    }
    else l = mid + 1;
  }
  return ans;
}

int sqrtBinarySearch(int n) {
    if (n == 0 || n == 1) return n;
    int low = 1, high = n, ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if ((long long)mid * mid <= n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}


int main(){
  int n, t; cin>>n>>t;
  vector<int>v(n);
  for(int i = 0; i < n; i++) cin>>v[i];
  int res = binarySearchupper(v, t);
  cout<<res;
  return 0;
}
