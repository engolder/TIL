package s11_compareSpeed;

public class StringSpeedCheck {
	public static void main(String[] args) {
		StringBuilder str = new StringBuilder("SAMSUNG");
		String target = "SDS";
		
		long start = System.currentTimeMillis();
		
		for(int i = 0; i<10000; i++) {
			str.append(target);
		}
		
		long end = System.currentTimeMillis();
		System.out.println(end - start);
	}
	/*
 	public static void main(String[] args) {
		String str = "SAMSUNG";
		String target = "SDS";
		
		long start = System.currentTimeMillis();
		
		for(int i = 0; i<10000; i++) {
			str = str + target;
		}
		
		long end = System.currentTimeMillis();
		System.out.println(end - start);
	}
	*/
}
