package s19_enumMethods;

enum Bread {
	DANPAT(500), CREAMPUFF(800), SOBORO(500);
	
	private int price;
	Bread(int p) {
		price = p;
	}
	
	public int getPrice() {
		return price;
	}
	
	public void setPrice(int p) {
		price  = p;
	}
	
}

public class UseEnumExample {
	public static void main(String[] args) {
		System.out.println("���ϻ��� ����: " + Bread.DANPAT.getPrice());
		System.out.println("��ũ������ ����: " + Bread.CREAMPUFF.getPrice());
		System.out.println("�Һ����� ����: " + Bread.SOBORO.getPrice());
		
		Bread.DANPAT.setPrice(600);
		System.out.println("���ϻ��� ������ �ö����ϴ�.");
		System.out.println("���ϻ��� ����: "+Bread.DANPAT.getPrice());
		
		Bread newBread = Bread.CREAMPUFF;
		System.out.println("���� ���� ��: "+newBread);
		System.out.println("���� ���� ���� ����: "+newBread.getPrice());
	}
}
