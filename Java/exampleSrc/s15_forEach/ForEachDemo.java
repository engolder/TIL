package s15_forEach;

public class ForEachDemo {
	public static void main(String[] args) {
		String[] colors = {"red", "blue", "green"};
		
		for(int i=0;i< colors.length; i++)
			System.out.println(colors[i]);
		
		System.out.println();
		
//		�迭�� �����Ҹ� ��ȸ�� ������ �Ʒ��� ���� for-each���� ����� �� �ִ�
//		���� for���̶�� ���ϸ� ������ �����ϴ�
		for(String color : colors) 
			System.out.println(color);
	}
}
