package s01_carsale1;

class CarDealer {
	String carName ="Grandeur";
	final int PRICE = 3500;
	int inventory = 10;
	int account = 0;
	
	public boolean carSale(int money) {
		boolean receipt = false;
		account += money;
		inventory -= 1;
		receipt = true;
		return receipt;
	}
	public void saleResult() {
		System.out.println("현재 재고는 " + inventory + "대 이며 판매액은 " + account + "만원입니다");
	}
}

class CarBuyer {
	int money = 5000;
	boolean owner = false;
	
	public void buyCar(CarDealer dealer, int price) {
		owner = dealer.carSale(price);
		money -= price;
	}
	public void buyResult() {
		System.out.println("현재 차량 소유 상태는 " + owner + "이며 구매 후 잔액은 " + money + "만원입니다");
	}
}

public class CarSale1 {

	public static void main(String[] args) {
		CarDealer dealer = new CarDealer();
		CarBuyer buyer = new CarBuyer();
		
//		메시지 패싱(message passing)
		buyer.buyCar(dealer, 3500);
		dealer.saleResult();
		buyer.buyResult();

	}

}