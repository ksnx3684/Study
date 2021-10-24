class Accounting{
	// 공급가액
    public double valueOfSupply;
    // 부가가치세율
    public static double vatRate = 0.1;
    // vatRate를 클래스 소속의 static으로 남겨두는 이유는 어차피 부가가치세는 10%인데 굳이 인스턴스로 두어서 매번 0.1을 새로 생성해서 메모리를 잡아먹지 않게 하기 위해서이다.
    // 또한, 만약 부가가치세가 변동이 있다면 저 부분만 수정함으로써 코드 유지보수의 편리성도 추구할 수 있다.
    public Accounting(double valueOfSupply) {
    	this.valueOfSupply = valueOfSupply;
    }
    public double getVAT() {
        return valueOfSupply * vatRate;
    }
    public double getTotal() {
        return valueOfSupply + getVAT();
    }
}

public class AccountingApp {
    public static void main(String[] args) {
    	Accounting a1 = new Accounting(10000.0);
    	Accounting a2 = new Accounting(20000.0);
    	
    	System.out.println("Value of supply : " + a1.valueOfSupply);
    	System.out.println("Value of supply : " + a2.valueOfSupply);
    	
    	System.out.println("VAT : " + a1.getVAT());
    	System.out.println("VAT : " + a2.getVAT());
    	
        System.out.println("Total : " + a1.getTotal());
        System.out.println("Total : " + a2.getTotal());
    }
}