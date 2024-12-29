/*ORPHELP*/
#include <stdio.h>
#include<string.h>

void malzeme (char*maddi, char*tarih)
{
    int sec ;
    
    
    printf("1. Kiyafet\n");
    printf("2. Gida\n");
    printf("3. Okul kaynagi\n");
    printf("4. Baska\n");
    
    
    int exitProgram=0;
while(!exitProgram)
{    
    
    printf("Lutfen maddi yardim turlerini belirtiniz\n");
    scanf("%d", &sec);
    switch(sec)    
      {  
         case 1 : printf("Yetimhaneye gelemek istediginiz tarihi(**/**/**) seciniz\n");
                  scanf("\n%s", tarih);
                  exitProgram=1;
                  break;
        case 2 : printf("Yetimhaneye gelemek istediginiz tarihi (**/**/**)seciniz\n");
                  scanf("\n%s", tarih); 
                  exitProgram=1;
                  break;
        case 3 : printf("Yetimhaneye gelemek istediginiz tarihi(**/**/**) seciniz\n");
                  scanf("\n%s", tarih);
                  exitProgram=1;
                  break;
        case 4 :printf("Yetimhaneye gelemek istediginiz tarihi (**/**/**)seciniz\n");
                  scanf("\n%s", tarih);
                  exitProgram=1;
                  break;
                  
        default :  printf("secim mevcut degil!!!!!\n ");
        break;
      }   
    
}
}

void egitim (char*egitici, char*tarih)
{ 
    int sec;
    
    
    
    printf("1. Yemek pisirme atolyesi\n");
    printf("2. Plastik sanat atolyesi\n");
    printf("3. Farkindalik\n");
    printf("4. Baska\n");
    
    int exitProgram=0;
    
while(!exitProgram)
{
    printf("Sunudugunuz egitim hakkinda bize bilgi verin\n");
    scanf("%d", &sec);
    switch(sec)    
      {  
         case 1 : printf("Egitiminiz icin bir tarih (**/**/**) seciniz : %s\n", tarih);
                  scanf("\n%s", tarih);
                  exitProgram=1;
                  break;
        case 2 : printf("Egitiminiz icin bir tarih (**/**/**) seciniz : %s\n", tarih);
                  scanf("\n%s", tarih); 
                  exitProgram=1;
                  break;
        case 3 : printf("Egitiminiz icin bir tarih (**/**/**) seciniz : %s\n", tarih);
                  scanf("\n%s", tarih); 
                  exitProgram=1;
                  break;
        case 4 : printf("Egitiminiz icin bir tarih (**/**/**) seciniz : %s\n", tarih);
                  scanf("\n%s", tarih);
                  exitProgram=1;
                  break;
                  
        default :  printf("secim mevcut degil!!!!!\n ");
        
      }   
    
}
}


