#include <stdio.h>
// check the solution once more.
int main() {
	int t, xr,k,number;
	scanf("%d",&t);
	while(t>0) {
	    scanf("%d",&number);
	    scanf("%d",&k);
	    xr=1;
	    if(k<=32) {
	        xr=xr<<(k);
	        number=(number|k);
	    }
	    
	    printf("%d\n",number);
	    t--;
	}
	return 0;
}
