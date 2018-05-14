package s07_byteToString;

import java.io.IOException;

public class ByteToStringExample {
	public static void main(String[] args) throws IOException {
		byte[] bytes = { 72, 101, 108, 108, 111, 32, 74, 97, 118, 97 };
		
//		byte�迭�� ���ڿ��� ��ȯ�ϴ� String ������
		String str1 = new String(bytes);
		System.out.println(str1);
		
		String str2 = new String(bytes, 6, 4);
		System.out.println(str2);
		
//		Ű����κ��� �Է¹޾� ó��
		
		byte[] bytes2 = new byte[100];
		
		System.out.print("�Է�: ");
//		Ű����κ��� ����Ʈ �迭�� ���� �Է�
		int readByteNo = System.in.read(bytes2);

//		�ܼ�â�� Hello�� �Է��ϰ� �Ǹ� �����δ� ������ ���� �Էµȴ�
//		Hello\r\n
//		readByteNo-2�� \r�� \n�� ����Ʈ �迭���� ���ܽ����ش�
		String str = new String(bytes2, 0, readByteNo-2);
		System.out.println(str);
		
	}
}
