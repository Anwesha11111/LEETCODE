class Solution {
public:
    int maxArea(vector<int>& height) {int i=0,j=height.size()-1;int vol=0;
      while (i<height.size()-1 && j!=0){
      if(height[i]<=height[j]){
        int l=height[i],w=j-i;
        vol=max(vol,area(l,w));
        i++;
      }
      else {
        vol=max(vol,area(j-i,height[j]));
        j--;
      }  
      
      }
      return vol; 
   }
int area(int x,int y){
    return x*y;
}
};