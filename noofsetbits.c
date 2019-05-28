#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t>0) {
        int num;
        scanf("%d",&num);
        int count=0,ans=0,it=1;
        while (it<=num) {
            while(count<32) {
                int i=1<<count;
                if((it&i)!=0) {
                    ans++;
                    }
                    count++;
                }
                it++;
                count=0;
             }
        printf("%d\n",ans);
        ans=0;it=1;
        t--;
    }
	return 0;
}
