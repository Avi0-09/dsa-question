class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while(n>0){
            int c=n%10;
            p=p*c;
            s=s+c;
            n=n/10;
        }
        return p-s;
    }   
};