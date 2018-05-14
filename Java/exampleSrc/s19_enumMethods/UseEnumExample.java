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
		System.out.println("´ÜÆÏ»§ÀÇ °¡°Ý: " + Bread.DANPAT.getPrice());
		System.out.println("½´Å©¸²»§ÀÇ °¡°Ý: " + Bread.CREAMPUFF.getPrice());
		System.out.println("¼Òº¸¶ó»§ÀÇ °¡°Ý: " + Bread.SOBORO.getPrice());
		
		Bread.DANPAT.setPrice(600);
		System.out.println("´ÜÆÏ»§ÀÇ °¡°ÝÀÌ ¿Ã¶ú½À´Ï´Ù.");
		System.out.println("´ÜÆÏ»§ÀÇ °¡°Ý: "+Bread.DANPAT.getPrice());
		
		Bread newBread = Bread.CREAMPUFF;
		System.out.println("»õ·Î ¸¸µç »§: "+newBread);
		System.out.println("»õ·Î ¸¸µç »§ÀÇ °¡°Ý: "+newBread.getPrice());
	}
}
