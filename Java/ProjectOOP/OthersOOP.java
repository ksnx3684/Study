import java.io.FileWriter;
import java.io.IOException;

public class OthersOOP {

	public static void main(String[] args) throws IOException {
		// class : System, Math, FileWriter
		// instance : f1, f2
		
						//Math Ŭ����
		System.out.println(Math.PI); // ���� ����
		System.out.println(Math.floor(1.8)); // ���� �޼ҵ�
		System.out.println(Math.ceil(1.8)); // �ø� �޼ҵ�
		
		FileWriter f1 = new FileWriter("FEEL SO GOOD.txt");
		f1.write("�޼ҵ�\n");
		f1.write("����\n");
		f1.write("�ν��Ͻ�");
		f1.close();
		
		FileWriter f2 = new FileWriter("FEEL SO GOOD!!.txt");
		f2.write("�ν��Ͻ�1\n");
		f2.write("�ν��Ͻ�2\n");
		f2.write("�ν��Ͻ�3");
		f2.close();
		// FileWriter�� write�� close�� ���� �޼ҵ�� ������ �ν��Ͻ��� �����Ͽ� ����ؾ� �ϰ� Ŭ�������� ���� ȣ���� �� ����. 
	}
	
}
