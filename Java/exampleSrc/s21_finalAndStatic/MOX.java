package s21_finalAndStatic;

public class MOX {
	public static void main(String[] args) {
		
		ScoreOX[] students = new ScoreOX[5];
		students[0] = new ScoreOX(1,"�縮",new int[]{1,2,1,3,4});
		students[1] = new ScoreOX(2,"�缼",new int[]{1,1,1,1,1});
		students[2] = new ScoreOX(3,"���",new int[]{1,2,1,3,1});
		students[3] = new ScoreOX(4,"����",new int[]{1,1,1,3,1});
		students[4] = new ScoreOX(5,"�з�",new int[]{1,4,2,5,4});
		
		for(int i = 0; i<students.length; i++)
			students[i].compute();
		ScoreOX.Ranking(students);
		
		System.out.println("* * ������ * *");
		System.out.println();
		System.out.println("------------------------");
		System.out.println(" ��ȣ �̸� 1 2 3 4 5 ���� ���");
		System.out.println("------------------------");
		for(int i=0; i<students.length; i++)
			students[i].display();
		System.out.println();
		System.out.println("��ü���� ���� = "+ScoreOX.tot);
	}
}
class ScoreOX {
	private int no; // ��ȣ 
	private int cnt; // �´� ����
	private int score; // ����
	private int rank=1; // ����
	private char[] c_ox = new char[5]; // o,x
	private String name; // �̸�
	private int[] dap; // �Է��� ��
	public static int tot; // ��ü �´� ���� ��
	final static int[] answer = {1, 1, 1, 1, 1}; // ����
	
	ScoreOX(int no, String name, int[] dap) {
		this.no = no;
		this.name = name;
		this.dap = dap;
	}
	
	public void compute() {
		for(int i = 0; i< answer.length; i++) {
			if(dap[i] == answer[i]) { cnt++; c_ox[i] = 'o'; }
			else { c_ox[i] = 'x'; }			
		}
		
		tot += cnt;
		score = cnt*20;
	}
	
	public void display() {
		System.out.print("  "+no);
		System.out.print(" "+name);
		for(int i = 0; i < c_ox.length ; i++)
			System.out.print(" "+c_ox[i]);
		System.out.printf("%4d",score);
		System.out.print(" "+rank);
		System.out.println();
	}
	
	public static void Ranking(ScoreOX[] students) {
		for(int i =0; i< students.length; i++)
			for(int j=0; j< students.length; j++)
				if(students[i].score < students[j].score) students[i].rank++;
	}
}
