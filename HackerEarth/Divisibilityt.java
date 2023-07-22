import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String name = br.readLine();                // Reading input from STDIN
        int n=Integer.parseInt();
        int a[]=new int[n] ;
        for(int i=0;i<n;i++)
        {
            a[i]=Integer.parseInt();
        }  
        int s=0;int k=0;
        for(int j=0;j<n;j++)
        {
            s=(s*10)+a[j]%10;
        }
        if(s%10==0)
        System.out.println("yes");
        else
        System.out.println("NO");
    }
}
