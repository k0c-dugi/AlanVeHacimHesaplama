#include <stdio.h>
#include <math.h>

int main(void) {
    int CisminIsmi, IslemTuru;
    float pi = 22.0 / 7, r, h, en, boy, derinlik, kenar1, kenar2, kenar3, uzunluk;
    printf("Islem yapacaginiz 3 boyutlu cisimi seciniz\nListe:\nKoni=1\nKure=2\nDikdortgen Prizma=3\nUcgen Prizma=4\nKare Prizma=5\nKuboid=6\nTetrahedron=7\nEllipsoid=8\n");
    scanf("%d", &CisminIsmi);
    switch (CisminIsmi) {
        case 1:
            int IslemTuru;
            printf("Bu cisimde bulmak istediginiz turu seciniz\nListe:\nHacim=1\nYuzey Alani=2\n");
            scanf("%d", &IslemTuru);
            if (IslemTuru == 1) {

                printf("Koninin yaricapini giriniz: ");
                scanf("%f", &r);
                printf("Koninin yuksekligini giriniz: ");
                scanf("%f", &h);
                float sonuc = 2 * pi * r * h;
                printf("Koninin Hacmi =%.3f", sonuc);
                break;
            } else if (IslemTuru == 2) {
                printf("Koninin yaricapini giriniz:");
                scanf("%f", &r);
                printf("Koninin yuksekligini giriniz:");
                scanf("%f", &h);
                float sonuc = sqrt(r * r + h * h) * r * pi;
                printf("Koninin yuzey alani =%.3f", sonuc);
                break;
            } else {
                printf("Girdiginiz secenek bulunmamaktadir. Lutfen baska bir tercihte bulununuz");
                break;
            }
        case 2:
            printf("Bu cisimde bulmak istediginiz turu seciniz\nListe:\nHacim=1\nYuzey Alani=2\n");
            scanf("%d", &IslemTuru);
            if (IslemTuru == 1) {

                printf("Kurenin yaricapini giriniz:");
                scanf("%f", &r);
                float sonuc = 4.0 / 3 * pi * r * r * r;
                printf("Kurenin Hacmi =%.3f", sonuc);
                break;
            } else if (IslemTuru == 2) {
                printf("Kurenin yaricapini giriniz:");
                scanf("%f", &r);
                float sonuc = 2 * pi * r * r;
                printf("Kurenin yuzey alani =%.3f", sonuc);
                break;
            } else {
                printf("Girdiginiz secenek bulunmamaktadir. Lutfen baska bir tercihte bulununuz");
                break;
            }
        case 3:
            printf("Bu cisimde bulmak istediginiz turu seciniz\nListe:\nHacim=1\nYuzey Alani=2\n");
            scanf("%d", &IslemTuru);
            if (IslemTuru == 1) {

                printf("Dikdortgen prizmanin en,boy ve derinlik olculerini giriniz:");
                scanf("%f%f%f", &en, &boy, &derinlik);
                float sonuc = en * boy * derinlik;
                printf("Dikdortgen Prizman'nin hacimi =%.3f", sonuc);
                break;
            } else if (IslemTuru == 2) {
                printf("Dikdortgen prizmanin en,boy ve derinlik olculerini giriniz:");
                scanf("%f%f%f", &en, &boy, &derinlik);
                float sonuc = 2 * (boy * en + en * derinlik + boy * derinlik);
                printf("Dikdortgen prizmanin yuzey alani =%.3f", sonuc);
                break;
            } else {
                printf("Yanlis bir tuslama yaptiniz, lutfen tekrar deneyin.");
                break;
            }
        case 4:
            printf("Bu cisimde bulmak istediginiz turu seciniz\nListe:\nHacim=1\nYuzey Alani=2\n");
            scanf("%d", &IslemTuru);
            if (IslemTuru == 1) {
                printf("Ucgen prizmanin yuksekligini, boyunu ve enini giriniz:");
                scanf("%f%f%f", &en, &boy, &derinlik);
                float sonuc = 1.0 / 2 * en * boy * derinlik;
                printf("Ucgen prizmanin hacimi =%.3f", sonuc);
                break;
            } else if (IslemTuru == 2) {
                printf("Ucgen prizmanin uzunlugunu (h) giriniz:");
                scanf("%f", &boy);
                printf("Yuksekligi indiginiz kenarin uzunlugunu ekleyeniz");
                scanf("%f", &kenar1);
                printf("Ucgen yuzlerin kenar uzunluklarini giriniz");
                scanf("%f%f", &kenar2, &kenar3);
                printf("Ucgenin yuksekligini(H) giriniz");
                scanf("%f", &uzunluk);
                float sonuc = kenar1 * boy + kenar2 * boy + kenar3 * boy + (uzunluk * kenar1);
                printf("Ucgen prizmanin yuzey alani =%.3f", sonuc);
                break;
            } else {
                printf("Yanlis tuslama yaptiniz, lutfen tekrar deneyin");
                break;
            }
        case 5:
            printf("Bu cisimde bulmak istediginiz turu seciniz\nListe:\nHacim=1\nYuzey Alani=2\n");
            scanf("%d", &IslemTuru);
            if (IslemTuru == 1) {
                printf("Kare prizmanin kare kenar uzunlugunu giriniz:");
                scanf("%f", &en);
                printf("Kare prizmanin boyunu giriniz");
                scanf("%f", &boy);
                float sonuc = en * en * boy;
                printf("Kare prizmanin hacimi =%.3f", sonuc);
                break;
            } else if (IslemTuru == 2) {
                printf("Kare prizmanin kare kenar uzunlugunu giriniz:");
                scanf("%f", &en);
                printf("Kare prizmanin boyunu giriniz");
                scanf("%f", &boy);
                float sonuc = 2 * (en * en) + 4 * (en * boy);
                printf("Kare prizmanin yuzey alani =%.3f", sonuc);
                break;
            } else {
                printf("Yanlis tuslama yaptiniz, lutfen tekrar deneyin");
                break;
            }
        case 6:
            printf("Bu cisimde bulmak istediginiz turu seciniz\nListe:\nHacim=1\nYuzey Alani=2\n");
            scanf("%d", &IslemTuru);
            if (IslemTuru == 1) {
                printf("Kuboidin kenar uzunluklarini giriniz:");
                scanf("%f%f%f", &en, &boy, &derinlik);
                float sonuc = en * boy * derinlik;
                printf("Kuboidin hacimi =%.3f", sonuc);
                break;
            } else if (IslemTuru == 2) {
                printf("Kuboidin kenar uzunluklarini giriniz:");
                scanf("%f%f%f", &en, &boy, &derinlik);
                float sonuc = 2 * (en * boy + boy * derinlik + en * derinlik);
                printf("Kare prizmanin yuzey alani =%.3f", sonuc);
                break;
            } else {
                printf("Yanlis tuslama yaptiniz, lutfen tekrar deneyin");
                break;
            }
        case 7:
            printf("Bu cisimde bulmak istediginiz turu seciniz\nListe:\nHacim=1\nYuzey Alani=2\n");
            scanf("%d", &IslemTuru);
            if (IslemTuru == 1) {
                printf("Tetrahedronun kenar uzunlugunu giriniz:");
                scanf("%f", &kenar1);
                float sonuc = pow(kenar1, 3) / (6 * sqrt(2));
                printf("Tetrahedronun hacimi =%.3f", sonuc);
                break;
            } else if (IslemTuru == 2) {
                printf("Tetrahedronun kenar uzunlugunu giriniz:");
                scanf("%f", &kenar1);
                float sonuc = pow(kenar1, 2) * sqrt(3);
                printf("Tetrahedronun yuzey alani =%.3f", sonuc);
                break;
            } else {
                printf("Yanlis tuslama yaptiniz, lutfen tekrar deneyin");
                break;
            }
        case 8:
            printf("Bu cisimde bulmak istediginiz turu seciniz\nListe:\nHacim=1\nYuzey Alani=2\n");
            scanf("%d", &IslemTuru);
            if (IslemTuru == 1) {
                printf("Ellipsoidin x,y ve z duzlemlerindeki uzunluklarini giriniz:");
                scanf("%f%f%f", &en, &boy, &derinlik);
                float sonuc = (4.0 / 3) * pi * en * boy * derinlik;
                printf("Ellipsoidin hacimi =%.3f", sonuc);
                break;
            } else if (IslemTuru == 2) {
                printf("Ellipsoidin x,y ve z duzlemlerindeki uzunluklarini giriniz:");
                scanf("%f%f%f", &en, &boy, &derinlik);
                float sonuc = ((pow(en * boy, 1.6) + pow(en * derinlik, 1.6) + pow(boy * derinlik, 1.6)) / 3.0);
                sonuc = 4.0 * pi * pow(sonuc,5.0/8);
                printf("Ellipsoidin yuzey alani =%.3f", sonuc);
                break;
            } else {
                printf("Yanlis tuslama yaptiniz, lutfen tekrar deneyin");
                break;
            }
            default:
            printf("Yanlis tuslama yaptiniz. Lutfen tekrar deneyin.");
            break;
    }
}
