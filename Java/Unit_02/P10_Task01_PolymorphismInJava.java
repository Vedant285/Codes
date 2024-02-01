class ABC {
    // OverLoading
    void add(int a, int b) {
        System.out.println(a + b);
    }

    void add(Double a, Double b) {
        System.out.println(a + b);
    }
}

class CBA extends ABC {
    // OverRiding
    void add(int a, int b) {
        System.out.println(a + b + 10);
    }

}

public class P10_Task01_PolymorphismInJava {
    public static void main(String[] args) {
        CBA k = new CBA();
        k.add(1, 1);
    }
}
