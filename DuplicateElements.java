import java.util.HashSet;
import java.util.Set;

public class DuplicateElements {

	public static void main(String[] args) {
		int arr[]={1,2,2,4,5,6};
		System.out.println(findDuplicate(arr,arr.length));
	}

	private static int findDuplicate(int[] arr, int length) {
		Set<Integer> sc=new HashSet<Integer>();
		for(int item:arr)
		{
			if(sc.contains(item))
				return item;
			sc.add(item);
		}
		return-1;
	}

}
