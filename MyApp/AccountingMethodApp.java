
/* 메소드는 서로 연관된 코드를 그룹핑해서 이름을 붙인 정리정돈된 상자다.
메소드는 자주 사용하는 로직을 메소드로 만들어 호출하면 간편하게 로직을 재활용할 수 있기 때문에 사용한다.
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
