class Animal{
    void disp()
    {
        System.out.println("Inside Animal");
    }
}
class Mammal extends Animal{
    void disp2(){
        System.out.println("Inside Mammal");
    }
}
public class P8_Task01_InheritanceInJava
{
	public static void main(String[] args) {
	    Mammal k=new Mammal();
	    k.disp();
	    k.disp2();
	}
}
