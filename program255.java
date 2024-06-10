
import java.util.*;

class program255 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please  enter first  nember :");
        int iNO = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.FactorsMultiplication(iNO);

        System.out.println("multiplication of factor of " + iNO + " is :" + iRet);
    }
}

class Numbers {
    public int FactorsMultiplication(int iNO) {
        int iCnt = 0;
        int iMult = 1;

        for (iCnt = 1; iCnt <= (iNO / 2); iCnt++) {
            if ((iNO % iCnt) == 0) {
                iMult = iMult * iCnt;
            }
        }
        return iMult;

    }

}
