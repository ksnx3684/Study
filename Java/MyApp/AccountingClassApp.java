
/* 클래스는 서로 연관된 변수와 메소드를 그룹핑한 것이다.
그리고 거기에 이름을 붙인 것이다.
역시나 정리 정돈의 상자다.
<클래스는 프로그램에 있는 객체의 모든 속성과 기능을 단일한 템플릿으로 결합하여 복잡한 프로그램을
이해하기 쉽고 사용하기 쉽게 정리하기 위해 사용한다.>
메소드 및 클래스는 소프트웨어 제작에 있어서 구조(뼈대)를 이루는 중요한 부분이다.
member란 클래스 소속의 변수 및 메소드를 말한다.
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
		 인스턴스는 하나의 클래스를 복제해서 서로 다른 데이터의 값과
		 서로 같은 메소드를 가진 복제본을 만드는 것이다.
		 인스턴스를 사용하는 이유는 하나의 클래스로 돌려막기 하지 않고
		 복제된 클래스를 이용해서 더 편리하고 버그가 적은 코딩을 하기 위해서다.
		 클래스는 그 기능을 변경하거나 수정할 수 있는 실체 코드가 있는 반면,
		 인스턴스는 그 클래스를 복제하여 수행하는 것이기 때문에 복제한 클래스 기능만 사용할 수
		 있는 가상의 클래스의 성격을 가지고 있다.*/
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
