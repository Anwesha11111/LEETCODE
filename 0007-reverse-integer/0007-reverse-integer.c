int reverse(int x){
int rev=0,rem=0;
while(x!=0){
   rem=x%10;
   rev= rev*10+rem;
   x/=10;
}
   if(rev<INT_MIN || rev> INT_MAX)
    return 0;
 return (int)rev;  
}