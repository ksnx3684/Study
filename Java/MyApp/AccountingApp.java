import javax.swing.JOptionPane;

public class AccountingApp {

	public static void main(String[] args) {
		
		String id = JOptionPane.showInputDialog("Enter a Value of Supply");
	
		double valueOfSupply = Double.parseDouble(id);
		double vat_rate = 0.1;
		double expense_rate = 0.3;
		double vat = valueOfSupply * vat_rate;
		double total = valueOfSupply + vat;
		double expense = valueOfSupply * expense_rate;
		double income = valueOfSupply - expense;
		
		double dividend1 = income * 0.5;
		double dividend2 = income * 0.3;
		double dividend3 = income * 0.2;
		
		System.out.println("Value of Supply : "+valueOfSupply);
		System.out.println("VAT : "+ vat);
		System.out.println("Total : "+ total);
		System.out.println("Expense : "+ expense);
		System.out.println("Income : "+ income);	
		System.out.println("Dividend 1 : "+ dividend1);	
		System.out.println("Dividend 2 : "+ dividend2);		
		System.out.println("Dividend 3 : "+ dividend3);
		
	}

}
