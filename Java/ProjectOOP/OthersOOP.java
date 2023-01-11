import java.io.FileWriter;
import java.io.IOException;

public class OthersOOP {

	public static void main(String[] args) throws IOException {
		// class : System, Math, FileWriter
		// instance : f1, f2
		
						//Math 클래스
		System.out.println(Math.PI); // 파이 변수
		System.out.println(Math.floor(1.8)); // 내림 메소드
		System.out.println(Math.ceil(1.8)); // 올림 메소드
		
		FileWriter f1 = new FileWriter("FEEL SO GOOD.txt");
		f1.write("메소드\n");
		f1.write("변수\n");
		f1.write("인스턴스");
		f1.close();
		
		FileWriter f2 = new FileWriter("FEEL SO GOOD!!.txt");
		f2.write("인스턴스1\n");
		f2.write("인스턴스2\n");
		f2.write("인스턴스3");
		f2.close();
		// FileWriter의 write나 close와 같은 메소드와 변수는 인스턴스를 생성하여 사용해야 하고 클래스에서 직접 호출할 수 없다. 
	}
	
}
