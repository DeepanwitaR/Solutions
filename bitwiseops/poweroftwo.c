#include<stdio.h>
#include<stdlib.h>
void ispower(unsigned long int n,int nob) {
    int count=0; unsigned long int i=1;
    while(count<64){
        if((n&i)!=0){
            if(nob>1) {
                printf("YES\n");
                return;
            }
            nob++;
        }
        count++;
        i<<count;
    }
   printf("NO\n");return;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t>0){
	    unsigned long int n; int nob=0;
	    scanf("%lu",&n);
	    ispower(n,nob);
	    t--;
	}
	return 0;
}
//doesnt work for the big numbers. check using long int
