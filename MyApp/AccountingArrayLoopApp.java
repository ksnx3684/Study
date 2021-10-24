
public class AccountingArrayLoopApp {

	public static void main(String[] args) {
	
		double valueOfSupply = Double.parseDouble(args[0]);
		double vat_rate = 0.1;
		double expense_rate = 0.3;
		double vat = valueOfSupply * vat_rate;
		double total = valueOfSupply + vat;
		double expense = valueOfSupply * expense_rate;
		double income = valueOfSupply - expense;
		
		System.out.println("Value of Supply : "+valueOfSupply);
		System.out.println("VAT : "+ vat);
		System.out.println("Total : "+ total);
		System.out.println("Expense : "+ expense);
		System.out.println("Income : "+ income);	
		
		double[] dividendRates = new double[3];
		dividendRates[0] = 0.5;
		dividendRates[1] = 0.3;
		dividendRates[2] = 0.2;
		
		int i = 0;
		while(i < dividendRates.length) {
			System.out.println("Dividend : "+ income * dividendRates[i]);
			i = i + 1;
		}
		
	}

}
