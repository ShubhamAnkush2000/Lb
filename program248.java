import java.util.*;

class program248 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        int iNO1 = 0, iNO2 = 0, iAns = 0;

        System.out.println("Enter First number :");
        iNO1 = sobj.nextInt();

        System.out.println("Enter Second number :");
        iNO2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();
        iAns = aobj.AdditionS(iNO1, iNO2);

        System.out.println("Addition is :" + iAns);

    }

}

class Arithematic {
    public int AdditionS(int i, int j) {
        int Sum = 0;
        Sum = i + j;
        return Sum;
    }

}
