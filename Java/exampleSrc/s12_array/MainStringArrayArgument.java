package s12_array;

public class MainStringArrayArgument {
	public static void main(String[] args) {
		
 		/*
 		 * ���� ��Ű�� �Ʒ� ������ ���� true�� �Ǵ� ���� �� �� �ִ�
		 * eclipse�޴����� Run - Run Configurations - Arguments��
 		 * Program arguments��
 		 * 10 20
 		 * �� ���� �ٽ� ������Ѻ���
 		 * length�� 2�� �ǰ�, �Ʒ� ������ ����ȴ�
		*/
		if(args.length != 2) {
			System.out.println("���α׷��� ����");
			System.out.println("java MainStringArrayArgument num1 num2");
			System.exit(0);
		}
		
		/*
		 * ������ ���캸��
		 * ���α׷� ����� main�Լ��� ���� String[] args�� ���� �Ѱ��� �� �ִ�
		 * args�� �迭������ length������Ƽ�� �����Ѵ�
		 * �������� �и��� �� �� 10 20�� �Ѱ��������� �迭�� ���̴� 2�� �ȴ�
		 * ������ �и� ���ڸ� �������� ������ �ڷ����� String�̴�
		 * ���� "10", "20"�� ���޵� ���̴� 
		*/
		
		String strNum1 = args[0];
		String strNum2 = args[1];
		
//		StringŸ���� intŸ������ ��ȯ���ִ� �޼����̴�
		int num1 = Integer.parseInt(strNum1);
		int num2 = Integer.parseInt(strNum2);
		
		int result = num1 + num2;
		System.out.println(num1 + " + " + num2 + " = " + result);
	}
}
