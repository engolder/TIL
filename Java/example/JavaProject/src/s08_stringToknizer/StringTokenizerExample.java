package s08_stringToknizer;

import java.util.StringTokenizer;

public class StringTokenizerExample {
	public static void main(String[] args) {
		String text = "���߱�/������/�迬��";
		
//	 	StringTokenizer�����ڸ� ����� �Ʒ��� ���� �ι�° ���ڿ� �־��� ���ڿ��� ������ �� �ִ�
//		st������ "/"�� ���е� ��ū���� ����
		
		StringTokenizer st = new StringTokenizer(text, "/");
//		countTokens�� ��ū ���� ���Ѵ�
		int countTokens = st.countTokens();

//		��ū ���� ��� for������ ����
		for(int i=0; i<countTokens; i++) {
//			���� ��ū�� ���� �ִ��� Ȯ���Ѵ�
			String token = st.nextToken();
			System.out.println(token);
		}
		System.out.println();
		
//		��ū�� ��� ����������� ��ü�� ���� ����
		st = new StringTokenizer(text, "/");
//		���� �ִ� ��ū�� Ȯ���ϰ� while������ ����
		while(st.hasMoreTokens()) {
			System.out.println(st.nextToken());
		}
	}
}
