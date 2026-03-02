class Solution {
    public String gcdOfStrings(String str1, String str2) {
    
 if(! (str2+str1).equals(str1+str2))
   return "";
 else{
    int l=gcd(str1.length(),str2.length());
 return str1.substring(0,l);
 }

    }

 private int gcd(int a,int b){
    if(b==0)
     return a;
 return gcd(b,a%b);
 }
}