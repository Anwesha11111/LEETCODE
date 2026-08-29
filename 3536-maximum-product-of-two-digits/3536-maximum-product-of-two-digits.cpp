class Solution {
public:
    int maxProduct(int n) {
        int x=n;
        vector<int>d;
        while(x>0){
            d.push_back(x%10);
            x=x/10;
        }
        sort(d.begin(),d.end());
        return d[d.size()-1]*d[d.size()-2];
    }
};