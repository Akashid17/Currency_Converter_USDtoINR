
using System;

class Currency
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

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Amount in USD");
		float fValue = float.Parse(Console.ReadLine());

		Currency cobj = new Currency();
		float fAns = cobj.DollarToINR(fValue);

		Console.WriteLine("Dollar to INR = "+fAns);
	}
}