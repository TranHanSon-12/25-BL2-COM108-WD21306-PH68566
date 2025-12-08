

#include <stdio.h>
void ss2So()
{
	int chon;
	do {
		int so1, so2;
		printf("moi nhap so thu nhat :");
		scanf("%d", &so1);
		printf("moi nhap so thu hai : ");
		scanf("%d", &so2);
		if (so1 > so2)
		{
			printf("so 1 lon hon so 2 ");
		}
		else
		{
			printf("so thu hai lon hon so thu nhat \n ");
		}
		printf("ban co muon tiep tuc truong tirnh khong [1:co|2:khong]\n");
		printf("lua chon cua ban : ");
		scanf("%d", &chon);
		if (chon != 1 && chon != 2)
		{
			printf("lua chon k hop le vui long nhap lai\n");
		}


	} while (chon != 2);
}

void nhap2tensv()
{
	char name[50][10];
	float tuoi[100];
	for (int i = 0; i < 2; i++)
	{
		printf("nhap ten nguoi dung :");
		scanf("%s", &name[i]);

		printf("nhap tuoi :");
		scanf("%f", &tuoi[i]);
	}
	for (int i = 0; i < 2; i++) {
		printf("Ten: %s - Tuoi: %.f \n", name[i], tuoi[i]);
	}

}

void sochiahetcho5()
{
	int n;
	int tong = 0;
	printf("moi nhap so :");
	scanf("%d", &n);
	printf("cac so nho hon %d chia het cho 5 la :\n", n);
	for (int i = 1; i < n; i++)
	{
		if (i % 5 == 0)
		{
			printf("%d\n", i);
			tong += i;
		}
		
	}
printf("tong cac so chia het cho 5 la :%d\n", tong);
}
int main()
{
	int luachon;
	do {
		printf("=====Menu======\n");
		printf("1: Cn1\n");
		printf("2: Cn2\n");
		printf("3: Cn3\n");
		printf("4: Cn4\n");
		printf("5: Cn5\n");
		printf("6: Cn6\n");
		printf("7: Cn7\n");
		printf("8: Cn8\n");
		printf("9: Cn9\n");
		printf("0:thoat\n");
		printf("lua chon cua ban :");
		scanf("%d", &luachon);
		switch(luachon)
		{
		case 1:
			ss2So();
			break;
		case 2:
			nhap2tensv();
			break;
		case 3:
			sochiahetcho5();
			break;
		case 4:
			// goi ten ham
			break;
		case 5:

			break;
		case 6 :

			break;
		case 7:

			break;
		case 8:

			break;
		case 9:

			break;
		default:
			printf("lua chon kh hop le , vui long nhap lai\n");
			break;
		}
	} while (luachon != 0);
}

