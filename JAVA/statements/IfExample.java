package study;
import java.util.Scanner;

public class IfExample {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int age = scanner.nextInt();
		if(age>=80) System.out.println("합격");
		else System.out.println("불합격");
	}
}
