#include<math.h>
#include<stdio.h>

int myAtoi(char * str){
    int i=0, negative=0; 
    int ans=0;
    while(str[i]!='\0') {
        if(str[i]==' '|| str[i]=='\n') {
            i++;
        }
        else if(str[i]=='-') {
            if(str[i+1]!='\0' && isdigit(str[i+1])>0) {
                negative=1;
            }
            i++;
        }
        else if(isdigit(str[i])<1 ) {//
            i++;
        }
        else {            
            ans=ans*10 + (str[i] - '0');
        }
        
    }
    if(negative==1) 
        return (-1*ans);
    else
        return ans;
    
}

