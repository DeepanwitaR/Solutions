#include <stdio.h>

int main() {
	int t, xr, n,l,r,count;
	scanf("%d",&t);
	while(t>0) {
	    scanf("%d",&n);
	    scanf("%d",&l);
	    scanf("%d",&r);
	    xr=1;
	    count=l;
	    xr=xr<<count-1;
	    n=n^xr;
	    count++;
	    while(count<=r) {
	        xr=xr<<1;
	        n=n^xr;
	        count++;
	    }
	    printf("%d\n",n);
	    t--;
	}
	return 0;
}
