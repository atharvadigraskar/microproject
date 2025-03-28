#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],b[100][100],mul[100][100],i,j,r,c,k,n;
	printf("------|WELCOME TO MATRIX CALCULATOR|------\n\n");
	printf("------------------------------------------");
	printf("\nenter the size of matrix:\n");
	scanf("%d%d",&r,&c);
	printf("------------------------------------------");
	printf("\nenter the elements of matrix A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------------\n");
	printf("display of matrix A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------------");
	printf("\nenter the elements of matrix B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------------\n");
	printf("display of matrix B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------------------");
	    printf("\naddition of matrix A & B:\n");
	    for(i=0;i<r;i++)
	   {
	   	for(j=0;j<c;j++)
	   	{
	   		printf("%d\t",a[i][j]+b[i][j]);
		}
		   printf("\n");
		} 
	printf("------------------------------------------");
	 printf("\nsubtraction of matrix A & B:\n");
	    for(i=0;i<r;i++)
	   {
	   	for(j=0;j<c;j++)
	   	{
	   		printf("%d\t",a[i][j]-b[i][j]);
		}
		   printf("\n");
		} 
	printf("------------------------------------------");
		printf("\nmultiplication of matrix A and B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------------------");
	int isIdentity = 1;
	for(int i = 0; i < r; i++)
	 {
        for(int j = 0; j < c; j++) 
		{
            if (i == j && a[i][j] != 1)
			{
                isIdentity = 0;
            }
            if (i != j && a[i][j] != 0) 
			{
                isIdentity = 0;
            }
        }
    }
    if(isIdentity && r == c)  
	{
        printf("\n A Matrix is an Identity Matrix.\n");
    } 
	else
	{
        printf("\n A Matrix is not an Identity Matrix.\n");
    }
    printf("------------------------------------------");
    int isNullMatrix = 1;
    for(int i = 0; i < r; i++) 
	{
        for(int j = 0; j < c; j++) 
		{
            if (b[i][j] != 0) 
			{
                isNullMatrix = 0;
            }
        }
    }
    if(isNullMatrix)
	 {
        printf("\n B Matrix is a Null Matrix.\n");
    } 
	else 
	{
        printf("\n B Matrix is not a Null Matrix.\n");
    }
    printf("------------------------------------------");
    int isDiagonalMatrix = 1;
    for(int i = 0; i < r; i++)
	 {
        for(int j = 0; j < c; j++)
		 {
            if(i != j && a[i][j] != 0)
	        {
                isDiagonalMatrix = 0;
            }
        }
    }
    if(isDiagonalMatrix) 
	{
    	printf("\n A Matrix is a Diagonal Matrix.\n");
    } 
	else 
	{
        printf("\n A Matrix is not a Diagonal Matrix.\n");
    }

	return 0;
}


