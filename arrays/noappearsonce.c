#include<stdio.h>
int main() {
    int t,ar[1000];
	scanf("%d",&t);
	while(t>0){
	    int n,ans=0,i;
	    scanf("%d",&n);
	    for(i=1;i<=n;i++) {
	        scanf("%d",&ar[i]);
	        ans=ans^ar[i];
	    }
	    printf("%d \n",ans);
	    t--;
	}
	return 0;
}
