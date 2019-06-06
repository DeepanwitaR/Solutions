/*This is a function problem.You only need to complete the function given below*/
/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */
// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
     int i=l,j=m+1;int count=(r-l)+1;
     int ans[count],in=0;
     while(i<=m && j<=r) {
         if(arr[i]<arr[j]){
             ans[in]=arr[i];
             in++;i++;
         }
         else {
             ans[in]=arr[j];
             in++;j++;
         }
     }
     if(i>m) {
         while(j<=r){
             ans[in]=arr[j];
             j++;in++;
         }
     }
     else {
        while(i<=m){
            ans[in]=arr[i];
            i++;in++;
        }
     }
     i=0;
     while(l<=r) {
         arr[l]=ans[i];
         l++;
         i++;
     }
}
© 2019 GitHub, Inc.
