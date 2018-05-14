package s14_variableArgument;

public class ComputerExample {
	public static void main(String[] args) {
		Computer myCom = new Computer();
		
		int[] values1 = {1,2,3};
		int result1 = myCom.sum1(values1);
		System.out.println("result1: "+result1);

		int result2 = myCom.sum1(new int[] {1,2,3,4,5});
		System.out.println("result1: "+result2);

		int result3 = myCom.sum2(1,2,3);
		System.out.println("result1: "+result3);

		int result4 = myCom.sum2(1,2,3,4,5);
		System.out.println("result1: "+result4);
	}
}

class Computer {
//	가변적인 배열을 건네 받을 때
	int sum1(int[] values) {
		int sum = 0;
		for(int i=0; i<values.length; i++)
			sum += values[i];
		return sum;
	}
	
//	인자의 수에따른 길이의 배열을 생성한다
	int sum2(int ... values) {
		int sum = 0;
		for(int i=0;i<values.length; i++) 
			sum += values[i];
		return sum;
	}
}
