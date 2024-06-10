import java.util.*;

class program291 {
    public static void main(String arg[]) {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number of rows :");
        int i = sobj.nextInt();
        System.out.println("enter number of Col :");
        int j = sobj.nextInt();

        pobj.Display(i, j);

    }
}

class Pattern {
    public void Display(int iRow, int iCol) {
        int i = 0, j = 0;
        int iCnt = 1;

        for (i = 1; i <= iRow; i++) {
            for (j = 1; j <= iCol; j++)

            {
                if (iCnt == 10) {
                    iCnt = 1;
                }
                System.out.print(iCnt + "\t");
                iCnt++;

            }
            System.out.println();
        }

    }
}