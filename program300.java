import java.util.*;

class program300 {
    public static void main(String arg[]) {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number of rows :");
        int i = sobj.nextInt();

        pobj.Display(i);

    }
}

class Pattern {
    public void Display(int iNo) {

        int iDigit = 0;
        int iTemp1 = iNo;
        int iTemp2 = iNo;

        while (iTemp1 != 0) {

            while (iTemp2 != 0) {

                iDigit = iTemp2 % 10;
                System.out.print(iDigit + "\t");
                iTemp2 = iTemp2 / 10;
            }
            iTemp2 = iNo;
            System.out.println();
            iTemp1 = iTemp1 / 10;
        }
        System.out.println();

    }
}