package s08_stringToknizer;

import java.util.StringTokenizer;

public class StringTokenizerExample {
	public static void main(String[] args) {
		String text = "송중기/소지섭/김연아";
		
//	 	StringTokenizer생성자를 사용해 아래와 같이 두번째 인자에 주어진 문자열로 구분할 수 있다
//		st변수는 "/"로 구분된 토큰들이 담긴다
		
		StringTokenizer st = new StringTokenizer(text, "/");
//		countTokens의 토큰 수를 구한다
		int countTokens = st.countTokens();

//		토큰 수를 얻어 for문으로 루핑
		for(int i=0; i<countTokens; i++) {
//			다음 토큰이 남아 있는지 확인한다
			String token = st.nextToken();
			System.out.println(token);
		}
		System.out.println();
		
//		토큰을 모두 사용했음으로 객체를 새로 생성
		st = new StringTokenizer(text, "/");
//		남아 있는 토큰을 확인하고 while문으로 루핑
		while(st.hasMoreTokens()) {
			System.out.println(st.nextToken());
		}
	}
}
