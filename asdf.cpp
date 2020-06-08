#include <stdio.h>
#include <stdlib.h>

struct Student
{
char ime[30];
char fam[30];
char fn[20];
 float mat1, mat2, fiz, SrUspeh;
};

int ReadGrupa ( struct Student *gr, int br);
int CalcSU (struct Student *gr, int br);
int ShowList (struct Student *gr, int br,float su);

int main ()
{
	FILE *fp;
	
	struct Student grupa [100];
	int i;
	int n;
	float su;
	broi = 0;
	counter = 0;
	
	printf ("Vavedete obsht broi studenti:\n" );
	 scanf ("%d",&n);
	 ReadGrupa (grupa,n);
	 CalcSU (grupa,n);
	 ShowList (grupa,n,5.00);
	 
	fp = fopen("test.txt","r");
	for (i = 0, i < c, i++)
	{
		fputc(gr[i].ime, fp);
		fputc(gr[i].fam, fp);
		fputc(gr[i].fn, fp);
		counter += 1
	}
	fclose(fp);
	 return 0;	
}
int ReadGrupa (struct Student *gr, int br)
{
	FILE *fp;
	fp = fopen("test.txt", "r+b");
	
	counter = 0;
	int i;
	for (i=0; i < br; i++)
	{
		printf ("Ime:\n");
		scanf ("%s",gr[i].ime);
		printf ("Familiq:\n");
		scanf ("%s",gr[i].fam);
		printf ("Fakulteten nomer:\n");
		scanf ("%s",gr[i].fn);
		printf ("Ocenka po Matematika1:\n");
		scanf ("%f",&gr[i].mat1);
		printf ("Ocenka po Matematika2:\n");
		scanf ("%f",&gr[i].mat2);
		printf ("Ocenka po Fizka:\n");
		scanf ("%f",&gr[i].fiz);
		if (gr[i].fiz <= 2.00)
		{
			fputc(gr[i].ime, fp);
			fputc(gr[i].fam, fp);
			fputc(gr[i].fn, fp);
			counter += 1;
		}
	}
	fclose(fp);
	
	return 0;	
}

int CalcSU (struct Student *gr, int br)
{
	int i;
	for (i=0; i < br; i++)
		gr[i].SrUspeh = (gr[i].mat1 + gr[i].mat2 + gr[i].fiz/3);
	return gr[i].SrUspeh;
}

int ShowList (struct Student *gr, int br, float su)
{
	int i, broi;
	broi = 0;
	for (i=0; i < br; i++)
		if (gr[i].fiz <= 2.00)
		{
			printf("%s, %s, %s, %f\n",gr[i].ime, gr[i].fam, gr[i].fn, gr[i].SrUspeh);
		}
		if (gr[i].SrUspeh >= su)
		{
			broi++;
			printf("%s, %s, %s, %f\n",gr[i].ime, gr[i].fam, gr[i].fn, gr[i].SrUspeh);
		}
	return broi;

}

