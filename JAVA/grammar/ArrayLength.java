package study;
import java.util.Scanner;

public class ArrayLength {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int intArray[] = new int[5];
		double sum = 0;
		
		for(int i=0; i<intArray.length; i++) {
			intArray[i] = in.nextInt();
			sum += intArray[i];
		}
		
		System.out.println("�迭 ������ ����� "+sum/intArray.length+"�Դϴ�.");
			
	}
}
