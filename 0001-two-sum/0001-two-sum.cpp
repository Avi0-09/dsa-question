class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>vec;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            vec.push_back({nums[i],i});
        }
        sort(vec.begin(),vec.end());
        int s=0,e=vec.size()-1;
        while(s<e){
            int sum=vec[s].first+vec[e].first;
            if(sum==target){
             return result={vec[s].second,vec[e].second};
             }
            else if(sum<target){
                s++;
            }
            else{ 
                e--;
            }

        }
        return {};
    }
};