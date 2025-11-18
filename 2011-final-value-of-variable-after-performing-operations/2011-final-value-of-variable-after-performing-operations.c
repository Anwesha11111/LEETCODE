#include<string.h>

int finalValueAfterOperations(char** operations, int operationsSize) {
    int len=operationsSize;
    int a=0;
  for(int i=0;i<len;i++){
  if(strcmp(operations[i],"--X")==0||strcmp(operations[i],"X--")==0){
    a--;
  }
  else if(strcmp(operations[i],"++X")==0||strcmp(operations[i],"X++")==0){
    a++;
  }

  }  
return a;
}