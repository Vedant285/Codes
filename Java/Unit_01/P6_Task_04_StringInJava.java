import java.util.*;

class Roman {
    String IntToRoman(int num) {
        if (num < 1 || num > 3999) {
            return "Not Possible";
        }
        String s = "";
        while (num >= 1000) {
            s += "M";
            num -= 1000;
        }
        while (num >= 900) {
            s += "CM";
            num -= 900;
        }
        while (num >= 500) {
            s += "D";
            num -= 500;
        }
        while (num >= 90) {
            s += "XC";
            num -= 90;
        }
        while (num >= 50) {
            s += "L";
            num -= 50;
        }
        while (num >= 40) {
            s += "XL";
            num -= 40;
        }
        while (num >= 10) {
            s += "X";
            num -= 10;
        }
        while (num >= 9) {
            s += "IX";
            num -= 9;
        }
        while (num >= 5) {
            s += "V";
            num -= 5;
        }
        while (num >= 4) {
            s += "IV";
            num -= 4;
        }
        while (num >= 1) {
            s += "I";
            num -= 1;
        }
        return s;

    }
}

public class P6_Task_04_StringInJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        Roman Convert = new Roman();
        String Output = Convert.IntToRoman(num);
        System.out.println(Output);
    }
}
