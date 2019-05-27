// no of bits to flip to make it equal.

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int a,b,r=1,count=0,nob=0;
	    scanf("%d",&a);
	    scanf("%d",&b);
	    while(count<32) {
	        if(((a^b)&r)!=0) {
	            nob++;
	        }
	        count++;
	        r=r<<1;
	    }
	    printf("%d\n",nob);
	    t--;
	}
	return 0;
}
