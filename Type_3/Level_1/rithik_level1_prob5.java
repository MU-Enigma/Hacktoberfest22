import java.util.Scanner;

class rithik_level1_prob5 {
    public static void main (String[] args) {
        Scanner sc=new Scanner(System.in);
        String string=sc.nextLine();

        String nstr="";
        char letter;
        //Example word

        for (int i=0; i<string.length(); i++)
        {
            letter= string.charAt(i); //extracts each character
            nstr= letter+nstr; //adds each character in front of the existing string
        }
        System.out.println(nstr);
    }
}