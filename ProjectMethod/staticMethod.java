// static이라는 키워드가 붙은 method는 class의 method다
// static이 없는 method는 instance의 method다.

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
		// 여기서 밑에 t1은 instance
		Print t1 = new Print();
		t1.delimiter = "-";
		t1.a(); // - a, b는 instance 소속
		t1.b();
		Print.c("$"); // - c는 class 소속
		
		//Print.a("*");
		//Print.b("*");
		// t2도 마찬가지로 instance
		Print t2 = new Print();
		t2.delimiter = "*";
		t2.a();
		t2.b();
	}
	// method가 instance 소속일 경우에는 static을 빼주어야한다.
	// method가 class 소속인 경우 static을 추가해야 한다.
	
}
