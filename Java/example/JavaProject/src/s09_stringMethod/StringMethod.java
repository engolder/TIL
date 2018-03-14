package s09_stringMethod;

public class StringMethod {
	public static void main(String[] args) {
		String str1 = "SDS Ltd";
		String str2 = "SAMSUNG";
		String ssn = "010101-1234567";
		String str3 = "바나나,딸기.오렌지 배 메론,수박 키위";
		String str4 = "송중기&이민호,소지섭-강다니엘,이홍기";
		String result = "";
		
//		String 클래스는 유용하게 사용할 수 있는 여러 메소드를 제공한다 
//		각 메서드는 이클립스 상에서 shift + f2를 사용해 문서를 참고할 수 있다
		
		System.out.println(str1.substring(4));
		System.out.println(str1.substring(0, 3));
		System.out.println(str2.concat(str1));
		System.out.println(str2.indexOf("S"));
		System.out.println(str2.lastIndexOf("S"));
		char sex = ssn.charAt(7);
		switch (sex) {
		case '1' : 
		case '3' : System.out.println("남성"); break;
		case '2' : 
		case '4' : System.out.println("여성"); break;
		}
		System.out.println(str1.toUpperCase());
		System.out.println(str2.toLowerCase());
		
		if(str1.compareTo(str2) > 0) {
			System.out.println("SDS Ltd가 더 크다");
		} else {
			System.out.println("SAMSUNG이 더 크다");
		}
		
		System.out.println("");
//		"&|,|-"는 정규식이다 : '&'혹은 ','혹은 '-'
		String[] arr = str4.split("&|,|-");
		System.out.println("분리된 문자열은");
		for (int i =0; i< arr.length; i++) {
			System.out.println(arr[i]);
		}
		
//		str3.reaplaceAll(" |,|.",' ');
//		로 사용할 수도 있다.
		str3 = str3.replace(',', ' ');
		str3 = str3.replace('.', ' ');
		String[] fruit = str3.split(" ");
		int j;
		for( j=0; j<fruit.length-1; j++) {
			result += fruit[j]+",";
		}
		result += fruit[j];
		System.out.println(result);
	}
}
