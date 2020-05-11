#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1001];
    fgets(s,1000,stdin);
    int q[10]={0},i;
    

    for(i=0;i<strlen(s);i++)
    {   
     if((int)s[i]>=47 && (int)s[i]<=57)
      {
         q[s[i]-'0']+=1;
      }
    }
    for(i=0;i<10;i++)
        printf("%d ",q[i]);
    return 0;
}