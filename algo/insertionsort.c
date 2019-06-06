void insert(int arr[], int i){
    int n=1;
    while(n<i) {
        int key= arr[n];
        int j=n-1;
        while (j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        n++;
    }
}
