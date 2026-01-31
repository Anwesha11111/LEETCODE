void reverseString(char* s, int n) {
    char temp;
    for(int j=0,i=n-1;j<i;i--,j++){
       temp=s[i];
        s[i]=s[j];
        s[j]=temp;
            }
}