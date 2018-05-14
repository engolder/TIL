package s16_arrayExample;

public class Example2 {
	public static void main(String[] args) {
		int[] a = {2,4,6,8,10,12,14,16};
		int[] b = {1,1,2,3,5,8,13,21};
		
		for(int i=0; i<8; i++) {
			a[i] += b[7-i];
			System.out.print(a[i]+" ");
		}
	}
}
