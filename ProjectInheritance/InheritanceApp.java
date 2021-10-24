class Cal0 {
	public int sum(int v1, int v2) {
		return v1+v2;
	}
	// Overloading(메소드 중복생성)
	public int sum(int v1, int v2, int v3) {
		return this.sum(v1,v2)+v3;
	}
}
class Cal1 extends Cal0 {
	public int minus(int v1, int v2) {
		return v1-v2;
	}
	// Overriding(재정의)
	public int sum(int v1, int v2) {
		System.out.println("Cal1!!");
		return super.sum(v1,v2);
	}
}
public class InheritanceApp {
	public static void main(String[] args) {
		Cal0 c = new Cal0();
		System.out.println(c.sum(2, 1));
		System.out.println(c.sum(2, 1, 1));

		Cal1 c3 = new Cal1();
		System.out.println(c3.sum(2, 1));
		System.out.println(c3.minus(2, 1));
		System.out.println(c3.sum(2, 1));
	}
}