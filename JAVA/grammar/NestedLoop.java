package study;

public class NestedLoop {
	public static void main(String[] args) {
		int i,j;
		
		for(i=2;i<10;i++) {
			for(j=1;j<10;j++) {
				System.out.println(i+"*"+j+"="+i*j);
			}
		}
	}
}
