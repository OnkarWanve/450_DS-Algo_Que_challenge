
public class KadanesAlgo {

	public static void main(String[] args) {
		int [] a = {-2, -3, 4, -1, -2, 1, 5, -3};
        System.out.println("Maximum contiguous sum is " +
                                       maxSubArraySum(a));

	}

	private static int maxSubArraySum(int[] a) {
		int maxSum=Integer.MIN_VALUE,currentSum=0;
		for(int i=0;i<a.length;i++)
		{
			currentSum+=a[i];
			if(maxSum<currentSum)
				maxSum=currentSum;
			if(currentSum<0)
				currentSum=0;
		}
		
		return maxSum;
	}

}
