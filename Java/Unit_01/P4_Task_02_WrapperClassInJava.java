public class P4_Task_02_WrapperClassInJava {
    public static void main(String[] args) {
        int a = 20;
        String s = " " + a + " ";
        Integer i = Integer.valueOf(123);
        Integer j = a;
        System.out.println(a + " " + i + " " + j);
        System.out.println(i.toString());
        byte b = 10;
        Byte byteobj = b;
        System.out.println(byteobj);
    }
}
