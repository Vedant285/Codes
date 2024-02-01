import java.util.*;

class WebCount{
    public static int count=0;
    public synchronized void webCount(){
        count++;
    }
}

public class P14_Task02_Web_Count{
    public static void main(String args[]) throws InterruptedException{
        WebCount obj=new WebCount();
        Thread t1=new Thread(new Runnable(){
            @Override
            public void run(){
                for(int i=1;i<=1000;i++){
                    obj.webCount();
                }
            }
        });
        
        Thread t2=new Thread(new Runnable(){
            @Override
            public void run(){
                for(int i=1;i<=1000;i++){
                    obj.webCount();
                }
            }
        });
        t1.start();
        t2.start();
        t1.join();
        t2.join();
        System.out.println("Count "+ WebCount.count);
        //obj.webCount();
    }
}