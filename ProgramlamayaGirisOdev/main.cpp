/****************************************************************************
**					SAKARYA �N�VERS�TES�
**			        B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				    B�LG�SAYAR M�HEND�SL��� B�L�M�
**			        PROGRAMLAMAYA G�R��� DERS�
**
**				    �DEV NUMARASI�...:  1.�dev
**					��RENC� ADI......:  Metin G�rg�l�
**					��RENC� NUMARASI.:	G201210374
**					DERS GRUBU.......:  1/A
****************************************************************************/

#include <iostream>
#include <typeinfo>
#include <conio.h>
#include <string>
#include <iomanip>
#include <cmath>
#include <string> 
#include "kutuphane.h"			// Program ��erisindeki Struct Diziler Ve Fonksiyonlar Bu K�t�phanededir.
using namespace std; 
 

			/*
			*								�nemli Not
			*	E�er Ki Random Olarak Verilen Notlar�n �stenilen �ekilde (%10,%50,%15,%25)
			*	Do�rulu�unu Kontrol Etmek �stiyorsan�z. kutuphane.cpp Dosyas� ��erisindeki 
			*			"randomnotvervize()"		fonksiyonu i�erisindeki yorum sat�r�n� 
			*	silerek ��renebilirsiniz.
			*/


int main()
{
	setlocale(LC_ALL, "Turkish");  // T�rk�e Karakter ��in
	string soru = "b";
	int sinifmevcudu;
	cout << "��rencileri Random Mu Manuel Mi Atamak �stersiniz?(r or m)" << endl; // Kullan�c�ya �ki Se�enek Sunulur.
	while (!(soru == "m" && soru == "r")) //Kullan�c�dan Al�nan Se�eneklerin Do�ru Oldu�unu 
	{									  // Kontrol Etmek ��in Do While ��erisine Ald�m
		cin >> soru;
		srand((unsigned)time(NULL)); // Random Say� �retmek ��in.
		if (soru == "r")   //E�er Random �retilmesi �steniyorsa Bu Blok ��erisine Girilir Ve Fonksiyonlar �a�r�l�r
		{
			randomadlar();
			randomnotvervize();
			randomnotverfinal();
			randomnotverodev1();           // Random Not Verme Fonksiyonlar� �a�r�l�r.
			randomnotverodev2();
			randomnotverproje();
			randomnover();
			randomnotverkisaSinav1();
			randomnotverkisaSinav2();
			sinifmevcudu = 100;
			toplamogr(sinifmevcudu);
			cout << endl << "Random 100 ��renci Kaydedildi"<<endl<<endl<<endl;
			break;
		}

		else if (soru == "m")   // Manuel Olarak ��rencileri Girme
		{
			int ogrenciSayiKontrol = 1;
			int ogrenciSayisi;
			string soru1;
			do {						//Manuel Olarak Girilmek �stenen ��renci Say�s�n� Kontrol ��in Do While
				cout << "Ka� ��renciniz var? (max 100)" << endl;
				do {				
					cin >> soru1;
					if (kontrolsayi(soru1))								//Do While Yap�s� ��erisinde �stenen Veri
					{													//Kontrol Edilerek Do�ru Veri Girene Kadar	
						ogrenciSayiKontrol = 0;							//Tekrar Ediyor.
					}
					else
					{
						ogrenciSayiKontrol = 1;
						cout << "L�tfen Sadece Say� Giriniz!!!" << endl;
					}			
				} while (ogrenciSayiKontrol);  
				ogrenciSayisi = stoi(soru1);
				sinifmevcudu= ogrenciSayisi;
				toplamogr(sinifmevcudu);
				string ad , soyad , vize ,no, final, odev1 , odev2 , kisa1 , kisa2 , proje;
				int kontrol ;
				if (ogrenciSayisi > 0 && ogrenciSayisi <= 100)	// Burada Manuel Girilen B�t�n Veriler Tipine G�re
				{												// Kontrol Ediliyor. Herbirinin Kontrol Edilme �artlar�
					for (int i = 0; i < ogrenciSayisi; i++)		// Farkl� Oldu�u ��in Ayr� Ayr�
					{											// Kontrol Fonksiyonlar� Yaz�lm��t�r.
						cout << i + 1 << "." << "��rencinizin Ad�n� Girin." << endl; 
						do										
						{
							cin >> ad;
							if (kontrolharf(ad))
							{
								kontrol = 0;
							}
							else
							{
								cout << "L�tfen Sadece Harf Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						adver(ad, i);
						cout << i + 1 << "." << "��rencinizin Soyad�n� Girin." << endl;
						do
						{
							cin >> soyad;
							if (kontrolharf(soyad))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece Harf Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						soyadver(soyad, i); ;
						cout << i + 1 << "." << "��rencinizin Okul Numaras�n� Giriniz(1-999) Notunu Girin." << endl;
						do
						{
							cin >> no;
							if (kontrolno(no))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece 1-999 Aras�nda Bir Say� Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						nover(no, i);;
						cout << i + 1 << "." << "��rencinizin Vize Notunu Girin." << endl;
						do
						{
							cin >> vize;
							if (kontrolnot(vize))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece 0-100 Aras�nda Bir Say� Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						vizever(vize, i); ;
						cout << i + 1 << "." << "��rencinizin Final Notunu Girin." << endl;
						do
						{
							cin >> final;
							if (kontrolnot(final))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece 0-100 Aras�nda Bir Say� Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						finalver(final, i);;
						cout << i + 1 << "." << "��rencinizin 1.K�sa S�nav Notunu Girin." << endl;
						do
						{
							cin >> kisa1;
							if (kontrolnot(kisa1))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece 0-100 Aras�nda Bir Say� Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						kisa1ver(kisa1, i);;
						cout << i + 1 << "." << "��rencinizin 2.K�sa S�nav Notunu Girin." << endl;
						do
						{
							cin >> kisa2;
							if (kontrolnot(kisa2))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece 0-100 Aras�nda Bir Say� Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						kisa2ver(kisa2, i);;
						cout << i + 1 << "." << "��rencinizin 1.�dev Notunu Girin." << endl;
						do
						{
							cin >> odev1;
							if (kontrolnot(odev1))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece 0-100 Aras�nda Bir Say� Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						odev1ver(odev1, i);;
						cout << i + 1 << "." << "��rencinizin 2.�dev Girin." << endl;
						do
						{
							cin >> odev2;
							if (kontrolnot(odev2))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece 0-100 Aras�nda Bir Say� Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						odev2ver(odev2, i);;
						cout << i + 1 << "." << "��rencinizin Proje Notunu Girin." << endl;
						do
						{
							cin >> proje;
							if (kontrolnot(proje))
							{
								kontrol = 0;
								
							}
							else
							{
								cout << "L�tfen Sadece 0-100 Aras�nda Bir Say� Giriniz!!!" << endl;
								kontrol = 1;
							}
						} while (kontrol);
						projever(proje, i);;
						system("cls");
					}
				}
				else 
				{
					cout << "L�tfen 0-100 Aras�nda Bir say� Giriniz !!!" << endl;
				}
			} while (!(ogrenciSayisi > 0 && ogrenciSayisi <= 100));
			break;
		}

		else
		{
			cout << "L�tfen Random i�in ('r') Manuel i�in ise ('m')Giriniz"<<endl ;
		}

	}  
	ortalamaal();				//Manuel Veya Random Olu�turulan S�n�f Listesindeki Herkesin Ortalama ve
	harfnotual();				// Harf Notlar� Bu iki Fonksiyon �le Hesapan�yor.
	string islem;
	int sayac = 0;
	string islemTekrar = "e";
	bool islemKontrol;
	while (islemTekrar == "e") // Yap�lmas� �stenen ��lemler Do While Yap�s� ��erisinde Hem Girilen Veri Kontrol Ediliyor
	{						   // Hem de Tekrardan ��lem Yap�lmak �stendi�inde Direk ��lem Se�ilebiliyor.
		if(sayac>0)   //Tekrar ��lem Yap�lmak �stenirse �nceki ��lemler Temizleniyor
		{
			system("cls");
		}
		cout << "L�tfen Yapmak �stedi�iniz ��lemi Se�iniz"<<endl;
		do					// Se�ilen ��lemin �stenilen De�erde Olup Olmad��� Kontrol Ediliyor 
		{					// E�er De�ilse Do While Yap�s� �le Tekrar �steniyor.
			
			sorguekrani(); 
			
			cin >> islem;		
			system("cls");
			if (islemKontrolu(islem)) // �stenilen ��lem T�r� Do�ruysa Bu Blo�a Girip �stenilen ��eme Gidiyor.
			{
				
				if (islem == "1") // Struct Dizisindeki Dolu Olan T�m Elemanlar� Listeliyor Bo� Olanlara Gelince Listeleme Bitiyor.
				{
					ogrenciyazdir();
					

				}
				else if (islem == "2") // En Y�ksek Notu Ekrana Yazd�r�rken Fonksiyonlar� �a��r�r
				{
					system("cls");
					enyukseknot();
				}
				else if (islem == "3")	// En D���k Notu Ekrana Yazd�r�rken Fonksiyonlar� �a��r�r
				{
					system("cls");
					endusuknot();
				}
				else if (islem == "4")	// S�n�f Ortalmas�n� Ekrana Yazd�r�rken Fonksiyonlar� �a��r�r
				{
					system("cls");
					sinifortalamasi();
				}
				else if (islem == "5")	// Standart Sapmay� Ekrana Yazd�r�rken Fonksiyonlar� �a��r�r
				{
					system("cls");
					standartsapma();
				}
				else if (islem == "6")	// Kullan�c�dan Girilen �ki De�er Aras�nda Not Ortalamas� Olan ��renciler Listeler. 
				{
					arayisirala();	//	Fonksiyon �a�r�l�yor
				}
				else if (islem == "7")	// Kullan�c�dan Girilen De�erin Alt�nda Not Ortalamas� Olan ��renciler Listeler.
				{
				

				asagisirala();	//	Fonksiyon �a�r�l�yor

				}
				else if (islem == "8")	// Kullan�c�dan Girilen De�erin �st�nde Not Ortalamas� Olan ��renciler Listeler.
				{
				
				yukarisirala();	//	Fonksiyon �a�r�l�yor
				}
				islemKontrol = 0;
			}
			else
			{
				system("cls");
				cout<<"Yanl�� Girdiniz"<<endl<<"L�tfen Sadece 1-8 Aras�nda 1 Adet Say� Giriniz!!! "<<endl;
			}
			sayac++;
		} while (!(islemKontrolu(islem)));
		cout << "Ba�ka Bir ��lem Yapmak �stiyorsan�z 'e' Tu�unu ��kmak ��in Herhangi Bir Tu�u Giriniz."<<endl;
		cin >> islemTekrar;
		
	}


return 0 ;
}

