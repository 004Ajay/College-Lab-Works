//Java program to multiply two matrices.

import java.util.*;
class MatMultiply{
    //Method to get Matrix1.
    static int[][] GetMatrix1(int rows, int columns){
    Scanner scan = new Scanner(System.in); //new input stream for GetMatrix Method
    int[][] matrix1 = new int[10][10];
    int i, j;
    for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        System.out.print("Enter a["+(i+1)+"]["+(j+1)+"] value: ");
        matrix1[i][j] = scan.nextInt();
    }
}
    return matrix1;
}
    //Method to get Matrix2.
    static int[][] GetMatrix2(int rows, int columns){
        Scanner scan = new Scanner(System.in); //new input stream for GetMatrix2 Method
        int[][] matrix2 = new int[10][10];
        int i, j;
        for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            System.out.print("Enter b["+(i+1)+"]["+(j+1)+"] value: ");
            matrix2[i][j] = scan.nextInt();
        }
    }
        scan.close();
        return matrix2;
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
    
    //Method to Multiply Matrices
    static void MultiplyMat(int[][] matrix1, int[][] matrix2, int[][] matrix3, int row1, int column1, int column2){
    	int i, j, k;
    	for( i= 0 ; i < row1 ; i++ ) {
			for ( j= 0 ; j < column2;j++){
    		     for ( k= 0 ; k < column1; k++ ){
    		    	 matrix3[i][j] = matrix3[i][j] + (matrix1[i][k] * matrix2[k][j]);
    		           }
    		     System.out.print(matrix3[i][j] + " ");
    		}
			System.out.println();
 	}
}
    
     //main method
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); //new input stream
        int row1, column1, row2, column2;

        System.out.print("Enter no. of rows & column in Matrix1: "); //Getting no. of Rows
        row1 = scan.nextInt();
        column1 = scan.nextInt();
        System.out.print("Enter no. of rows & columns in Matrix2: "); //Getting no. of Columns
        row2 = scan.nextInt();
        column2 = scan.nextInt();
        
        scan.close();
    
        //Checking whether matrices can be multiplied or not (column1 = row2).
        if(column1 == row2) {
        	System.out.print("Matrix can be multiplied\n");
            
            //Getting values of Matrix1 & Matrix2.
            int[][] matrix1 = GetMatrix1(row1, column1);
            int[][] matrix2 = GetMatrix2(row2, column2);
            int matrix3[][] = new int[row1][column2]; //initializing matrix3
            
            //Printing Matrix1 & Matrix2 
            System.out.print("\t\t\nInput Matrix1:\n");
            PrintMatrix(matrix1, row1, column1);
            System.out.print("\t\t\nInput Matrix2:\n");
            PrintMatrix(matrix2, row2, column2);
            
            //Multiplying two matrices & printing the resultant
            System.out.print("\t\t\nResultant Matrix:\n");
            MultiplyMat(matrix1, matrix2, matrix3, row1, row2, column2);
    }
        else
        	System.out.print("Matrix cannot be multiplied\n");
    }
    
}    