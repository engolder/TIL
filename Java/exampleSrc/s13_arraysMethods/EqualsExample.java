package s13_arraysMethods;

import java.util.Arrays;

public class EqualsExample {
	public static void main(String[] args) {
		int[][] original = { {1,2}, {3,4} };
		/*
		 * ���� ����� ���� ���� ����
		 * ���� ����� ���� �ּҸ� ����,
		 * ���� ����� ���ο� ��ü�� ����
		*/
		
//		Arrays.copyOf �޼���� �迭�� �����ؼ� ���� ��ü�� �����Ѵ�
//		�̶� original[0] == cloned1[0] �̴�
		System.out.println("[���� ������ ��]");
		int[][] cloned1 = Arrays.copyOf(original, original.length);
		System.out.println("�迭 ���� ��: "+(original == cloned1));
//		���� ��
		System.out.println("1�� �迭 �׸� ��: "+Arrays.equals(original, cloned1));
//		���� ��
		System.out.println("2�� �迭 �׸� ��: "+Arrays.deepEquals(original, cloned1));
		
//		�Ʒ��� original[0] != cloned1[0]�̰�
//		original[0][0] == cloned1[0][0] == 1�̴�
		System.out.println("\n[���� ������ ��]");
		int[][] cloned2 = Arrays.copyOf(original, original.length);
		cloned2[0] = Arrays.copyOf(original[0], original[0].length);
		cloned2[1] = Arrays.copyOf(original[1], original[1].length);
		System.out.println("�迭 ���� ��: "+(original == cloned2));
		System.out.println("1�� �迭 �׸� ��: "+Arrays.equals(original, cloned2));
		System.out.println("2�� �迭 �׸� ��: "+Arrays.deepEquals(original, cloned2));
	}
}
