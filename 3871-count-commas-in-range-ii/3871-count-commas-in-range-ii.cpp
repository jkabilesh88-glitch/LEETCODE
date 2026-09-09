class Solution {
public:
    long long countCommas(long long n) {
        long long c=0;
        for(long long i=1000;i<=n;i*=1000)
        {
            c+=n-i+1;
        }
        return c;
    }
};