package s06_encapsulation;

class FuncA {
	public void calDegree() {
		System.out.println("���԰����� ����մϴ�");
	}
}

class FuncB {
	public void speedDown() {
		System.out.println("�ӵ��� ���Դϴ�");
	}
}

class FuncC {
	public void revAnLanding() {
		System.out.println("������ �� ��������!!");
	}
}

class Control {
//	������ �ִ� ������ �޼������ �ϳ��� Ŭ������ ���´�
	FuncA fa;
	FuncB fb;
	FuncC fc;
	
	Control() {
		fa = new FuncA();
		fb = new FuncB();
		fc = new FuncC();
	}
	
	public void controlSpaceShip() {
		fa.calDegree();
		fb.speedDown();
		fc.revAnLanding();
	}
}

class Astronaut {
	public void controlShip(Control con) {
		con.controlSpaceShip();
	}
}

public class EncapsulationExam {
//	���� ���α׷������� ������ ���� ������ �ʿ䰡 ����
	public static void main(String[] args) {
		Astronaut pilot = new Astronaut();
		pilot.controlShip(new Control());
	}
}
