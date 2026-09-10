# include<unordered_set>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.empty())return 0;
       sort(nums.begin(),nums.end());
       int longest=1;
       unordered_set<int>mas(nums.begin(),nums.end());
       for(int num:mas){
        if(!mas.count(num-1)){
        int current=1;
        int x=num;
        while(mas.count(x+1)){
            x++;
         current++;
        
       }
       longest=max(longest,current);
        }
       }
       return longest;
    }
};