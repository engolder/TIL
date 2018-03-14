package s10_stringBuilder;

public class StringBuilderExample {
	public static void main(String[] args) {
		
//		String는 문자열을 직접 수정할 수 없는 클래스이다
//		따라서 수정이 가능한 문자열 클래스를 사용하려면
//		StringBuilder 혹은 StringBuffer를 사용해야한다
		
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
