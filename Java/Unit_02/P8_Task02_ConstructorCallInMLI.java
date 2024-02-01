class A{
    A()
    {
        System.out.println("Constructor A");
    }
}
class B extends A{
    B(int a)
    {
        super();
        System.out.println("Constructor B");
    }
}
class C extends B{
    C()
    {
        super(123);
        System.out.println("Constructor C");
    }
}
public class P8_Task02_ConstructorCallInMLI {
    public static void main(String[] args) {
        C obj =new C();
    }
}
