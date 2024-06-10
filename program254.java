
import java.util.*;

class program254 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please  enter first  nember :");
        int iNO1 = sobj.nextInt();

        System.out.println("Please enter second nember :");
        int iNO2 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.CommonFactorsDisplay(iNO1, iNO2);

    }
}

class Numbers {
    public void CommonFactorsDisplay(int iNO1, int iNO2) {
        int iCnt = 0;

        System.out.println("common Factor are :");

        for (iCnt = 1; (iCnt <= iNO1 / 2) && (iCnt <= iNO2 / 2); iCnt++) {
            if ((iNO1 % iCnt == 0) && (iNO2 % iCnt == 0)) {
                System.out.println(iCnt);
            }
        }

    }

}
