

#include <stdio.h>

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
        case 2 :
            
            break;
        case 3 :
            // goi ten ham 
            break;
        case 0 :
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


int main()
{
    demomang2Chieu();
}

