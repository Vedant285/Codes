import java.util.*;
public class P14_Task04_ProducerAndConsumer {
    public static void main(String[] args){
        Queue<Integer>buffer=new LinkedList<>();
        int maxSize=10;
        Thread producer=new producer(buffer,maxSize,"PRODUCER");
        Thread consumer=new consumer(buffer,maxSize,"CONSUMER");
        producer.start();
        consumer.start();
    }
}

class producer extends Thread{

}
class consumer extends Thread{
    
}

