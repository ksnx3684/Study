
class Print3 {
	public String delimiter = ""; // static�� ������ Ŭ���� �Ҽ�, ������ �ν��Ͻ� �Ҽ�
	public Print3(String delimiter) {
		this.delimiter = delimiter; // this.�� ������ �ν��Ͻ��� ����Ų��
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