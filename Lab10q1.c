# include <stdio.h>

int max ( int a , int b){
	if (a>b) return a;
	else return b;
}

int min ( int a , int b){
	if (a>b) return b;
	else return a;
}

int main(){

	int matrix[100][100], num_row, num_col, i, j, temp=0, answer=0;
	
	printf("Enter the dimensions of the matrix ");
	scanf("%d %d",&num_row,&num_col );
	printf("\n Enter the matrix:\n");
	for(i = 0; i<num_row ; i++){
		for(j=0; j<num_col; j++)
			scanf("%d", &matrix[i][j]);
	}

	int row_prod = 0;             //stores the consequtive product of 4 elements in a row.
	
	for(i = 0; i<num_row ; i++){
		row_prod = matrix[i][0] * matrix[i][1] * matrix[i][2] * matrix[i][3];
		temp = row_prod;
		for(j=4; j<num_col; j++){
			row_prod = row_prod/matrix[i][j-4]*matrix[i][j];
			temp = max(temp, row_prod);
		}
		answer = max(answer, temp);
	}

	int col_prod = 0;             //stores the consequtive product of 4 elements in a column.

	for(j = 0; j < num_col; j++){
		col_prod = matrix[0][j] * matrix[1][j] * matrix[2][j] * matrix[3][j];
		temp = col_prod;
		for(i=4; i<num_row; i++){
			col_prod = col_prod/matrix[i-4][j]*matrix[i][j];
			temp = max(temp, col_prod);
		}
		answer = max(answer, temp);
	}

	
	int diag_prod = 0,k, initx = 3, inity = 0;
	for(k=3; k < num_row + num_col - 4; k++){
		initx = min(k,num_row -1);
		inity = max(0,k - num_row + 1);

		diag_prod = matrix[initx][inity] * matrix[initx-1][inity+1] * matrix[initx-2][inity+2] * matrix[initx-3][inity+3];
		temp = diag_prod;
		i = initx - 4;
		j = inity + 4;
		for(; i>=0 && j<num_col ; i--,j++){
				diag_prod = diag_prod/matrix[i+4][j-4]*matrix[i][j];
				temp = max(temp, diag_prod);
			}	
		answer = max(answer, temp);

	}


	int rdiag_prod = 0;
	initx = 3, inity = num_col -1;
	for(k=3; k < num_row + num_col - 4; k++){
		initx = min(k,num_row -1);
		inity = min(num_col - 1,num_col-(k - num_row + 2));

		rdiag_prod = matrix[initx][inity] * matrix[initx-1][inity-1] * matrix[initx-2][inity-2] * matrix[initx-3][inity-3];
		temp = rdiag_prod;
		i = initx - 4;
		j = inity - 4;
		for(; i>=0 && j>=0; i--,j--){
				rdiag_prod = rdiag_prod/matrix[i+4][j+4]*matrix[i][j];
				temp = max(temp, rdiag_prod);
			}	
		answer = max(answer, temp);

	}

	printf("The largest product is %d\n",answer );

return 0;
}