package s09_stringMethod;

public class StringMethod {
	public static void main(String[] args) {
		String str1 = "SDS Ltd";
		String str2 = "SAMSUNG";
		String ssn = "010101-1234567";
		String str3 = "�ٳ���,����.������ �� �޷�,���� Ű��";
		String str4 = "���߱�&�̹�ȣ,������-���ٴϿ�,��ȫ��";
		String result = "";
		
//		String Ŭ������ �����ϰ� ����� �� �ִ� ���� �޼ҵ带 �����Ѵ� 
//		�� �޼���� ��Ŭ���� �󿡼� shift + f2�� ����� ������ ������ �� �ִ�
		
		System.out.println(str1.substring(4));
		System.out.println(str1.substring(0, 3));
		System.out.println(str2.concat(str1));
		System.out.println(str2.indexOf("S"));
		System.out.println(str2.lastIndexOf("S"));
		char sex = ssn.charAt(7);
		switch (sex) {
		case '1' : 
		case '3' : System.out.println("����"); break;
		case '2' : 
		case '4' : System.out.println("����"); break;
		}
		System.out.println(str1.toUpperCase());
		System.out.println(str2.toLowerCase());
		
		if(str1.compareTo(str2) > 0) {
			System.out.println("SDS Ltd�� �� ũ��");
		} else {
			System.out.println("SAMSUNG�� �� ũ��");
		}
		
		System.out.println("");
//		"&|,|-"�� ���Խ��̴� : '&'Ȥ�� ','Ȥ�� '-'
		String[] arr = str4.split("&|,|-");
		System.out.println("�и��� ���ڿ���");
		for (int i =0; i< arr.length; i++) {
			System.out.println(arr[i]);
		}
		
//		str3.reaplaceAll(" |,|.",' ');
//		�� ����� ���� �ִ�.
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
