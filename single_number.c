int singleNumber(int* nums, int n){

    int res=0;
    int i;
    for(i=0;i<n;i++)
    {
        res=res^nums[i];

    }
return res;
}

int main()
{
    int nums[] = {2, 3, 2, 4, 3};
    int n = 5;
    int result = singleNumber(nums, n);

    printf("The single number is %d", result);

    return 0;
}
