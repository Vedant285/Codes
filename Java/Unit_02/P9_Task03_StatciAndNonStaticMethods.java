import javax.sql.rowset.spi.SyncResolver;

class ABCD {
    int a = 11;
    static int b = 12;

    void m1() {
        System.out.println(a + b);
    }

    static void m2() {
        System.out.println(b);
    }
}

public class P9_Task03_StatciAndNonStaticMethods {
    public static void mains(String args[])
    {
        ABCD obj=new ABCD();
    System.out.println(obj.a);
    System.out.println(obj.b);
    System.out.println(ABCD.b);
    obj.m2();
    ABCD.m2();
    }

}
