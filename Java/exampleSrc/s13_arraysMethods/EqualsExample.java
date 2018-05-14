package s13_arraysMethods;

import java.util.Arrays;

public class EqualsExample {
	public static void main(String[] args) {
		int[][] original = { {1,2}, {3,4} };
		/*
		 * 얕은 복사와 깊은 복사 구분
		 * 얕은 복사는 참조 주소를 복사,
		 * 깊은 복사는 새로운 객체를 생성
		*/
		
//		Arrays.copyOf 메서드는 배열을 복사해서 새로 객체를 생성한다
//		이때 original[0] == cloned1[0] 이다
		System.out.println("[얕은 복제후 비교]");
		int[][] cloned1 = Arrays.copyOf(original, original.length);
		System.out.println("배열 번지 비교: "+(original == cloned1));
//		얕은 비교
		System.out.println("1차 배열 항목값 비교: "+Arrays.equals(original, cloned1));
//		깊은 비교
		System.out.println("2차 배열 항목값 비교: "+Arrays.deepEquals(original, cloned1));
		
//		아래는 original[0] != cloned1[0]이고
//		original[0][0] == cloned1[0][0] == 1이다
		System.out.println("\n[깊은 복제후 비교]");
		int[][] cloned2 = Arrays.copyOf(original, original.length);
		cloned2[0] = Arrays.copyOf(original[0], original[0].length);
		cloned2[1] = Arrays.copyOf(original[1], original[1].length);
		System.out.println("배열 번지 비교: "+(original == cloned2));
		System.out.println("1차 배열 항목값 비교: "+Arrays.equals(original, cloned2));
		System.out.println("2차 배열 항목값 비교: "+Arrays.deepEquals(original, cloned2));
	}
}
