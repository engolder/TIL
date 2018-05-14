package s15_forEach;

public class ForEachDemo {
	public static void main(String[] args) {
		String[] colors = {"red", "blue", "green"};
		
		for(int i=0;i< colors.length; i++)
			System.out.println(colors[i]);
		
		System.out.println();
		
//		배열의 모든원소를 순회할 때에는 아래와 같이 for-each문을 사용할 수 있다
//		향상된 for문이라고도 말하며 문법이 간결하다
		for(String color : colors) 
			System.out.println(color);
	}
}
