package study;
import java.util.Scanner;

public class IfExample {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int age = scanner.nextInt();
		if(age>=80) System.out.println("�հ�");
		else System.out.println("���հ�");
	}
}
