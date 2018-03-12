package s05_carsale5;

class CarDealer {
	private String carName;
	private final int PRICE;
	private int inventory;
	private int account = 0;
	
	public String getCarName() {
		return carName;
	}
	public void setCarName(String carName) {
		this.carName = carName;
	}
	public int getInventory() {
		return inventory;
	}
	public void setInventory(int inventory) {
		this.inventory = inventory;
	}
	public int getAccount() {
		return account;
	}
	public void setAccount(int account) {
		this.account = account;
	}
	public int getPRICE() {
		return PRICE;
	}
	public CarDealer(String carName, int price, int inventory) {
		this.carName = carName;
		this.PRICE = price;
		this.inventory = inventory;
	}
	public boolean carSale(int money) {
		boolean receipt = false;
		account += money;
		inventory -= 1;
		receipt = true;
		return receipt;
	}
	public void saleResult() {
		System.out.println("���� ���� " + inventory + "�� �̸� �Ǹž��� " + account + "�����Դϴ�");
	}
}

class CarBuyer {
	int money = 15000;
	boolean owner = false;
	
	public void buyCar(CarDealer dealer, int price) {
		owner = dealer.carSale(price);
		money -= price;
	}
	public void buyResult() {
		System.out.println("���� ���� ���� ���´� " + owner + "�̸� ���� �� �ܾ��� " + money + "�����Դϴ�");
	}
}

public class CarSale5 {

	public static void main(String[] args) {
		CarDealer dealer1 = new CarDealer("Grandeur", 3500, 10);
		CarDealer dealer2 = new CarDealer("Genesis", 5500, 5);
		CarBuyer buyer = new CarBuyer();
		
		/*
		 * �ν��Ͻ��� �ʵ忡 private ���������ڸ� �ο������μ� ��������
		buyer.money -= 1000;
		dealer1.account += 1000;
		buyer.owner = true;
		dealer1.inventory -= 3;
		*/
		dealer1.saleResult();
		dealer2.saleResult();
		
		buyer.buyResult();

	}

}