import java.util.*;

public class program1 {
    public static void main(String[] args) {
        Scanner sc =new Scanner( System.in);
        System.out.println(" enter the numbewr to check the even or odd : ");
        int num= sc.nextInt();
        if(num%2==0)
        {
            System.out.println(" even : ");
        }
        else{
            System.out.println(" odd :  ");
        }
    }
}
