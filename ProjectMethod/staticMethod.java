// static�̶�� Ű���尡 ���� method�� class�� method��
// static�� ���� method�� instance�� method��.

class Print{
	public String delimiter;
	public void a() {
		System.out.println(this.delimiter);
		System.out.println("a");
		System.out.println("a");
	}
	
	public void b() {
		System.out.println(this.delimiter);
		System.out.println("b");
		System.out.println("b");
	}
	
	public static void c(String delimiter) {
		System.out.println(delimiter);
		System.out.println("b");
		System.out.println("b");
	}
}
public class staticMethod {
	
	public static void main(String[] args) {
		//Print.a("-");
		//Print.b("-");
		// ���⼭ �ؿ� t1�� instance
		Print t1 = new Print();
		t1.delimiter = "-";
		t1.a(); // - a, b�� instance �Ҽ�
		t1.b();
		Print.c("$"); // - c�� class �Ҽ�
		
		//Print.a("*");
		//Print.b("*");
		// t2�� ���������� instance
		Print t2 = new Print();
		t2.delimiter = "*";
		t2.a();
		t2.b();
	}
	// method�� instance �Ҽ��� ��쿡�� static�� ���־���Ѵ�.
	// method�� class �Ҽ��� ��� static�� �߰��ؾ� �Ѵ�.
	
}
