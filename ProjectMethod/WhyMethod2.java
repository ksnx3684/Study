
public class WhyMethod2 {

	public static void main(String[] args) {
		
					 //����, argument
		printTwoTimes("a", "-");
		// 1000000000
		printTwoTimes("a", "*");
		// 1000000000
		printTwoTimes("a", "&");
		printTwoTimes("b", "!");
		
	}
									// �Ű�����, paremeter
	public static void printTwoTimes(String text, String delimiter) {
		System.out.println(delimiter);
		System.out.println(text);
		System.out.println(text);
	}
}
