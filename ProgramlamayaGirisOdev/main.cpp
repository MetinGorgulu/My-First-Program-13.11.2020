/****************************************************************************
**					SAKARYA ÜNÝVERSÝTESÝ
**			        BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**			        PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				    ÖDEV NUMARASI…...:  1.ödev
**					ÖÐRENCÝ ADI......:  Metin Görgülü
**					ÖÐRENCÝ NUMARASI.:	G201210374
**					DERS GRUBU.......:  1/A
****************************************************************************/

#include <iostream>
#include <typeinfo>
#include <conio.h>
#include <string>
#include <iomanip>
#include <cmath>
#include <string> 
#include "kutuphane.h"			// Program Ýçerisindeki Struct Diziler Ve Fonksiyonlar Bu Kütüphanededir.
using namespace std; 
 

			/*
			*								Önemli Not
			*	Eðer Ki Random Olarak Verilen Notlarýn Ýstenilen Þekilde (%10,%50,%15,%25)
			*	Doðruluðunu Kontrol Etmek Ýstiyorsanýz. kutuphane.cpp Dosyasý Ýçerisindeki 
			*			"randomnotvervize()"		fonksiyonu içerisindeki yorum satýrýný 
			*	silerek öðrenebilirsiniz.
			*/


int main()
{
	setlocale(LC_ALL, "Turkish");  // Türkçe Karakter Ýçin
	string soru = "b";
	int sinifmevcudu;
	cout << "Öðrencileri Random Mu Manuel Mi Atamak Ýstersiniz?(r or m)" << endl; // Kullanýcýya Ýki Seçenek Sunulur.
	while (!(soru == "m" && soru == "r")) //Kullanýcýdan Alýnan Seçeneklerin Doðru Olduðunu 
	{									  // Kontrol Etmek Ýçin Do While Ýçerisine Aldým
		cin >> soru;
		srand((unsigned)time(NULL)); // Random Sayý Üretmek Ýçin.
		if (soru == "r")   //Eðer Random Üretilmesi Ýsteniyorsa Bu Blok Ýçerisine Girilir Ve Fonksiyonlar Çaðrýlýr
		{
			randomadlar();
			randomnotvervize();
			randomnotverfinal();
			randomnotverodev1();           // Random Not Verme Fonksiyonlarý Çaðrýlýr.
			randomnotverodev2();
			randomnotverproje();
			randomnover();
			randomnotverkisaSinav1();
			randomnotverkisaSinav2();
			sinifmevcudu = 100;
			toplamogr(sinifmevcudu);
			cout << endl << "Random 100 Öðrenci Kaydedildi"<<endl<<endl<<endl;
			break;
		}

		else if (soru == "m")   // Manuel Olarak Öðrencileri Girme
		{
			int ogrenciSayiKontrol = 1;
			int ogrenciSayisi;
			string soru1;
			do {						//Manuel Olarak Girilmek Ýstenen Öðrenci Sayýsýný Kontrol Ýçin Do While
				cout << "Kaç Öðrenciniz var? (max 100)" << endl;
				do {				
					cin >> soru1;
					if (kontrolsayi(soru1))								//Do While Yapýsý Ýçerisinde Ýstenen Veri
					{													//Kontrol Edilerek Doðru Veri Girene Kadar	
						ogrenciSayiKontrol = 0;							//Tekrar Ediyor.
					}
					else
					{
						ogrenciSayiKontrol = 1;
						cout << "Lütfen Sadece Sayý Giriniz!!!" << endl;
					}			
				} while (ogrenciSayiKontrol);  
				ogrenciSayisi = stoi(soru1);
				sinifmevcudu= ogrenciSayisi;
				toplamogr(sinifmevcudu);
				string ad , soyad , vize ,no, final, odev1 , odev2 , kisa1 , kisa2 , proje;
				int kontrol ;
				if (ogrenciSayisi > 0 && ogrenciSayisi <= 100)	// Burada Manuel Girilen Bütün Veriler Tipine Göre
				{												// Kontrol Ediliyor. Herbirinin Kontrol Edilme Þartlarý
					for (int i = 0; i < ogrenciSayisi; i++)		// Farklý Olduðu Ýçin Ayrý Ayrý
					{											// Kontrol Fonksiyonlarý Yazýlmýþtýr.
						cout << i + 1 << "." << "Öðrencinizin Adýný Girin." << endl; 
						do										
						{
							cin >> ad;
							if (kontrolharf(ad))
							{
								kontrol = 0;
							}
							else
							{
								cout << "Lütfen Sadece Harf Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						adver(ad, i);
						cout << i + 1 << "." << "Öðrencinizin Soyadýný Girin." << endl;
						do
						{
							cin >> soyad;
							if (kontrolharf(soyad))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece Harf Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						soyadver(soyad, i); ;
						cout << i + 1 << "." << "Öðrencinizin Okul Numarasýný Giriniz(1-999) Notunu Girin." << endl;
						do
						{
							cin >> no;
							if (kontrolno(no))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece 1-999 Arasýnda Bir Sayý Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						nover(no, i);;
						cout << i + 1 << "." << "Öðrencinizin Vize Notunu Girin." << endl;
						do
						{
							cin >> vize;
							if (kontrolnot(vize))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece 0-100 Arasýnda Bir Sayý Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						vizever(vize, i); ;
						cout << i + 1 << "." << "Öðrencinizin Final Notunu Girin." << endl;
						do
						{
							cin >> final;
							if (kontrolnot(final))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece 0-100 Arasýnda Bir Sayý Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						finalver(final, i);;
						cout << i + 1 << "." << "Öðrencinizin 1.Kýsa Sýnav Notunu Girin." << endl;
						do
						{
							cin >> kisa1;
							if (kontrolnot(kisa1))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece 0-100 Arasýnda Bir Sayý Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						kisa1ver(kisa1, i);;
						cout << i + 1 << "." << "Öðrencinizin 2.Kýsa Sýnav Notunu Girin." << endl;
						do
						{
							cin >> kisa2;
							if (kontrolnot(kisa2))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece 0-100 Arasýnda Bir Sayý Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						kisa2ver(kisa2, i);;
						cout << i + 1 << "." << "Öðrencinizin 1.Ödev Notunu Girin." << endl;
						do
						{
							cin >> odev1;
							if (kontrolnot(odev1))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece 0-100 Arasýnda Bir Sayý Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						odev1ver(odev1, i);;
						cout << i + 1 << "." << "Öðrencinizin 2.Ödev Girin." << endl;
						do
						{
							cin >> odev2;
							if (kontrolnot(odev2))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece 0-100 Arasýnda Bir Sayý Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						odev2ver(odev2, i);;
						cout << i + 1 << "." << "Öðrencinizin Proje Notunu Girin." << endl;
						do
						{
							cin >> proje;
							if (kontrolnot(proje))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "Lütfen Sadece 0-100 Arasýnda Bir Sayý Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						projever(proje, i);;
						system("cls");
					}
				}
				else 
				{
					cout << "Lütfen 0-100 Arasýnda Bir sayý Giriniz !!!" << endl;
				}
			} while (!(ogrenciSayisi > 0 && ogrenciSayisi <= 100));
			break;
		}

		else
		{
			cout << "Lütfen Random için ('r') Manuel için ise ('m')Giriniz"<<endl ;
		}

	}  
	ortalamaal();				//Manuel Veya Random Oluþturulan Sýnýf Listesindeki Herkesin Ortalama ve
	harfnotual();				// Harf Notlarý Bu iki Fonksiyon Ýle Hesapanýyor.
	string islem;
	int sayac = 0;
	string islemTekrar = "e";
	bool islemKontrol;
	while (islemTekrar == "e") // Yapýlmasý Ýstenen Ýþlemler Do While Yapýsý Ýçerisinde Hem Girilen Veri Kontrol Ediliyor
	{						   // Hem de Tekrardan Ýþlem Yapýlmak Ýstendiðinde Direk Ýþlem Seçilebiliyor.
		if(sayac>0)   //Tekrar Ýþlem Yapýlmak Ýstenirse Önceki Ýþlemler Temizleniyor
		{
			system("cls");
		}
		cout << "Lütfen Yapmak Ýstediðiniz Ýþlemi Seçiniz"<<endl;
		do					// Seçilen Ýþlemin Ýstenilen Deðerde Olup Olmadýðý Kontrol Ediliyor 
		{					// Eðer Deðilse Do While Yapýsý Ýle Tekrar Ýsteniyor.
			
			sorguekrani(); 
			
			cin >> islem;		
			system("cls");
			if (islemKontrolu(islem)) // Ýstenilen Ýþlem Türü Doðruysa Bu Bloða Girip Ýstenilen Ýþeme Gidiyor.
			{
				
				if (islem == "1") // Struct Dizisindeki Dolu Olan Tüm Elemanlarý Listeliyor Boþ Olanlara Gelince Listeleme Bitiyor.
				{
					ogrenciyazdir();
					

				}
				else if (islem == "2") // En Yüksek Notu Ekrana Yazdýrýrken Fonksiyonlarý Çaðýrýr
				{
					system("cls");
					enyukseknot();
				}
				else if (islem == "3")	// En Düþük Notu Ekrana Yazdýrýrken Fonksiyonlarý Çaðýrýr
				{
					system("cls");
					endusuknot();
				}
				else if (islem == "4")	// Sýnýf Ortalmasýný Ekrana Yazdýrýrken Fonksiyonlarý Çaðýrýr
				{
					system("cls");
					sinifortalamasi();
				}
				else if (islem == "5")	// Standart Sapmayý Ekrana Yazdýrýrken Fonksiyonlarý Çaðýrýr
				{
					system("cls");
					standartsapma();
				}
				else if (islem == "6")	// Kullanýcýdan Girilen Ýki Deðer Arasýnda Not Ortalamasý Olan Öðrenciler Listeler. 
				{
					arayisirala();	//	Fonksiyon Çaðrýlýyor
				}
				else if (islem == "7")	// Kullanýcýdan Girilen Deðerin Altýnda Not Ortalamasý Olan Öðrenciler Listeler.
				{
				

				asagisirala();	//	Fonksiyon Çaðrýlýyor

				}
				else if (islem == "8")	// Kullanýcýdan Girilen Deðerin Üstünde Not Ortalamasý Olan Öðrenciler Listeler.
				{
				
				yukarisirala();	//	Fonksiyon Çaðrýlýyor
				}
				islemKontrol = 0;
			}
			else
			{
				system("cls");
				cout<<"Yanlýþ Girdiniz"<<endl<<"Lütfen Sadece 1-8 Arasýnda 1 Adet Sayý Giriniz!!! "<<endl;
			}
			sayac++;
		} while (!(islemKontrolu(islem)));
		cout << "Baþka Bir Ýþlem Yapmak Ýstiyorsanýz 'e' Tuþunu Çýkmak Ýçin Herhangi Bir Tuþu Giriniz."<<endl;
		cin >> islemTekrar;
		
	}


return 0 ;
}

