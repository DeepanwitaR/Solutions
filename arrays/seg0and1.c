#include <stdio.h>
void reverse(int n, int arr[]){
    int i,j=0,temp;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        // printf(" ");
    }
    
}
int main() {
	int t,n, arr[10000],i;
	scanf("%d",&t);
	while(t>0){
	    scanf("%d",&n);
	    for(i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    reverse(n,arr);
	    printf("\n");
	    t--;
	}
	return 0;
}
---------- 

