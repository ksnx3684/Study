class Foo{
	public static String classVar = "I class var"; // Ŭ���� �Ҽ�
	public String instanceVar = "I instance var"; // �ν��Ͻ� �Ҽ�
	
	public static void classMethod() {
		System.out.println(classVar); // Ŭ���� �Ҽӿ��� Ŭ������ ���� ����
		// System.out.println(instanceVar); // Ŭ���� �Ҽӿ��� �ν��Ͻ��� ���� �Ұ�
	}
	public void instanceMethod() {
		System.out.println(classVar); // �ν��Ͻ� �Ҽӿ��� Ŭ������ ���� ����
		System.out.println(instanceVar); // �ν��Ͻ� �Ҽӿ��� �ν��Ͻ��� ���� ����
	}
}
public class StaticApp {

	public static void main(String[] args) {
		System.out.println(Foo.classVar); // ���� ����
		// System.out.println(Foo.instanceVar); // ���� �Ұ�
		Foo.classMethod(); // ���� ����
		// Foo.instanceMethod(); // ���� �Ұ�
		
		Foo f1 = new Foo(); // f1 �ν��Ͻ� ����
		Foo f2 = new Foo(); // f2 �ν��Ͻ� ����
		
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
