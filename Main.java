
import java.lang.*;
import java.util.*;

class CurrencyX
{
	public float DollarToINR(float fNo)
	{
		if(fNo < 0)
		{
			fNo = -fNo;
		}

		return(fNo*70);
	}
}

class Main
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Amount in USD");
		float fValue = sobj.nextFloat();

		CurrencyX cobj = new CurrencyX();
		float fAns = cobj.DollarToINR(fValue);
		
		System.out.println("Dollar to INR = "+fAns);
	}
}