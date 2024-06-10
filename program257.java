
import java.util.*;

class program257 {
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

    public boolean CheckArmstrong(int iNO) {
        int iDigitCount = 0;
        int iTemp = iNO;
        int iDigit = 0;
        int iCnt = 0, iPower = 1, iSum = 0;

        while (iTemp != 0) {
            iDigitCount++;
            iTemp = iTemp / 10;
        }
        iTemp = iNO;

        while (iTemp != 0) {
            iDigit = iTemp % 10;
            for (iCnt = 1; iCnt <= iDigitCount; iCnt++) {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iPower = 1;

            iTemp = iTemp / 10;
        }
        if (iSum == iNO) {
            return true;
        } else {
            return false;
        }

    }
}
