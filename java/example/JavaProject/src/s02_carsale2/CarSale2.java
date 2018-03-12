package s02_carsale2;

class CarDealer {
//	선언만하고 값은 설정해주지 않는다
	String carName;
	int price;
	int inventory;
	int account = 0;
	
	public void initMember(String carName, int price, int inventory) {
//		initMember라는 메서드를 이용해서 인스턴스의 필드값을 직접 설정 해 줄 수 있도록했다
		this.carName = carName;
		this.price = price;
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
		System.out.println("현재 재고는 " + inventory + "대 이며 판매액은 " + account + "만원입니다");
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
		System.out.println("현재 차량 소유 상태는 " + owner + "이며 구매 후 잔액은 " + money + "만원입니다");
	}
}

public class CarSale2 {

	public static void main(String[] args) {
//		차의 종류는 만들 수록 생길 수 있다는 현실세계를 반영함
		CarDealer dealer1 = new CarDealer();
		dealer1.initMember("Grandeur", 3500, 10);
		CarDealer dealer2 = new CarDealer();
		dealer2.initMember("Genesis", 5500, 5);
		CarBuyer buyer = new CarBuyer();
		
		buyer.buyCar(dealer1, 3500);
		buyer.buyCar(dealer2, 5500);
		
		dealer1.saleResult();
		dealer2.saleResult();
		
		buyer.buyResult();

	}

}