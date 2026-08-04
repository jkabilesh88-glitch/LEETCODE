class Solution {
public:
    long long sumAndMultiply(int n) {

        long long concatenated=0;
        long long sumOfDigits=0;
        long long place=1;
        while(n>0)
        {
            int digit=n%10;  //digit=4
            if (digit!=0)
            {
                sumOfDigits+=digit; //4+3+2+1=
                concatenated=digit*place+concatenated;
                place*=10;

            }
            n/=10;

        }
        return concatenated*sumOfDigits;

        
    }
};