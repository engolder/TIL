package study;

class Sample {
	public int a;
	private int b;
	int c;
	
	public int getB() {
		return b;
	}
	
	public void setB(int value) {
		b = value;
	}
}

public class AccessEx {
	public static void main(String[] args) {
		Sample aClass = new Sample();
		aClass.a = 10;
		aClass.setB(10);
		aClass.c = 10;
	}
}
