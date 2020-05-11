char* twoStrings(char* s1, char* s2) {
int i;
char q[]="abcdefghijklmnopqrstuvwxyz";
for(i=0;i<strlen(q);i++)
        {
           if(strchr(s1,q[i])!=NULL && strchr(s2,q[i])!=NULL)
           {
               
               return "YES";
               
           }
        }
    return "NO" ;
        

}
//This is just the function which is needed to be completed not full code.
