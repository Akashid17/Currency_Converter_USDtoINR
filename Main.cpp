
#include<iostream>

using namespace std;

class Currency
{
    public:

        float DollarToINR(float);
};

float Currency::DollarToINR(float fNo) 
{
    if(fNo < 0)
    {
        fNo = -fNo;
    }

    return(fNo*70);
}

int main()
{
    float fValue = 0;
    float fAns = 0;

    cout<<"Enter Amount in USD\n";
    cin>>fValue;

    Currency cobj;
    fAns = cobj.DollarToINR(fValue);

    cout<<"Dollar to INR = "<<fAns<<endl;

    return 0;
}