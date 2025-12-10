#include <stdio.h>
void ttinspham()
{
	char name[3][50];
	int soLuong[30];
	
	for (int i = 0; i < 3; i++)
	{
		printf("moi nhap ten san pham :");
		scanf("%s", &name[i]);
		printf("moi nhap so luong :");
		scanf("%d", &soLuong[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("Ten sp : %s\n", name[i]);
		printf("so luong sp : %d\n", soLuong[i]);
	}
}

void sochiahetcho3()
{
	int n;
	int tong = 0;
	printf("moi nhap so :");
	scanf("%d", &n);
	printf("cac so nho hon %d chia het cho 3 la :\n", n);
	for (int i = 1; i < n; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
			tong += i;
		}
	}
	printf("tong cac so ho hon %d chia het cho 3 la :%d\n",n, tong);
}

void ttinnvien()
{
	int n;

	printf("Moi nhap so luong nhan vien: ");
	scanf("%d", &n);

	float luong[100];
	int dem = 0;   
	int viTri[100];
	int k = 0;   


	for (int i = 0; i < n; i++) {
		printf("Nhap muc luong cua nhan vien %d: ", i + 1);
		scanf("%f", &luong[i]);

		if (luong[i] > 5) {
			dem++;         
			viTri[k] = i + 1;
			k++;
		}
	}

	printf("\nSo luong nhan vien la: %d\n", n);
	printf("So nhan vien co muc luong tren 5 trieu la: %d\n", dem);

	printf("Vi tri cac muc luong > 5 trieu la: ");
	for (int i = 0; i < k; i++) {
		printf("%d ", viTri[i]);
	}

	printf("\n");
}


int main()
{
	int chon;
	do {
		printf("=====MENU======\n");
		printf("1:Thong Tin San Pham\n");
		printf("2:Trung Binh Cong Chia Het Cho 3\n");
		printf("3: Thong Tin Nhan Vien\n");
		printf("0: thoat\n");
		printf("lua chon cua ban :");
		scanf("%d", &chon);
		
		switch (chon)
		{
		case 1 :
		{
			ttinspham();
			break;
		}
		case 2:
		{
			sochiahetcho3();
			break;
		}
		case 3:
		{
			ttinnvien();
			break;
		}
		default:
		{
			printf("lua chon khong hop le , vui long nhap lai");
		}

		}

	} while (chon != 0);
	
}
