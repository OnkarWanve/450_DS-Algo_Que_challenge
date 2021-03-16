#include<iostream>
using namespace std;
int maxSubArraySum(int a[],int n)
{
    int current_sum=0,max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        current_sum+=a[i];
        if(current_sum>max_sum)
        max_sum=current_sum;
        if(current_sum<0)
        current_sum=0;
    }
    return max_sum;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}