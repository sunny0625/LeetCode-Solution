class Solution {
public:
    int subtractProductAndSum(int n) {
        int prd = 1, sum = 0;
        while(n!=0)
        {
            int digit = n%10;
            prd = prd * digit;
            sum = sum + digit;
            n = n/10;
        }
        int ans = prd - sum;
        return ans;
    }
};