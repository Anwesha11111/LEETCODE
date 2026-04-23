class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0) return -1;
        int rem=0;
        int count;
       for(int len=1;len<=k;len++){
            rem=(rem*10+1)%k;
            count++;
            if(rem==0)
            return len;;
        }
        return -1;;
    }
};