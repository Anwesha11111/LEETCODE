class Solution {
    private:
    int prod(int n){
        int proda=1;
        while(n>0){
            int x=n%10;
            proda*=x;
            n/=10;
        }
        return proda;
    }
public:
    int smallestNumber(int n, int t) {
        
        while(prod(n)%t!=0){
            n++;
        }
        return n;
    }
};