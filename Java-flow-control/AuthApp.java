
public class AuthApp {

	public static void main(String[] args) {
		
		String id = "ksnx3684";
		String inputID = args[0];
		
		String pass = "1111";
		String inputPass = args[1];
		
		System.out.println("Hi");
		
		if(inputID.equals(id) && inputPass.equals(pass))
		{
			System.out.println("Hello Master!");
		}
		else
		{
			System.out.println("Who are you?");
		}

	}

}
