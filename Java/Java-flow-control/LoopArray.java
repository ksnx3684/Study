
public class LoopArray {

	public static void main(String[] args) {
		
		/*
		 * <li>egoing</li>
		 * <li>byeonghun</li>
		 * <li>byeongsam</li>
		 */
		
		String[] users = new String[3];
		users[0] = "egoing";
		users[1] = "byeonghun";
		users[2] = "byeongsam";
		
		for(int i = 0; i < users.length; i++)
		{
			System.out.println("<li>"+users[i]+"</li>");
		}

	}

}
