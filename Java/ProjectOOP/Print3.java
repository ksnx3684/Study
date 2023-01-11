
class Print3 {
	public String delimiter = ""; // static이 있으면 클래스 소속, 없으면 인스턴스 소속
	public Print3(String delimiter) {
		this.delimiter = delimiter; // this.은 생성한 인스턴스를 가리킨다
	}
	public void A() {
		System.out.println(this.delimiter);
		System.out.println("A");
		System.out.println("A");	
	}
	
	public void B() {
		System.out.println(this.delimiter);
		System.out.println("B");
		System.out.println("B");
	}
}