#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

	srand((int)time(NULL));
	int a, b;
	int c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0, c11 = 0, c12 = 0;

	for (int i = 0; i < 10000; i++)
	{
		a = (rand() % 6) + 1;
		b = (rand() % 6) + 1;


		switch (a + b) {
		case 2:
			c2 += 1;
			break;
		case 3:
			c3 += 1;
			break;
		case 4:
			c4 += 1;
			break;
		case 5:
			c5 += 1;
			break;
		case 6:
			c6 += 1;
			break;
		case 7:
			c7 += 1;
			break;
		case 8:
			c8 += 1;
			break;
		case 9:
			c9 += 1;
			break;
		case 10:
			c10 += 1;
			break;
		case 11:
			c11 += 1;
			break;
		case 12:
			c12 += 1;
			break;
		}

	}

	printf("點數和為2 : %2d\n", c2);
	printf("點數和為3 : %2d\n", c3);
	printf("點數和為4 : %2d\n", c4);
	printf("點數和為5 : %2d\n", c5);
	printf("點數和為6 : %2d\n", c6);
	printf("點數和為7 : %2d\n", c7);
	printf("點數和為8 : %2d\n", c8);
	printf("點數和為9 : %2d\n", c9);
	printf("點數和為10: %2d\n", c10);
	printf("點數和為11: %2d\n", c11);
	printf("點數和為12: %2d\n", c12);

	

	FILE* fp;
	float a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12;
	fp = fopen("prob2.1.txt", "w");
	
	fprintf(fp, "%f \n", a2/10000);
	fprintf(fp, "%f \n", a3 / 10000);
	fprintf(fp, "%f \n", a4 / 10000);
	fprintf(fp, "%f \n", a5 / 10000);
	fprintf(fp, "%f \n", a6 / 10000);
	fprintf(fp, "%f \n", a7 / 10000);
	fprintf(fp, "%f \n", a8 / 10000);
	fprintf(fp, "%f \n", a9 / 10000);
	fprintf(fp, "%f \n", a10 / 10000);
	fprintf(fp, "%f \n", a11 / 10000);
	fprintf(fp, "%f \n", a12 / 10000);


	fclose(fp);



	system("pause");

	return 0;

}