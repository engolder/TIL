package s21_finalAndStatic;

public class MOX {
	public static void main(String[] args) {
		
		ScoreOX[] students = new ScoreOX[5];
		students[0] = new ScoreOX(1,"루리",new int[]{1,2,1,3,4});
		students[1] = new ScoreOX(2,"루세",new int[]{1,1,1,1,1});
		students[2] = new ScoreOX(3,"루오",new int[]{1,2,1,3,1});
		students[3] = new ScoreOX(4,"폴리",new int[]{1,1,1,3,1});
		students[4] = new ScoreOX(5,"밀로",new int[]{1,4,2,5,4});
		
		for(int i = 0; i<students.length; i++)
			students[i].compute();
		ScoreOX.Ranking(students);
		
		System.out.println("* * 시험결과 * *");
		System.out.println();
		System.out.println("------------------------");
		System.out.println(" 번호 이름 1 2 3 4 5 점수 등수");
		System.out.println("------------------------");
		for(int i=0; i<students.length; i++)
			students[i].display();
		System.out.println();
		System.out.println("전체맞은 개수 = "+ScoreOX.tot);
	}
}
class ScoreOX {
	private int no; // 번호 
	private int cnt; // 맞는 개수
	private int score; // 점수
	private int rank=1; // 순위
	private char[] c_ox = new char[5]; // o,x
	private String name; // 이름
	private int[] dap; // 입력한 답
	public static int tot; // 전체 맞는 정답 수
	final static int[] answer = {1, 1, 1, 1, 1}; // 정답
	
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
