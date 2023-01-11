// 클래스는 하나의 .java 파일에 코드를 짜놓을 수도 있지만, 이와 같이 파일로 따로 저장해 놓을 수도 있다.
class Print {
	public static String delimiter = ""; // 클래스 바로 아래에 delimiter 변수를 선언하여 모든 함수에서 사용할 수 있게 한다.
	public static void A() {
		System.out.println(delimiter);
		System.out.println("A");
		System.out.println("A");	
	}
	public static void B() {
		System.out.println(delimiter);
		System.out.println("B");
		System.out.println("B");
	}
}