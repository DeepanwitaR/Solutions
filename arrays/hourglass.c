//function only
// Complete the hourglassSum function below.
int hourglassSum(int arr_rows, int arr_columns, int** arr) {
    int i,j,max=-99,temp=0;
    for(i=0;i<arr_rows-2;i++) {
        for(j=0;j<arr_columns-2;j++) {
            temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i + 1][j + 1] +
                arr[i+2][j] + arr[i + 2][j+1] + arr[i + 2][j+2];
            if(temp>max)
                max=temp;
        }

    }
return max;
}
