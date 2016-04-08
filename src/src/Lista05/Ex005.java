package Lista05;

public class Ex005 {

    public static void main(String[] args) {

        int i = 100;
        int j = 100;
        int n = 100;
        int sum = 0;

        for (i = 0, j = 17; i < n; i++, j--){

            sum += i * j + 3;

        }

        System.out.println(sum);

    }

}
