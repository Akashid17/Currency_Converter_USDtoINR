
def DollarToINR(fNo):

    if fNo < 0:
        fNo = -fNo

    return(fNo*70)

def main():

    fValue = float(input("Enter Amount in Dollar\n"))

    fAns = DollarToINR(fValue)

    print("Dollar to INR = ",fAns)

if __name__ == "__main__":
    main()