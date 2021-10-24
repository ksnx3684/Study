class Foo{
	public static String classVar = "I class var"; // 클래스 소속
	public String instanceVar = "I instance var"; // 인스턴스 소속
	
	public static void classMethod() {
		System.out.println(classVar); // 클래스 소속에선 클래스에 접근 가능
		// System.out.println(instanceVar); // 클래스 소속에선 인스턴스에 접근 불가
	}
	public void instanceMethod() {
		System.out.println(classVar); // 인스턴스 소속에선 클래스에 접근 가능
		System.out.println(instanceVar); // 인스턴스 소속에선 인스턴스에 접근 가능
	}
}
public class StaticApp {

	public static void main(String[] args) {
		System.out.println(Foo.classVar); // 접근 가능
		// System.out.println(Foo.instanceVar); // 접근 불가
		Foo.classMethod(); // 접근 가능
		// Foo.instanceMethod(); // 접근 불가
		
		Foo f1 = new Foo(); // f1 인스턴스 생성
		Foo f2 = new Foo(); // f2 인스턴스 생성
		
		System.out.println(f1.classVar); // I class var
		System.out.println(f1.instanceVar); // I instance var
		
		f1.classVar = "changed by f1";
		System.out.println(Foo.classVar); // changed by f1
		System.out.println(f2.classVar); // changed by f1
		
		f1.instanceVar = "changed by f1";
		System.out.println(f1.instanceVar); // changed by f1
		System.out.println(f2.instanceVar); // I instance var

	}

}
