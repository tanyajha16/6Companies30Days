void rotate(int n,int a[][n])
{
    //code here
    int arr[n][n];
    int p=n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=a[j][p];
        }
        p--;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        a[i][j]=arr[i][j];
    }
}