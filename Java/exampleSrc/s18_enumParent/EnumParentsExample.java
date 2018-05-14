package s18_enumParent;

enum Parents {FATHER, MOTHER}

public class EnumParentsExample {
	public static void printParent(Parents p) {
		System.out.println(p);
	}
	
	public static void print(Parents d) {
		switch(d) {
		case FATHER:
			System.out.println("�ƺ�");
			break;
		case MOTHER:
			System.out.println("����");
			break;
		default:
			System.out.println("�θ�� �� �� �и�!");
		}
	}
	
	public static void main(String[] args) {
		printParent(Parents.MOTHER);
		print(Parents.FATHER);
		print(Parents.MOTHER);
		
		for(Parents p : Parents.values()) {
			System.out.println("enum ���� ������ : "+p);
		}
	}
}
