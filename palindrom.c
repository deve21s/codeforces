#include <stdio.h>
#include <string.h>
    void palinddrome(char * input1){
        int i,n,c=0;
        n=strlen(input1);
        for(i=0;i<n/2;i++)  
        {
            if(input1[i]==input1[n-i-1])
            c++;
    
        }
        if(c==i)
            printf("%d",1);
        else
            printf("%d",0);

    }
int main()
{
    char s[1000];  
    printf("Enter  the string : ");
    gets(s);
    palinddrome(s); 
    return 0;
}