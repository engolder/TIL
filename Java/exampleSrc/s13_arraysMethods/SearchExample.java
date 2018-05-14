package s13_arraysMethods;

import java.util.Arrays;

public class SearchExample {
	public static void main(String[] args) {
		int[] scores = {99, 97, 98};
//		Á¤·Ä(¿À¸§Â÷¼ø)
		Arrays.sort(scores);
		for(int i=0;i<scores.length;i++) {
			System.out.println("scores["+i+"]="+scores[i]);
		}
//		Å½»ö
		int index = Arrays.binarySearch(scores, 99);
		System.out.println("Ã£Àº ÀÎµ¦½º: "+index);
		System.out.println();
		
		String[] names = {"È«±æµ¿", "¹Úµ¿¼ö", "±è¹Î¼ö"};
		Arrays.sort(names);
		for(int i=0; i<names.length; i++) {
			System.out.println("names["+i+"]="+names[i]);
		}
		index = Arrays.binarySearch(names, "±è¹Î¼ö");
		System.out.println("Ã£Àº ÀÎµ¦½º: "+index);
	}
}
