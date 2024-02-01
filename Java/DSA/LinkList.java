import java.util.*;
    class Link{
    int n;
    Link next;
    Link(){
        this.n=n;
        next=null;
    }
    void Add(Link head,int n)
    {
        Link t=head;
        // Scanner sc=new Scanner(System.in);
        // int val=sc.nextInt();
        Link p=new Link();
        p.n=n;
        if(head==null)
        {
            head=p;
            p.next=null;
        }
        while(t.next!=null)
        {
            t=t.next;
        }
        t.next=p;
        p.next=null;
    }
    void Print(Link head)
    {
        Link t=head;
        while(t.next!=null)
        {
            System.out.print(t.n +"->");
        }
    }
}
class LinkList{

    public static void main(String[] args) {
        Link o=new Link();
        Link head=null;
        o.Add(head,10);
        o.Add(head,20);
        o.Add(head,30);
        o.Add(head,40);
        o.Add(head,50);
        o.Print(head);
    }
}