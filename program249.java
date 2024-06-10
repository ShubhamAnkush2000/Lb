import java.util.*;

class program249 {
    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);

        int iNO1 = 0, iNO2 = 0, iAns = 0;

        System.out.println("Enter First number :");
        iNO1 = sobj.nextInt();

        System.out.println("Enter Second number :");
        iNO2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNO1, iNO2);
        iAns = aobj.AdditionS();

        System.out.println("Addition is :" + iAns);

    }

}

class Arithematic {
    public int iValue1;
    public int iValue2;

    public Arithematic(int i, int j) {
        iValue1 = i;
        iValue2 = j;
    }

    public int AdditionS() {
        int Sum = 0;
        Sum = iValue1 + iValue2;
        return Sum;
    }

}
