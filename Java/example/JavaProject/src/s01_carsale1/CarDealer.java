package s01_carsale1;

class CarDealer {
	String carName = "Grandeur";
	final int PRICE = 3500;
	int inventory = 10;
	int account;
	
	public boolean carSale(int money) {
		boolean receipt = false;
		account += money;
		inventory -= 1;
		receipt = true;
		return receipt;
	}
}
