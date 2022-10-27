import java.util.Arrays;

public class rithik_level1_problem5 {
    public static void main(String[] args){
        String[] array ={"h","e","l","l","o"};
        System.out.println("Array is = " + Arrays.toString(array));
        reverse(array);
    }
    public static void reverse(String[] array){
        int Maxindex=array.length-1;
        String[] arrayTemp= Arrays.copyOf(array,array.length);
        for(int i=0; i<arrayTemp.length;i++){
            arrayTemp[i]=array[(array.length-1)-i];
        }
        System.out.println("Array Reversed = "+ Arrays.toString(arrayTemp));
    }
}
