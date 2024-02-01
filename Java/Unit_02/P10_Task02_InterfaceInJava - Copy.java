interface Animal {
    public void AnimalSound();

    public void run1();
}

interface Human {
    public void HumanSound();

    public void run2();
}

class Species implements Animal, Human {
    public void AnimalSound() {
        System.out.println("The animal makes a sound....");
    }

    public void run1() {
        System.out.println("The animal runs....");
    }

    public void HumanSound() {
        System.out.println("The Human Speaks....");
    }

    public void run2() {
        System.out.println("The human runs...");
    }
}

public class P10_Task02_InterfaceInJava {
    public static void main(String args[]) {
        Species species = new Species();
        species.AnimalSound();
        species.run1();
        species.HumanSound();
        species.run2();
    }
}