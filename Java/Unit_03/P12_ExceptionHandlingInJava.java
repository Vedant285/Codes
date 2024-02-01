import java.util.*;

class ExceptionHandling {
	int a, b;

	void basicException() {
		// UnHandled Exception
		b = 0;
		a = 100 / b;
		System.out.println(a);
		System.out.println("Done! ");
	}

	void handleException() {

		try {
			b = 0;
			a = 100 / b;
			System.out.println(a);
		} catch (ArithmeticException e) {
			System.out.println(e.getMessage());
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter non zero value ");
			b = sc.nextInt();
			a = 100 / b;
		}
		System.out.println(a);
		System.out.println("Done! ");
	}

	void multipleCatch() {

		try {
			b = 0;
			a = 100 / b;
			System.out.println(a);
		} catch (ArithmeticException e) {
			System.out.println(e.getMessage());
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}

	void inputMismatchException() {
		try {
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter a no. ");
			int n = sc.nextInt();
		} catch (InputMismatchException e) {
			System.out.println("Input Mismatch Issue ! ");
		}
	}

	void stackOverFlowError(int i) {
		try {
			while (a > 0) {
				i++;
				stackOverFlowError(i);
			}
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("Done! ");

	}

	void indexOutOfBoundExceptionPaer1() {
		int arr[] = { 1, 2, 3 };
		System.out.println(arr[10]);
	}

	void indexOutOfBoundExceptionPart2() {
		try {
			int[] mynum = { 1, 2, 3 };
			System.out.println(mynum[10]);
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println(e.getMessage());
		} finally {
			System.out.println("The try catch is finished ");
		}
		System.out.println("This 'try catch' is finished ");
	}

	void uncheckedException() {
		int b = 0;
		int a = 100 / b;
		System.out.println("Done");
	}

	void useOfThrow()  throws ManualException {
		int a = 110, c = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter value of b ");
		int b = sc.nextInt();
		if (b == 5) {
			throw new UserManualException();
		}
		c = a / b;
		System.out.println("c: " + c);
	}
	void nullPointerException(){
		String s=null;
		System.out.println(s.length());
	}

	void useOfThrows_And_Finally() {

	}

	void checkedException() {

	}

	void maualExceptionThrow() {

	}
}

class UserManualException extends Exception {
	@Override
	public String getMessage() {
		String detailMessage = "ManualException Occured ";
		return detailMessage;
	}

}

public class P14_ExceptionHandlingInJava {

	public static void main(String[] args) throws UserManualException {
		ExceptionHandling obj = new ExceptionHandling();
		// obj.basicException();
		// obj.handleException();
		// obj.multipleCatch();
		// obj.inputMismatchException();
		// obj.stackOverFlowError(10);
		// obj.indexOutOfBoundExceptionPaer1();
		// obj.indexOutOfBoundExceptionPart2();
		obj.useOfThrow();
		//obj.nullPointerException();
		// obj.useOfThrows_And_Finally();
		// obj.checkedException();
		// obj.uncheckedException();
		// obj.maualExceptionThrow();
	}
}
