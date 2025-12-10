

#include <stdio.h>

void thongTinMonHoc()
{
	char ten[1][50];
	int maMon, soTinChi;
	int hocPhi = 0;

		printf("moi nhap ten mon hoc :");
		while (getchar() != '\n');
		fgets(ten, sizeof(ten), stdin);
		printf("moi nhap ma mon :");
		scanf("%d", &maMon);
		printf("moi nhap so tin chi :");
		scanf("%d", &soTinChi);
	
		printf("ten mon hoc la :%s", ten);
		printf("ma mon la :%d\n",maMon);
		printf("so tin chi la :%d\n", soTinChi);
		hocPhi = soTinChi * 500;
		printf("hoc phi la :%d\n", hocPhi);

}
void tinhTongSoLe()
{
	int n;
	int tong = 0;
	printf("moi ban nhap so :");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("%d la so chan\n", n);
	}
	else
	{
		printf("%d la so le\n", n);
	}
	for (int i = 0; i < n; i++)
	{
		tong += i;
		
	}
	printf("tong cac so nho hon %d la :%d",n, tong);
}
void thongTinDiemLap()
{
	int n;
	printf("moi nhap thong so sinh vien :");
	scanf("%d", &n);


}
int main()
{
	int chon;
	do {
		
		puts("=====MENU=====");
		puts("1. Thong Tin Mon Hoc");
		puts("2. Tinh tong so le");
		puts("3. Thong Tin diem lap");
		puts("0. Thoat");
		puts("Moi ban chon chuc nang [0-3]:");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			thongTinMonHoc();
			break;
		case 2:
			tinhTongSoLe();
			break;
		case 3:
			thongTinDiemLap();
			break;
		case 0:
			puts("dang thoat truong trinh");
			break;
		default:
			puts("lua chon khong hop le , vui long nhap lai [0-3]");
			break;
		}
	} while (chon == 0);
}