import java.util.Scanner;
public class TwoDimensional {

  

    public static void main(String[] args) {
        int size;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the aray");
        size = sc.nextInt();
        int[][] array= new int[50][50];

        TwoDimensional t = new TwoDimensional();

        t.getArray(array, size);
        t.displayArray(array, size);
    }
    

    public void getArray(int[][] array,int size){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the elements");
        for(int i=0; i<size; i++){
                for(int j=0; j<size; j++){
                    array[i][j]= sc.nextInt();
                }
        }
    }
    public void displayArray(int[][] array,int size){
        
        System.out.println("array :\n");
        for(int i=0; i<size; i++){
                for(int j=0; j<size; j++){
                    System.out.print(array[i][j]+" ");
                }
                System.out.println("\n");
        }
    }
}
