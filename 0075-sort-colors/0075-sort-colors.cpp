class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noo=0,noc=0;
        int nott=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)noo++;
            else if(nums[i]==1)noc++;
            if(nums[i]==2)nott++;
        }
        for(int i=0;i<nums.size();i++){
            if(noo>i)nums[i]=0;
            else if((noo+noc)>i)nums[i]=1;
            else nums[i]=2;
        }
    }
};