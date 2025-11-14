/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
  int*arr=malloc(n*sizeof(int)) ;
  *returnSize=n;
  int j=1;
  for(int i=0;i<n/2;i++){
    arr[i]=-j;
    arr[n-i-1]=j++;
  } 
  if(n%2!=0){
    arr[n/2]=0;
  }
  return arr;
   
}