#include <stdio.h>

int main() {
	int t, xr, i,k, number;
	scanf("%d",&t); 
	while(t>0){
	    scanf("%d",&number);
	    scanf("%d",&k);
	    if(number==0) {
	        printf("No\n");
	    }
	    else {
	        xr=1;
	        xr=xr<<(k);
	        if((xr&number)!=0){
	            printf("Yes\n");
	        }
	        else {
	            printf("No\n");
	        }
	    }
	    t--;
	}
	return 0;
}
