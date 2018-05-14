package s16_arrayExample;

public class Example1 {
	public static void main(String[] args) {
		int[] scores = {83, 90, 87};
		int sum1=0;
		for(int i=0; i<scores.length; i++)
			sum1 += scores[i];
		System.out.println("รัวี: "+sum1);
		
		int sum2 = add(new int[] {83,90,87});
		System.out.println("รัวี: "+sum2);
	}
	
	public static int add(int[] scores) {
		int sum=0;
		for(int i=0; i<scores.length; i++)
			sum += scores[i];
		
		return sum;
	}
	
}
