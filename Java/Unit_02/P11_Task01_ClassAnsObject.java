class Telcall {
    String phno, sname;
    int n, amt;

    Telcall(String phno, String sname, int n) {
        this.phno = phno;
        this.sname = sname;
        this.n = n;
        this.amt = 0;
    }

    void compute()
    {
        if(n<=100)
        {
            amt=500;
        }
        else if(n<=200)
        {
            amt=500+(n-100);
        }
        else if(n<=300)
        {
            amt=500 + 100 + ((n-200)*6)/5;
        }
        else{
            amt=500+100+240+((n-300)*3)/2;
        }
        
    }
    void display()
        {
            System.out.println("Phone no : "+phno);
            System.out.println("Subscriber name : "+sname);
            System.out.println("No. of Calls : "+n);
            System.out.println("Bill ampout in Rs. "+amt);
        }
}

public class P11_Task01_ClassAnsObject {
    public static void main(String[] args) {
        Telcall telcall = new Telcall("1234567890", "Vedant Shukla", 250);
        telcall.compute();
        telcall.display();
    }
}