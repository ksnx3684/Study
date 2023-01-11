
/* Ŭ������ ���� ������ ������ �޼ҵ带 �׷����� ���̴�.
�׸��� �ű⿡ �̸��� ���� ���̴�.
���ó� ���� ������ ���ڴ�.
<Ŭ������ ���α׷��� �ִ� ��ü�� ��� �Ӽ��� ����� ������ ���ø����� �����Ͽ� ������ ���α׷���
�����ϱ� ���� ����ϱ� ���� �����ϱ� ���� ����Ѵ�.>
�޼ҵ� �� Ŭ������ ����Ʈ���� ���ۿ� �־ ����(����)�� �̷�� �߿��� �κ��̴�.
member�� Ŭ���� �Ҽ��� ���� �� �޼ҵ带 ���Ѵ�.
*/

class Accounting {
	public double valueOfSupply;
	public double vat_rate;
	public double expense_rate;
	
	public void print() {
		System.out.println("Value of Supply : " + valueOfSupply);
		System.out.println("VAT : " + getVAT());
		System.out.println("Total : " + getTotal());
		System.out.println("Expense : " + getExpense());
		System.out.println("Income : " + getIncome());
		System.out.println("Dividend 1 : " + getDividend1());
		System.out.println("Dividend 2 : " + getDividend2());
		System.out.println("Dividend 3 : " + getDividend3());
	}

	public double getDividend1() {
		return getIncome() * 0.5;
	}
	
	public double getDividend2() {
		return getIncome() * 0.3;
	}
	
	public double getDividend3() {
		return getIncome() * 0.2;
	}

	public double getIncome() {
		return valueOfSupply - getExpense();
	}

	public double getExpense() {
		return valueOfSupply * expense_rate;
	}

	public double getTotal() {
		return valueOfSupply + getVAT();
	}

	public double getVAT() {
		return valueOfSupply * vat_rate;
	}
}

public class AccountingClassApp {

	public static void main(String[] args) {
	
		/* instance
		 �ν��Ͻ��� �ϳ��� Ŭ������ �����ؼ� ���� �ٸ� �������� ����
		 ���� ���� �޼ҵ带 ���� �������� ����� ���̴�.
		 �ν��Ͻ��� ����ϴ� ������ �ϳ��� Ŭ������ �������� ���� �ʰ�
		 ������ Ŭ������ �̿��ؼ� �� ���ϰ� ���װ� ���� �ڵ��� �ϱ� ���ؼ���.
		 Ŭ������ �� ����� �����ϰų� ������ �� �ִ� ��ü �ڵ尡 �ִ� �ݸ�,
		 �ν��Ͻ��� �� Ŭ������ �����Ͽ� �����ϴ� ���̱� ������ ������ Ŭ���� ��ɸ� ����� ��
		 �ִ� ������ Ŭ������ ������ ������ �ִ�.*/
		Accounting a1 = new Accounting();
		a1.valueOfSupply = 10000.0;
		a1.vat_rate = 0.1;
		a1.expense_rate = 0.3;
		a1.print();
		
		Accounting a2 = new Accounting();
		a2.valueOfSupply = 20000.0;
		a2.vat_rate = 0.05;
		a2.expense_rate = 0.2;
		a2.print();
		
	}

}
