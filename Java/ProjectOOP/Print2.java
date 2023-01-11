
class Print2 {
	public String delimiter = ""; // static이 있으면 클래스 소속, 없으면 인스턴스 소속
	
	public void A() {
		System.out.println(delimiter);
		System.out.println("A");
		System.out.println("A");	
	}
	
	public void B() {
		System.out.println(delimiter);
		System.out.println("B");
		System.out.println("B");
	}
}