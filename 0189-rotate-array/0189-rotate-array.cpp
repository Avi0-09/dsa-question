class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size()-1;
        if(k>n)k=k%(n+1);
        
        reverse(0,n-k,nums);
        reverse(n-k+1,n,nums);
        reverse(0,n ,nums);
    }
    void reverse(int a,int b,vector<int>& nums){
            while(a<=b){
                int temp=nums[a];
                nums[a]=nums[b];
                nums[b]=temp;
                a++;
                b--;
            }


        }
};