int main()
{
    char adi[100];
    char soyadi[100];
   
    char sifre[100];
    
    int cevap, yetimSayi=100, sec = 0, para, bankNum, ayYil, CVV;
    int exitProgram=0;
    char maddi[100]; 
    char tarih[50];
    char egitici[100];
    
    
    
    
    printf("******* Yetim Destek Sistemine Hos Geldiniz *******\n");
    printf("Lutfen secimlerinizi dikkatlice yapiniz. Yardiminiz cok kiymetlidir.\n");
    
   
       
       printf("Adinizi giriniz: \n");
       scanf("%s",adi);
       
       printf("Soyadinizi giriniz: \n");
       scanf("%s",soyadi);
       

       printf("Sifrenizi giriniz: \n");
       scanf("%s",sifre);

       
       
     printf("Verileriniz dogrulandi\n");
         
       
    
    printf("Farkli yardim secenekleri\n");
    printf("1. belirli bir yetime bagis yapmak\n");
    printf("2. Genel yardim\n");
    
    
    exitProgram=0;
    while(!exitProgram)
    {
      printf("*****Birini seciniz*****\n"); 
      scanf("%d", &sec);
      switch(sec)    
      {  
         case 1 :   while(7>3)
                    {
                       printf("Lutfen yetim sayisi (1-100) giriniz\n");
                       scanf("%d", &yetimSayi);
                       if(yetimSayi <= 100 && yetimSayi != 0)
                       {
                          printf("%d Yetim seciniz\n", yetimSayi);
                          break; 
                        }
                       else
                        {
                          printf("Bu sayida yetim yok\n");
                        }
                        
                    }
                   exitProgram=1; 
                 
                   
        break;
        
        case 2 :  printf("*****Genel seceneklri seciniz****\n")  ;
        exitProgram=1; 
        break;
        
        default :  printf("secim mevcut degil!!!!!\n ");
        break;
        
      } 
      
    }
    exitProgram=0;
    printf("1. Malzeme\n");
    printf("2. Mal\n");
    printf("3. Egitici\n");
    
    while(!exitProgram)
    {
        printf("Bir giris yaptiniz\n");
        scanf("%d", &sec);
        
        switch(sec)
        {
            case 1 : malzeme(maddi,tarih);
            printf("*********------Rapor------*******\n");
            printf("kullanici adi: %s\n", adi);
            printf("kullanici soyadi: %s\n", soyadi);
            printf("yardim turu: Malzeme\n");
            printf("Yetimhaneye gelemek tarihi : %s\n", tarih);
            
            exitProgram=1;
            break;
            
            case 2 : while(!exitProgram)
                     {
                        printf("Teklif etmek istediginiz tutari giriniz\n");
                        scanf("%d", &para);
                        if(para > 0)
                        {
                          printf("Miktar kaydedilir\n");
                          printf("Odeme yontemi\n");
                          printf("1. Banka karti\n");
                          printf("2. Sahsen Odeme\n");
                         
                          while(!exitProgram)
                          {
                              printf("Birini seciniz\n");
                              scanf("%d", &sec);
                              switch(sec)
                              {
                                  case 1 : printf("Banka karti numarasi(16 haneli) giriniz\n");
                                           scanf("%d", &bankNum);
                                           printf("Ay/Yil(4 haneli) giriniz\n");
                                           scanf("%d", &ayYil);
                                           printf("CVV (3 haneli) giriniz\n");
                                           scanf("%d", & CVV);
                               printf("********-------Rapor-------*******\n");
                               printf("kullanici adi: %s\n", adi);
                               printf("kullanici soyadi: %s\n", soyadi);
                               printf("yardim turu : mal\n" );
                               printf("teklif etmek tutari: %d TL\n", para);
                               printf("Odeme yontemi: Banka karti\n");
                               
                               
                                           
                                           
                                  exitProgram=1;
                                  break;
                                  
                                  
                                  case 2 : printf("Sahse odeme icin bir tarih(**/**/**) seciniz\n");
                                           scanf("\n%s", tarih);
                               printf("*********------Rapor------*******\n");
                               printf("kullanici adi: %s\n", adi);
                               printf("kullanici soyadi: %s\n", soyadi);
                               printf("yardim turu : mal\n" );
                               printf("teklif etmek tutari: %d TL\n", para);
                               printf("Odeme yontemi: sahsen odeme\n");
                               printf("Yetimhaneye gelemek isteiginiz tarih: %s\n", tarih);
                               
                               
                                  exitProgram=1;
                                  break;
                        
                                  default : printf("Secim mevcut degil\n");
                                  break;
                                  
                               }

                            }
                            
                          break;
                        }
                        else
                        {
                          printf("Hatali bir giris yaptiniz\n");
                          
                        }
                     
                     }
                     exitProgram=1; 
                     
            
            break;
            
            case 3 : egitim(egitici, tarih);
            printf("*********------Rapor-----*******\n");
            printf("kullanici adi: %s\n", adi);
            printf("kullanici soyadi: %s\n", soyadi);
            printf("yardim turu: Egitici\n");
            printf("Egitiminiz Sunudugunuz tarihi  : %s\n", tarih);
                     exitProgram=1;
                     break;
            
            default : printf("Secim mevcut degil\n");
                      break;
        }
        
    }
    printf("******Yardim teklifiniz yerine getirildi!!*****\n");
    printf("*****Size tessekur ediyoruz!!****\n");
    
    
    

    return 0;
}