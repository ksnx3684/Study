public class AccountingAppMethod {
	// 공급가액
	public static double valueOfSupply = 10000.0;
	// 부가가치세율
	public static double vat_rate = 0.1;
	
	public static double getVAT() {
		return valueOfSupply * vat_rate;
	}
	public static double getTotal() {
		return valueOfSupply + getVAT();
	}
	
	public static void main(String[] args) {
		
		System.out.println("Value of Supply : "+valueOfSupply);
		System.out.println("VAT : "+ getVAT());
		System.out.println("Total : "+ getTotal());
		
	}

}