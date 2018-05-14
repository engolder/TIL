package s13_arraysMethods;

import java.util.Arrays;

public class SearchExample {
	public static void main(String[] args) {
		int[] scores = {99, 97, 98};
//		����(��������)
		Arrays.sort(scores);
		for(int i=0;i<scores.length;i++) {
			System.out.println("scores["+i+"]="+scores[i]);
		}
//		Ž��
		int index = Arrays.binarySearch(scores, 99);
		System.out.println("ã�� �ε���: "+index);
		System.out.println();
		
		String[] names = {"ȫ�浿", "�ڵ���", "��μ�"};
		Arrays.sort(names);
		for(int i=0; i<names.length; i++) {
			System.out.println("names["+i+"]="+names[i]);
		}
		index = Arrays.binarySearch(names, "��μ�");
		System.out.println("ã�� �ε���: "+index);
	}
}
