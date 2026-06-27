class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        vector<pair<int, int>> vec;
        for (int i = 0; i < nums.size(); i++) {
            vec.push_back({nums[i], i});
    
        sort(vec.begin(), vec.end());

        int s = 0, e = vec.size() - 1;
        
        while (s < e) {
            int current_sum = vec[s].first + vec[e].first;
            
            if (current_sum == target) { 
                
                return {vec[s].second, vec[e].second};
            }
            else if (current_sum < target) {
                s++;
            }
            else {
                e--;
            }
        }}
        return {};

    }
};