#include<stdio.h>

int main() { 
    int t,n;
	scanf("%d",&t);
	while(t>0) {
	    scanf("%d",&n);
	    int i,xo=0,num;
	    for(i=0;i<n-1;i++){
	        scanf("%d",&num);
	        xo=xo^num; 
	    }
	    for(i=1;i<=n;i++){
	        xo=xo^i; 
	    }
	    printf("%d \n",xo); 
	    t--;
	}
}
