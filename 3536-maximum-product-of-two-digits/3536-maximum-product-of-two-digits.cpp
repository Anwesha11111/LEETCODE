class Solution {
public:
    int maxProduct(int n) {
        int x=n,max=0,max1=0;
        vector<int>d;
        while(x>0){
            d.push_back(x%10);
            x=x/10;
        }
        for(int i:d){
        if(i>max){
            max1=max;
            max=i;}
        else{
            if(i>max1){
                max1=i;
            }
        }
        
        }
        return max*max1;
    }
};