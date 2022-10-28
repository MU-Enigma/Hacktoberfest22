import java.util.Scanner;

class rithik_level1_prob2{

    //For Finding Squares of the Digits
    static int numSquareSum(int n)
    {
        int squareSum = 0;
        while (n!= 0)
        {
            squareSum += (n % 10) * (n % 10);
            n /= 10;
        }
        return squareSum;
    }
    // For Checking it is a Happy Number or Not
    static boolean isHappynumber(int n)
    {
        int first, next;

        first = next = n;
        do
        {
            first = numSquareSum(first);

            next = numSquareSum(numSquareSum(next));

        }
        while (first != next);
        {
            return (first == 1);
        }
    }

    //  this is the Main For Scanner
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        if(isHappynumber(x)){
            System.out.println("true");
        }else{
            System.out.println(false);
        }

    }
}
