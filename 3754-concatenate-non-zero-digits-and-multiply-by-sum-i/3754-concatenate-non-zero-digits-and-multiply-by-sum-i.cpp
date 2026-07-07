class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> x;
        while(n>0)
        {
            x.push_back(n%10);
            n/=10;
        }
        reverse(x.begin(),x.end());

        long long num=0;
         long sum=0;
        for(int d:x){
            if(d!=0){
                num=num*10+d;
                sum+=d;
            }
        }
       return num*sum; 
        
    }
};