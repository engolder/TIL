package s22_singleton;

public class Singleton {
	public static void main(String[] args) {
		SingletonTest sgt = SingletonTest.getInstance();
		System.out.println(sgt.getNextInt());
		System.out.println(sgt.getNextInt());
	}
}

class SingletonTest {
	private static SingletonTest sgt = new SingletonTest();
	private int cnt =0;
	private SingletonTest() {}
	
	public static SingletonTest getInstance() {
		return sgt;
	}
	public int getNextInt() {
		return cnt+=1;
	}
}