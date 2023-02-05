import java.security.Principal;
import java.util.Scanner;

public class ttest {
    public void print(byte x) {
        System.out.print("byte-");
    }

    public void print(int x) {
        System.out.print("int- ");
    }

    public void print(float x) {
        System.out.print("float-");
    }

    public void print(Object x) {
        System.out.print("object-");
    }

    public static void main(String[] args) {
        Test t = new Test();
        short s = 123;
        t.print(s);
        t.print(true);
        t.print(6.789);
    }
}

Indexed Mode: the address of the operand is obtained by adding a constant of
the content of a register, called the index register.
Example: LOAD X(Rind), Ri ; Ri M[Rind + X]

This instruction loads register Ri with the contents of the memory location whose
address is the sum of the contents of register Rind and the value X. 