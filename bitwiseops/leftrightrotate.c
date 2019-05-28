
int main() {
	int t;
	scanf("%d",&t);
	int i=1;
	i=i<<31;
	while(t>0){
	    int num,k;
	    unsigned int num2,k2;
	    scanf("%d",&num);
	    scanf("%d",&k);
	    num2=num;k2=k;
	    while(k>0){
	        if((num&i)==0)
	            {
	                num=num<<1;
	            }
	        else {
	            num=num<<1;
	            num=num|1;
	        }
	        k--;
	    }
	    while(k2>0){
	        if((num2&1)==0) {
	            num2=num2>>1;
	        }
	        else {
	            num2=num2/2;
	            num2=(num2|i);
	        } // revise and check out msb and but dropping
	        k2--;
	    }
	    printf("%d\n",num);
	    printf("%d\n",num2);
	    t--;
	}
	return 0;
}
