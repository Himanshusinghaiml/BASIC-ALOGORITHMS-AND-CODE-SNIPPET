  import java.util.*;
public class program2 {
    public static void main(String[] args) {
         
          
          
         System.out.println(" press 1: for sum");
         System.out.println(" press 2 : for subtraction : ");
         System.out.println(" press 3 : for multiplication : ");
         System.out.println(" press 4 : for division : ");
         System.out.println(" press 5 for exit : ");
          
         Scanner  sc =new Scanner( System.in);
          
         int n=sc.nextInt();
         while(5--){

         
         switch(n)
         {
            case 1:
            System.out.println(" enter the two numer : ");
            int num1= sc.nextInt();
            int num2=sc.nextInt();
            System.out.println(" sum : "+(num1+num2)); break;
            case 2:
            System.out.println(" enter the two numer : ");
            int num3= sc.nextInt();
            int num4=sc.nextInt();
            System.out.println(" subtraction: "+(num3-num4));break;
            case 3:
            System.out.println(" enter the two numer : ");
            int num5= sc.nextInt();
            int num6=sc.nextInt();
            System.out.println(" mulltiplication: "+(num5*num6)); break;
            case 4:
            System.out.println(" enter the two numer : ");
            int num= sc.nextInt();
            int num9=sc.nextInt();
            System.out.println(" didvision : "+(num/num9)); break;
            default:
            System.out.println(" enter the correct number : ");

         }
        }
    }
    
}
