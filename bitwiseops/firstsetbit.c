#include <stdio.h>
int main() {
	int t,comp,position,number,size,limit;
	scanf("%d",&t);
	while(t>0) {
	    scanf("%d",&number);
	    if(number==0){
	        printf("%d\n",0);
	    }
	    else {
	        comp=1;position=1; limit=32;
	        
	        while((comp & number)==0 && limit>0){
	            comp=comp*2;
	            position++;
	            limit--;
	        }
	        if((comp&number)!=0) {
	         printf("%d\n",position); 
	        }
	        else {
	            printf("%d\n",-1);
	        }
	} 
	t--;
}
return 0; 
}
