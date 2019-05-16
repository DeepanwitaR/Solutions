#include <stdio.h>

int main() {
// 	bitwise xoring of the 2 nos and the xor bit to find the last
//  bit that is different.

	int t, xr,m,n, number,position,limit;
	scanf("%d",&t);
	while(t>0) {
	    scanf("%d",&m);
	    scanf("%d",&n);
	    number=n^m;
	    if(number==0) {
	        printf("%d\n",-1);
	    }
	    else {
	        position=1;xr=1; limit=sizeof(int)*4;
	        while((number&xr)==0 && limit >=0) {
	            xr=xr<<1;
	            position++;
	            limit--;
	        }
	        if((number&xr)!=0){
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
