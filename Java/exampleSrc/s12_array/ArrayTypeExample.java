package s12_array;

public class ArrayTypeExample {
	public static void main(String[] args) {
//		배열 생성
//		type[] arrayName = new type[length] (이때 length를 지정해주지 않아도 된다)
//		또는
//		type[] arrayName = { item1, item2, item3.. }
		int[] intArray = { 1, 2, 3 };
		System.out.println(intArray.length); // == 3
		
//		2차원 배열, 원리를 파악하면 쉽다
//		int[]도 하나의 타입이 된다
//		type[][] arrayName = new type[length][length]
//		아래의 예는 다차원 배열에서 가변배열을 구현한 것이다
		int[][] myArrays = new int[3][];
		myArrays[0] = new int[] { 1, 2, 3 };
		myArrays[1] = new int[] { 5, 4, 3, 2, 1 };
		myArrays[2] = new int[] { 11, 22 };
		
		for(int i = 0; i<myArrays.length; i++) {
			for(int j = 0; j<myArrays[i].length; j++) {
				System.out.printf("%5d", myArrays[i][j]);
			}
			System.out.println();
		}
	}
}
