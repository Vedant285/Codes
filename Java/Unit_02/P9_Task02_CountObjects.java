class ABCD {
    static int a = 0;

    ABCD() {
        a++;
        System.out.println(a + " Objects are created ");
    }
}

public class P9_Task02_CountObjects {
    public static void main(String[] args) {
        ABCD obj = new ABCD();
        ABCD obj1 = new ABCD();
        ABCD obj2 = new ABCD();
        ABCD obj3 = new ABCD();
        ABCD obj4 = new ABCD();
        ABCD obj5 = new ABCD();
        ABCD obj6 = new ABCD();
    }
}
