import java.util.*;

class program297 {
    public static void main(String arg[]) {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number of rows :");
        String s = sobj.nextLine();

        pobj.Display(s);

    }
}

class Pattern {
    public void Display(String str)

    {
        char Arr[] = str.toCharArray();
        int i = 0, j = 0;

        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr.length; j++) {
                System.out.print(Arr[j] + "\t");
            }
            System.out.println();
        }

    }
}