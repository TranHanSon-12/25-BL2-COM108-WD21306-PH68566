

#include <stdio.h>

void mangkytu()
{


    {
        double soThuc[5];
        double tong = 0;

        for (int i = 0; i < 5; i++)
        {
            printf("Nhap so thu %d: ", i + 1);
            scanf("%lf", &soThuc[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            tong += soThuc[i];
        }

        printf("Tong 5 so vua nhap la: %lf\n", tong);
    }

}
void demomang2Chieu()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("mang[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
		printf("\n");
    }
}
void demoString()
{
    // string
    char name[50] = { "Son" };// { 'A' 'B' 'C' '\0' }
    // gets(name); > fgets()
 //   for (int i = 0; i < 10; i++)
 //   {
 //       scanf(" %c", &name[i]);
 //   }
    //// xuat du lieu = for + printf
    while (getchar() != '\n');
    
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);

    printf("%s", name);
    printf("\n");
    // xuat du lieu = for + printf
  /*  puts(name);*/
}

void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            demomang2Chieu();
            break;
        case 2:
            mangkytu();
            break;
        case 3:
			demoString();
            break;
        case 0:
            return;
        default:
            printf("chon lai [0-3]");
            break;

        }
        printf("tiep tuc chuc nang nay? [1:co/0:khong]");
        scanf("%d", &tiepTuc);
        system("cls");
    }
}

int main()
{
    int chonChucNang;


    do
    {
        printf("menu\n");
        printf("1. demo mang 2 chieu \n");
        printf("2. demo mang ky tu\n");
        printf("3. demo chuoi ky tu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");

        scanf("%d", &chonChucNang);
        lapChucNang(chonChucNang);

    } while (chonChucNang != 0);
}

