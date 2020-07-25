Class Solution{
public:
  vector<int>twoSum(vector<int>&nums, int target){
    vector<int> res;
    int l=0;
    int r=nums.size()-1;
    int n=nums.size();
    map<int, int> mp;
    for(int i=0;i<n;i++){
      if(mp.find(nums[i])!=mp.end()){
        res.push_back(mp[i]);
        res.push_back(i);
        return res;
      }
      else
        mp[target-nums[i]]=i;
    }
    return {0, 0};
  }
};
