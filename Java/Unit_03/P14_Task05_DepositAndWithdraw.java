import java.util.*;
class Shared{
    int amount=10000;
    synchronized void withdraw(int ampunt){

        System.out.println("going to Withdraw...."+amount);
        if(this.amount<amount){
            System.out.println("LEss balance : Waiting for deposit...");
        }
        this.amount-=amount;
        if(this.amount<0){
            System.out.println("Negative Balance ");
        }
        System.out.println("Total amount is : "+this.amount);
    }
    synchronized void Deposit(int ampunt){
        this.amount+=amount;
        

    }
}
public class P14_Task05_DepositAndWithdraw{
    public static void main(String[] args) {
        
    }
}