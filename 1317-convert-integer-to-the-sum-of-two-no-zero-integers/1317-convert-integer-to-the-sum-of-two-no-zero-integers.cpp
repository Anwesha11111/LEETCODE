class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {

        for(int i=1;i<n;i++){
            if(nozero(i) && nozero(n-i))
            return {i,n-i};
        }
   return {} ; 
   }
    private:
    bool nozero(int b){
        while(b>0){
            if(b%10==0)
            return false;
            b/=10;}
          return true;  
        
    }

};