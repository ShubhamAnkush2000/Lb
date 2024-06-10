import java.util.*;

class program297 {
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

        while (iNo != 0) {

            iDigit = iNo % 10;
            System.out.print(iDigit + "\t");
            iNo = iNo / 10;
        }
        System.out.println();

    }
}