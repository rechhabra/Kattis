import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner kb = new Scanner(System.in);
    int x = kb.nextInt();
    int mbLeft = 0;
    int tc = kb.nextInt();
    for (int i = 0; i<tc; i++){
      int mbUsed = kb.nextInt();
      mbLeft+=x-mbUsed;
    }
    System.out.println(mbLeft+x);
  }
}
