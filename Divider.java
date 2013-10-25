import java.math.BigInteger;

public class Divider {
	static long best = 1;

	public static boolean isPrime(long num) {
		long temp = num / 2;
		for (long i = 2; i <= temp; i++) {
			if (num % i == 0)
				return false;
		}
		return true;
	}

	public static long findGreatestDivider(long num) {
		long temp = num / 2;
		for (long i = temp; i > 2; i--) {
			if (num % i == 0) {
				if (isPrime(i)) {
					best=i;
					return best;
				}
			}
		}
		return best;
	}

	public static void main(String[] args) {
		long number = 600851475143L;
		System.out.println("Start...");
		System.out.println(findGreatestDivider(number));
		System.out.println("End");
	}
}
