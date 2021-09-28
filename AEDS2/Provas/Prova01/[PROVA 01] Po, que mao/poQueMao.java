import java.io.*;
import java.util.*;

public class poQueMao {
    public static void main (String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        int s[] = new int[4];
        for (int i = 0; i < 4; i++) {
            s[i] = Integer.parseInt(br.readLine());
        }
        int doces = s[0];
        int count = 0;
        if((doces-(s[1]+s[2]+s[3]))>0){count +=3;}
        else if(((doces-(s[1]+s[2]))>0) || ((doces-(s[2]+s[3]))>0) || ((doces-(s[3]+s[1]))>0)){count +=2;}
        else if((doces-s[1]>0)||(doces-s[2]>0)||(doces-s[3]>0)){count +=1;}
        System.out.print(count);

    }
}
