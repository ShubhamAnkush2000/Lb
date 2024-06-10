
import java.util.*;

class program256 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please  enter first  nember :");
        int iNO = sobj.nextInt();

        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmstrong(iNO);
        if (bRet == true) {
            System.out.println(iNO + "is  a Armstorong number ");
        } else {
            System.out.println(iNO + "is  a  not Armstorong number ");
        }

    }
}

class Digits {
    private int CountDigits(int iNO) {
        int iCnt = 0;
        while (iNO != 0) {
            iCnt++;
            iNO = iNO / 10;
        }
        return iCnt;

    }

    private int Power(int Base, int index) {
        int iAns = 1;

        for (int iCnt = 1; iCnt <= index; iCnt++) {
            iAns = iAns * Base;
        }
        return iAns;

    }

    public boolean CheckArmstrong(int iNO) {
        int iTemp = iNO;
        int iSum = 0;
        int iDigit = 0;
        int iRet = 0;

        int iCount = CountDigits(iNO);

        while (iNO != 0) {
            iDigit = iNO % 10;
            iRet = Power(iDigit, iCount);
            iSum = iSum + iRet;
            iNO = iNO / 10;

        }
        if (iSum == iTemp) {
            return true;
        } else {
            return false;

        }
    }

}
