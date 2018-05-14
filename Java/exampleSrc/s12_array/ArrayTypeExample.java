package s12_array;

public class ArrayTypeExample {
	public static void main(String[] args) {
//		�迭 ����
//		type[] arrayName = new type[length] (�̶� length�� ���������� �ʾƵ� �ȴ�)
//		�Ǵ�
//		type[] arrayName = { item1, item2, item3.. }
		int[] intArray = { 1, 2, 3 };
		System.out.println(intArray.length); // == 3
		
//		2���� �迭, ������ �ľ��ϸ� ����
//		int[]�� �ϳ��� Ÿ���� �ȴ�
//		type[][] arrayName = new type[length][length]
//		�Ʒ��� ���� ������ �迭���� �����迭�� ������ ���̴�
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
