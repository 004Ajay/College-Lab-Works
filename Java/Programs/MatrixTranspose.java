//Java program to display the transpose of a matrix.

import java.util.*;
class MatTranspose{

    //Method to get Matrix.
    static int[][] GetMatrix(int rows, int columns){
    Scanner scan = new Scanner(System.in); //new input stream for GetMatrix Function
    int[][] matrix = new int[10][10];
    int i, j;
    for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        System.out.print("Enter a["+(i+1)+"]["+(j+1)+"] value: ");
        matrix[i][j] = scan.nextInt();
    }
}
    scan.close();
    return matrix;
}

    //Method to print Matrix.
    static void PrintMatrix(int[][] prints, int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        System.out.print(prints[i][j]+"\t");
        }
    System.out.print("\n");
    }
}

    //Method to take Transpose
    static void TransposeMatrix(int[][] transpose, int rows, int columns){
    int i, j;
    for (i=0; i<columns; i++){
            for (j=0; j<rows; j++){
                    System.out.print(transpose[j][i]+"\t");
                    }
    System.out.print("\n");
    }
}
    //main method
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); //new input stream
        //int[][] matrix = new int[10][10];
        int rows, columns;

        System.out.print("Enter no. of rows:"); //Getting no. of Rows
        rows = scan.nextInt();
        System.out.print("Enter no. of columns:"); //Getting no. of Columns
        columns = scan.nextInt();
        
        scan.close();
        
        //Getting values of Matrix.
        int[][] matrix = GetMatrix(rows, columns);
        
        //Printing Matrix.
        System.out.print("\t\t\nInput Matrix:\n");
        PrintMatrix(matrix, rows, columns);
        
        //Transposing & printing Matrix 1
        System.out.print("\t\t\nTranspose of Matrix:\n");
        TransposeMatrix(matrix, rows, columns);
    }
}       