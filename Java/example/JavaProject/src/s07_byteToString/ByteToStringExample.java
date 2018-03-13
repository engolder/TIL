package s07_byteToString;

import java.io.IOException;

public class ByteToStringExample {
	public static void main(String[] args) throws IOException {
		byte[] bytes = { 72, 101, 108, 108, 111, 32, 74, 97, 118, 97 };
		
//		byte배열을 문자열로 변환하는 String 생성자
		String str1 = new String(bytes);
		System.out.println(str1);
		
		String str2 = new String(bytes, 6, 4);
		System.out.println(str2);
		
//		키보드로부터 입력받아 처리
		
		byte[] bytes2 = new byte[100];
		
		System.out.print("입력: ");
//		키보드로부터 바이트 배열에 문자 입력
		int readByteNo = System.in.read(bytes2);

//		콘솔창에 Hello를 입력하게 되면 실제로는 다음과 같이 입력된다
//		Hello\r\n
//		readByteNo-2는 \r과 \n을 바이트 배열에서 제외시켜준다
		String str = new String(bytes2, 0, readByteNo-2);
		System.out.println(str);
		
	}
}
