int missingNumber(int* nums, int n){

    int osum=n*(n+1)/2;
    int sum=0,i;
    for(i=0;i<n;i++)
    sum=sum+nums[i];
    return osum-sum;


}
int main()
{
    int nums[] = {0, 1, 3, 4, 5};
    int n = 5;
    int result = missingNumber(nums, n);

    printf("The missing number is %d", result);

    return 0;
}
