//
//  main.c
//  Hesap
//  Konuşan hesap makinesi
//  Tested MacOS 10.12
//  Created by wantto on 12.10.2017.
//  Copyright © 2017 wantto. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,c,d,e,spk;
    system("clear");printf("Hesap Makinasına hoş geldiniz\n Hesap makinasında sesli destek almak için 1'i,\n Normal modda devam etmek için 0'ı seçin.");printf("\nSeçiminiz...:");
    system("say Hesap makinasında sesli destek almak için 1'i, Normal modda devam etmek için 0'ı seçin");
    scanf("%d",&spk);//Konuşma anahtarı
    system("clear");
    printf("Hesap Makinesi 2.0 By Wantto\nYapmak istediğiniz işlemi Seçiniz\n Topla=1 Çıkar=2 Çarp=3 Böl=4\n Çıkmak İçin 0'ı Tuşlayın\nSeçiminiz...:");if(spk==1)system("say Yapmak istediğiniz işlemi Seçiniz, Topla bir, Çıkar 2, Çarp 3, Böl 4 Çıkmak İçin 0 ı Tuşlayın");scanf("%d",&e);
    if (e==1)goto topla;
    if (e==2)goto cikar;
    if (e==3)goto carp;
    if (e==4)goto bol;
    if (e==0){if(spk==1)system("say Güle Güle");exit(0);}
    
start:
    {
        system("clear");
        printf("Hesap Makinesi 2.0 By Wantto\nYapmak istediğiniz işlemi Seçiniz\n Topla=1 Çıkar=2 Çarp=3 Böl=4\nSeçiminiz...:");if(spk==1)system("say Yapmak istediğiniz işlemi Seçiniz, Topla bir, Çıkar 2, Çarp 3, Böl 4");scanf("%d",&e);
        if (e==1)goto topla;
        if (e==2)goto cikar;
        if (e==3)goto carp;
        if (e==4)goto bol;
        goto start;
    }
    
topla:
    {
        d=d+1;
        system("clear");printf("Toplama İşlemi\n");if(spk==1)system("say Toplama işlemini seçtiniz");
        printf("Birinci sayıyı giriniz...:");if(spk==1)system("say Birinci Sayıyı giriniz");scanf("%d",&a);
        printf("İkinci sayıyı giriniz...:");if(spk==1)system("say ikinci sayıyı giriniz");scanf("%d",&b);
        printf("Sonuc...:%d",a+b);
        printf("\n\n\n%d İşlem yaptınız",d);
        a:
        printf("\nÇıkmak için 0\n Aynı İşlemi tekrar etmek için 1\n Farklı bir işlem yapmak için 2 Tulaşyın.\nSeçim...:");if(spk==1)system("say Çıkmak için 0, Aynı İşlemi tekrar etmek için 1, Farklı bir işlem yapmak için 2 Tuşlayın");scanf("%d",&c);system("clear");
        if (c==0){if(spk==1)system("say Güle Güle");exit(0);}if (c==1)goto topla;if (c==2)goto start;
        goto a;
    }
    
cikar:
    {
        d=d+1;
        system("clear");printf("Çıkarma İşlemi\n");if(spk==1)system("say Çıkarma işlemini şeçtiniz");
        printf("Birinci sayıyı giriniz...:");if(spk==1)system("say Birinci Sayıyı giriniz");scanf("%d",&a);
        printf("İkinci sayıyı giriniz...:");if(spk==1)system("say ikinci sayıyı giriniz");scanf("%d",&b);
        printf("Sonuç%d",a-b);
        printf("\n\n\n%d İşlem yaptınız",d);
        b:
        printf("\nÇıkmak için 0\n Aynı İşlemi tekrar etmek için 1\n Farklı bir işlem yapmak için 2 Tulaşyın.\nSeçim...:");if(spk==1)system("say Çıkmak için 0, Aynı İşlemi tekrar etmek için 1, Farklı bir işlem yapmak için 2 Tuşlayın");scanf("%d",&c);system("clear");
        if (c==0){if(spk==1)system("say Güle Güle");exit(0);}if (c==1)goto cikar;if (c==2)goto start;
        goto b;
    }
    
carp:
    {
        d=d+1;
        system("clear");printf("Çarpma İşlemi\n");if(spk==1)system("say Çarpma  işlemini seçtiniz");
        printf("Birinci sayıyı giriniz...:");if(spk==1)system("say Birinci Sayıyı giriniz");scanf("%d",&a);
        printf("İkinci sayıyı giriniz...:");if(spk==1)system("say ikinci sayıyı giriniz");scanf("%d",&b);
        printf("TSonuç%d",a*b);
        printf("\n\n\n%d İşlem yaptınız",d);
        c:
        printf("\nÇıkmak için 0\n Aynı İşlemi tekrar etmek için 1\n Farklı bir işlem yapmak için 2 Tulaşyın.\nSeçim...:");if(spk==1)system("say Çıkmak için 0, Aynı İşlemi tekrar etmek için 1, Farklı bir işlem yapmak için 2 Tuşlayın");scanf("%d",&c);system("clear");
        if (c==0){if(spk==1)system("say Güle Güle");exit(0);}if (c==1)goto carp;if (c==2)goto start;
        goto c;
    }
    
bol:
    {
        d=d+1;
        system("clear");printf("Bölme işlemi\n");if(spk==1)system("say Bölme işlemini seçtiniz");
        printf("Birinci sayıyı giriniz...:");if(spk==1)system("say Birinci Sayıyı giriniz");scanf("%d",&a);
        printf("İkinci sayıyı giriniz...:");if(spk==1)system("say ikinci sayıyı giriniz");scanf("%d",&b);
        printf("Sonuç%d",a/b);
        printf("\n\n\n%d İşlem yaptınız",d);
        d:
        printf("\nÇıkmak için 0\n Aynı İşlemi tekrar etmek için 1\n Farklı bir işlem yapmak için 2 Tulaşyın.\nSeçim...:");if(spk==1)system("say Çıkmak için 0, Aynı İşlemi tekrar etmek için 1, Farklı bir işlem yapmak için 2 Tuşlayın");c=getchar();scanf("%d",&c);system("clear");
        if (c==0){if(spk==1)system("say Güle Güle");exit(0);}if (c==1)goto bol;if (c==2)goto start;
        goto d;
    }
    
    return 0;
}
