import java.util.*;

class program253 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter nember :");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.EvenFactorsDisplay(iNo);

    }
}

class Numbers {
    public void EvenFactorsDisplay(int iNo) {
        int iCnt = 0;

        for (iCnt = 2; iCnt <= (iNo / 2); iCnt += 2) {
            if ((iNo % iCnt) == 0) {

                System.out.println("Even Factor is : " + iCnt);

            }
        }

    }

}
