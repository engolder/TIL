package s12_array;

public class MainStringArrayArgument {
	public static void main(String[] args) {
		
 		/*
 		 * 실행 시키면 아래 조건의 값이 true가 되는 것을 알 수 있다
		 * eclipse메뉴에서 Run - Run Configurations - Arguments에
 		 * Program arguments에
 		 * 10 20
 		 * 을 적고 다시 실행시켜보자
 		 * length가 2가 되고, 아래 구문이 실행된다
		*/
		if(args.length != 2) {
			System.out.println("프로그램의 사용법");
			System.out.println("java MainStringArrayArgument num1 num2");
			System.exit(0);
		}
		
		/*
		 * 이유를 살펴보자
		 * 프로그램 실행시 main함수의 인자 String[] args에 값을 넘겨줄 수 있다
		 * args는 배열임으로 length프로퍼티를 포함한다
		 * 공백으로 분리된 두 값 10 20을 넘겨줬음으로 배열의 길이는 2가 된다
		 * 하지만 분명 숫자를 보냈지만 인자의 자료형은 String이다
		 * 따라서 "10", "20"이 전달된 것이다 
		*/
		
		String strNum1 = args[0];
		String strNum2 = args[1];
		
//		String타입을 int타입으로 변환해주는 메서드이다
		int num1 = Integer.parseInt(strNum1);
		int num2 = Integer.parseInt(strNum2);
		
		int result = num1 + num2;
		System.out.println(num1 + " + " + num2 + " = " + result);
	}
}
