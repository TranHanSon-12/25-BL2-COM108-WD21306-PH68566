
#include <stdio.h>
void ktrasoNguyen()
{
    int luaChon;
    do
    {
        printf("Kiem tra so nguyen\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void timUocchungBoichung()
{
    int luaChon;
    do
    {
        printf("Tim Uoc chung va Boi chung\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void tinhTienKaraoke()
{
    int luaChon;
    do
    {
        printf("Tinh tien Karaoke\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void tinhTienDien()
{
    int luaChon;
    do
    {
        printf("Tinh tien dien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void doiTien()
{
    int luaChon;
    do
    {
        printf("Chuc nang doi tien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void laiXuatNganHang()
{
    int luaChon;
    do
    {
        printf("Lai xuat vay ngan hang, vay tra gop\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void vayTienMuaXe()
{
    int luaChon;
    do
    {
        printf("Vay tien mua xe\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void sxTTSv()
{
    int luaChon;
    do
    {
        printf("Sap xep thong tin sinh vien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void gameFpoly()
{
    int luaChon;
    do
    {
        printf("Game FPOLY-LOTT\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}

void tinhPhanSo()
{
    int luaChon;
    do
    {
        printf("Tinh phan so\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }
    } while (luaChon != 2);
}

int main()
{

    int chon;
    int luaChon;
    do
    {
        printf("------Menu chuong trinh------\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim Uoc chung va Boi chung\n");
        printf("3.Tinh tien Karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Chuc nang doi tien\n");
        printf("6.Lai xuat vay ngan hang,vay tra gop\n");
        printf("7.Vay tien mua xe\n");
        printf("8.sap xep thong tin sinh vien\n");
        printf("9.Game FPOLY-LOTT\n");
        printf("10.Tinh phan so\n");
        printf("0.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);
        printf("---------------------------------------\n");
        switch (chon) {
        case 1:
            ktrasoNguyen();
            break;

        case 2:
            timUocchungBoichung();
            break;
        case 3:
            tinhTienKaraoke();
            break;
        case 4:
            tinhTienDien();
            break;
        case 5:
            doiTien();
            break;
        case 6:
            laiXuatNganHang();
            break;
        case 7:
            vayTienMuaXe();
            break;
        case 8:
            sxTTSv();
            break;
        case 9:
            gameFpoly();
            break;
        case 10:
            tinhPhanSo();
            break;
        default:
            printf("lua chon khong hop le , vui long nhap lai\n");
            break;
        }

    } while (chon != 0);
}
