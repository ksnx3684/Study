
/* �޼ҵ�� ���� ������ �ڵ带 �׷����ؼ� �̸��� ���� ���������� ���ڴ�.
�޼ҵ�� ���� ����ϴ� ������ �޼ҵ�� ����� ȣ���ϸ� �����ϰ� ������ ��Ȱ���� �� �ֱ� ������ ����Ѵ�.
*/
public class AccountingMethodApp {

	public static double valueOfSupply;
	public static double vat_rate;
	public static double expense_rate;
	public static void main(String[] args) {
	
		valueOfSupply = 10000.0;
		vat_rate = 0.1;
		expense_rate = 0.3;
		
		print();
		
	}

	public static void print() {
		System.out.println("Value of Supply : " + valueOfSupply);
		System.out.println("VAT : " + getVAT());
		System.out.println("Total : " + getTotal());
		System.out.println("Expense : " + getExpense());
		System.out.println("Income : " + getIncome());
		System.out.println("Dividend 1 : " + getDividend1());
		System.out.println("Dividend 2 : " + getDividend2());
		System.out.println("Dividend 3 : " + getDividend3());
	}

	public static double getDividend1() {
		return getIncome() * 0.5;
	}
	
	public static double getDividend2() {
		return getIncome() * 0.3;
	}
	
	public static double getDividend3() {
		return getIncome() * 0.2;
	}

	public static double getIncome() {
		return valueOfSupply - getExpense();
	}

	public static double getExpense() {
		return valueOfSupply * expense_rate;
	}

	public static double getTotal() {
		return valueOfSupply + getVAT();
	}

	public static double getVAT() {
		return valueOfSupply * vat_rate;
	}

}
