

#include <stdio.h>

void timSoNGuyen()
{

}
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            timSoNGuyen();
            break;
        case 2 :
            // goi ten ham 
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
int main()
{
    int chonChucNang;

   
    do
    {
        printf("menu\n");
        printf("1. Kiem Tra so nguyen \n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");

        scanf("%d", &chonChucNang);
        lapChucNang(chonChucNang);

    } while (chonChucNang != 0);
}
