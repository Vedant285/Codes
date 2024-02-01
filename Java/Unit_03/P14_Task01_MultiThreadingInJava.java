import java.util.*;

class c1 {
    void show1() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value of a ");
        int a = sc.nextInt();
        System.out.println("Value of a: " + a);

    }
}

class c2 {
    void show2() {
        for (int i = 1; i < 10; i++) {
            System.out.println("value of i: " + i);
        }
    }
}

class t1 extends Thread {
    public void run() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value of a ");
        int a = sc.nextInt();
        System.out.println("Value of a: " + a);
        System.out.println(Thread.currentThread().getName());
    }

}

class t2 extends Thread {
    public void run() {
        for (int i = 1; i < 11; i++) {
            System.out.println("value of i: " + i);
        }
        System.out.println(Thread.currentThread().getName());
    }
}

public class P14_Task01_MultiThreadingInJava {
    public static void main(String[] args) {
        // c1 o = new c1();
        // c2 o2 = new c2();
        // o.show1();
        // o2.show2();
        Thread t11 = new Thread(new t1());
        Thread t22 = new Thread(new t2());
        t11.start();
        t22.start();
        System.out.println(Thread.currentThread().getName());
    }
}