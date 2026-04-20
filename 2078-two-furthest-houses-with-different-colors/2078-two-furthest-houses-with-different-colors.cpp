class Solution {
public:
    int maxDistance(vector<int>& colors) {int j=0,an=0,di=0;
       for (int i=0;i<=colors.size()-1;i++){
        for(j=0;j!=i && j<=colors.size()-1;j++){
        if(colors[i]!=colors[j]){
        di=abs(i-j);
        an=max(an,di);}
        }
       }
       return an; 
    }

};