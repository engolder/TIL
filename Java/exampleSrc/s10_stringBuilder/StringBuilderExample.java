package s10_stringBuilder;

public class StringBuilderExample {
	public static void main(String[] args) {
		
//		String�� ���ڿ��� ���� ������ �� ���� Ŭ�����̴�
//		���� ������ ������ ���ڿ� Ŭ������ ����Ϸ���
//		StringBuilder Ȥ�� StringBuffer�� ����ؾ��Ѵ�
		
		StringBuilder sa = new StringBuilder("Daedeok");
		StringBuilder sb = new StringBuilder();
		
		sa.append("software");
		sa.append("meister").append("Hight School ");
		System.out.println(sa);
		
		sa.insert(sa.length(), "grade ").append('2');
		System.out.println(sa);
		
		sb.append("Java ");
		sb.append("Program Study ");
		System.out.println(sb.toString());
		
		sb.insert(4, '2');
		System.out.println(sb.toString());
		
		sb.setCharAt(4, '6');
		System.out.println(sb.toString());
		
		sb.replace(6, 13, "Book");
		System.out.println(sb.toString());
		
		sb.deleteCharAt(4);
		System.out.println(sb.toString());
	}
}
