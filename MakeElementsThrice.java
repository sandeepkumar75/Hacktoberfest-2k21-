import java.util.function.Function;
import java.util.stream.Collectors;
import java.util.*;
public class MakeElementsThrice {
    public static void main(String args[]) {
      Function<List<Integer>,List<Integer>> fun = (arr) -> arr.stream().map((i)->i*i*i).collect(Collectors.toList());
      List<Integer> a1 = new ArrayList<>(Arrays.asList(2,43,5,4,12,13,67,88,90));
      List<Integer> a2 = new ArrayList<>(Arrays.asList(16,15,17,44,37,73,23,25,31));
      System.out.println(fun.apply(a1));
      System.out.println(fun.apply(a2));
    }
}
//OUTPUT IS
// [8, 79507, 125, 64, 1728, 2197, 300763, 681472, 729000]
// [4096, 3375, 4913, 85184, 50653, 389017, 12167, 15625, 29791]
