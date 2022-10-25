import java.util.HashMap;

// Coded by GeRmAnImAl

public class SingleNumber {
    public int singleNumber(int[] nums){
        HashMap<Integer, Integer> numsMap = new HashMap<Integer, Integer>();

        for(int num : nums){
            numsMap.put(num, numsMap.getOrDefault(num, 0) + 1);
        }

        for(int num : nums){
            if(numsMap.get(num) == 1){
                return num;
            }
        }
        return 0;
    }
}
