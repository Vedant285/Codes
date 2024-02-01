import java.util.*;
// Pangram

public class P6_Task_05_StringInJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int len = s.length();
        if(len<26){
        System.out.println("False");
        return ;
        }
        int arr[]=new int[26];
        int start='a',end='z';
        for(char ch: s.toCharArray())
        {
            if(!(ch>=start && ch<=end)){
            System.out.println("Not");
            return ;}
            arr[ch-'a']++;
        }
        for(int i:arr)
        {
            if(i<1){
            System.out.println("Not");
            return ;}
        }
        System.out.println("Yes");
        
    }

}
