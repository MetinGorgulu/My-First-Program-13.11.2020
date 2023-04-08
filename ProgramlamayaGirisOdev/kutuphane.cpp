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


#include "kutuphane.h"
#include <iostream>
#include <typeinfo>
#include <conio.h>
#include <string>
#include <iomanip>
#include <cmath>
#include <string> 

int sinifmevcudu;
void toplamogr( int x)
{
	sinifmevcudu = x;
}
void randomadlar()
{
	for (int i = 0; i < 100; i++) //Her Bir Üye Ýçin Ýsim Ve Soyisim Üretmek Ýçin For Döngüsü
	{

		int random1 = rand() % 30;
		int random2 = rand() % 30;
		ogrenciler[i].adi = isimler[random1];	// Random 1-30 Arasý Sayý Alarak Ýsim Dizisinden Rastgele Ýsim Seçer 
		ogrenciler[i].soyadi = soyisimler[random2]; // Random 1-30 Arasý Sayý Alarak Ýsim Dizisinden Rastgele Soyisim Seçer

	}
}
void randomnover()
{
	int dizisayaci = 0;
	bool kontrol = false;
	while (dizisayaci < 100) // 100 Kiþiye NO Vereceði Ýçin Sayac 100 Olana Kadar Dönüyor.
	{
		int randomnot = rand() % 999;
		for (int i = 0; i < 100; i++) //Üretilen Random Not Herhangi Bir Öðrencininkiyle Ayný Mý Diye Kontrol Ediliyor.
		{
			if (ogrenciler[dizisayaci].no = randomnot)
			{

				break;

			}
			else;
		}
		dizisayaci++;
	}
}
void randomnotvervize()
{
	int dizisayaci = 0;    
	int sayac1 = 0;				
	int sayac2 = 0;				//	Bu Sayaclar Ödevde Ýstenen Random Not Aralýklarýný
	int sayac3 = 0;				//	Düzenleyebilmek Ýçin Oluþturuldu.
	int sayac4 = 0;

	while (dizisayaci < 100)
	{
		int randomnot = rand() % 100;
		if ((sayac1 < 10 && randomnot <= 40) ||							//	Eðer Ki Oluþturulan Yeni Random Not 
			(sayac2 < 50 && 40 < randomnot && randomnot <= 70) ||		//	Yüzdesel Olarak Ýstenen Not Aralýðýný 
			(sayac3 < 15 && 70 < randomnot && randomnot <= 80) ||		//	Doldurmadýysa Ýf Ýçerisine Girerek 
			(sayac4 < 25 && 80 < randomnot && randomnot <= 100))		//	Devam Eder.
		{

			ogrenciler[dizisayaci].vize = randomnot;
			if (randomnot <= 40)
				sayac1++;
			else if (40 < randomnot && randomnot <= 70)
				sayac2++;
			else if (70 < randomnot && randomnot <= 80)
				sayac3++;
			else if (80 < randomnot && randomnot <= 100)
				sayac4++;
			else {}
			dizisayaci++;
		}
	}

	//cout << sayac1 << " " << sayac2 << " " << sayac3 << " " << sayac4 << " " << dizisayaci<<endl; 
	 
	//Eðer Ki Sýnýftaki Notlarýn Daðýtýmýnda Ki Oranýn Doðruluðunu Kontrol Etmek Ýsterseniz 
	// Yukarýdaki Fonksiyonu Aktif Ediniz!!!!!!!!
}
void randomnotverfinal()
{
	int dizisayaci = 0;
	int sayac1 = 0;
	int sayac2 = 0;
	int sayac3 = 0;
	int sayac4 = 0;

	while (dizisayaci < 100)
	{
		int randomnot = rand() % 100;
		if ((sayac1 < 10 && randomnot <= 40) ||
			(sayac2 < 50 && 40 < randomnot && randomnot <= 70) ||
			(sayac3 < 15 && 70 < randomnot && randomnot <= 80) ||
			(sayac4 < 25 && 80 < randomnot && randomnot <= 100))
		{

			ogrenciler[dizisayaci].final = randomnot;
			if (randomnot <= 40)
				sayac1++;
			else if (40 < randomnot && randomnot <= 70)
				sayac2++;
			else if (70 < randomnot && randomnot <= 80)
				sayac3++;
			else if (80 < randomnot && randomnot <= 100)
				sayac4++;
			else {}
			dizisayaci++;
		}
	}

}
void randomnotverodev1()
{
	int dizisayaci = 0;
	int sayac1 = 0;
	int sayac2 = 0;
	int sayac3 = 0;
	int sayac4 = 0;

	while (dizisayaci < 100)
	{
		int randomnot = rand() % 100;
		if ((sayac1 < 10 && randomnot <= 40) ||
			(sayac2 < 50 && 40 < randomnot && randomnot <= 70) ||
			(sayac3 < 15 && 70 < randomnot && randomnot <= 80) ||
			(sayac4 < 25 && 80 < randomnot && randomnot <= 100))
		{

			ogrenciler[dizisayaci].odev1 = randomnot;
			if (randomnot <= 40)
				sayac1++;
			else if (40 < randomnot && randomnot <= 70)
				sayac2++;
			else if (70 < randomnot && randomnot <= 80)
				sayac3++;
			else if (80 < randomnot && randomnot <= 100)
				sayac4++;
			else {}
			dizisayaci++;
		}
	}

}
void randomnotverodev2()
{
	int dizisayaci = 0;
	int sayac1 = 0;
	int sayac2 = 0;
	int sayac3 = 0;
	int sayac4 = 0;

	while (dizisayaci < 100)
	{
		int randomnot = rand() % 100;
		if ((sayac1 < 10 && randomnot <= 40) ||
			(sayac2 < 50 && 40 < randomnot && randomnot <= 70) ||
			(sayac3 < 15 && 70 < randomnot && randomnot <= 80) ||
			(sayac4 < 25 && 80 < randomnot && randomnot <= 100))
		{

			ogrenciler[dizisayaci].odev2 = randomnot;
			if (randomnot <= 40)
				sayac1++;
			else if (40 < randomnot && randomnot <= 70)
				sayac2++;
			else if (70 < randomnot && randomnot <= 80)
				sayac3++;
			else if (80 < randomnot && randomnot <= 100)
				sayac4++;
			else {}
			dizisayaci++;
		}
	}

}
void randomnotverproje()
{
	int dizisayaci = 0;
	int sayac1 = 0;
	int sayac2 = 0;
	int sayac3 = 0;
	int sayac4 = 0;

	while (dizisayaci < 100)
	{
		int randomnot = rand() % 100;
		if ((sayac1 < 10 && randomnot <= 40) ||
			(sayac2 < 50 && 40 < randomnot && randomnot <= 70) ||
			(sayac3 < 15 && 70 < randomnot && randomnot <= 80) ||
			(sayac4 < 25 && 80 < randomnot && randomnot <= 100))
		{

			ogrenciler[dizisayaci].proje = randomnot;
			if (randomnot <= 40)
				sayac1++;
			else if (40 < randomnot && randomnot <= 70)
				sayac2++;
			else if (70 < randomnot && randomnot <= 80)
				sayac3++;
			else if (80 < randomnot && randomnot <= 100)
				sayac4++;
			else {}
			dizisayaci++;
		}
	}

}
void randomnotverkisaSinav1()
{
	int dizisayaci = 0;
	int sayac1 = 0;
	int sayac2 = 0;
	int sayac3 = 0;
	int sayac4 = 0;

	while (dizisayaci < 100)
	{
		int randomnot = rand() % 100;
		if ((sayac1 < 10 && randomnot <= 40) ||
			(sayac2 < 50 && 40 < randomnot && randomnot <= 70) ||
			(sayac3 < 15 && 70 < randomnot && randomnot <= 80) ||
			(sayac4 < 25 && 80 < randomnot && randomnot <= 100))
		{

			ogrenciler[dizisayaci].kisaSinav1 = randomnot;
			if (randomnot <= 40)
				sayac1++;
			else if (40 < randomnot && randomnot <= 70)
				sayac2++;
			else if (70 < randomnot && randomnot <= 80)
				sayac3++;
			else if (80 < randomnot && randomnot <= 100)
				sayac4++;
			else {}
			dizisayaci++;
		}
	}

}
void randomnotverkisaSinav2()
{
	int dizisayaci = 0;
	int sayac1 = 0;
	int sayac2 = 0;
	int sayac3 = 0;
	int sayac4 = 0;

	while (dizisayaci < 100)
	{
		int randomnot = rand() % 100;
		if ((sayac1 < 10 && randomnot <= 40) ||
			(sayac2 < 50 && 40 < randomnot && randomnot <= 70) ||
			(sayac3 < 15 && 70 < randomnot && randomnot <= 80) ||
			(sayac4 < 25 && 80 < randomnot && randomnot <= 100))
		{

			ogrenciler[dizisayaci].kisaSinav2 = randomnot;
			if (randomnot <= 40)
				sayac1++;
			else if (40 < randomnot && randomnot <= 70)
				sayac2++;
			else if (70 < randomnot && randomnot <= 80)
				sayac3++;
			else if (80 < randomnot && randomnot <= 100)
				sayac4++;
			else {}
			dizisayaci++;
		}
	}

}
void adver(string x, int i)
{
	ogrenciler[i].adi = x;
}
void soyadver(string x, int i)
{
	ogrenciler[i].soyadi = x;
}
void vizever(string x, int i)
{
	ogrenciler[i].vize = stoi(x);
}
void finalver(string x, int i)
{
	ogrenciler[i].final = stoi(x);
}
void nover(string x, int i)
{
	ogrenciler[i].no = stoi(x);
}
void kisa1ver(string x, int i)
{
	ogrenciler[i].kisaSinav1 =stoi (x);
}
void kisa2ver(string x, int i)
{
	ogrenciler[i].kisaSinav2 = stoi(x);
}
void odev1ver(string x, int i)
{
	ogrenciler[i].odev1 = stoi(x);
}
void odev2ver(string x, int i)
{
	ogrenciler[i].odev2 = stoi(x);
}
void projever(string x, int i)
{
	ogrenciler[i].proje = stoi(x);
}
bool kontrolsayi(string x)
{
	bool kontrol;
	for (int i = 0; i < x.length(); i++)		// X Ýn Karakter Uzunluðu Kadar For Dönüyor.
	{
		if (isdigit(x[i]))		//	Karakterin Sayý Olup Olmadýðý Kontrol Ediliyor.
		{
			kontrol = true;
		}
		else
		{
			kontrol = false;
			break;
		}
	}
	if (kontrol)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool kontrolharf(string x)			
{
	bool kontrol;
	for (int i = 0; i < x.length(); i++)			// X Ýn Karakter Uzunluðu Kadar For Dönüyor.
	{
		if (!(isdigit(x[i])))			//	Karakterin Sayý Olup Olmadýðý Kontrol Ediliyor.
		{
			kontrol = true;
		}
		else
		{
			kontrol = false;
			break;
		}
	}
	if (kontrol)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool kontrolnot(string x)
{
	int aralikKontrol;
	bool kontrol;
	for (int i = 0; i < x.length(); i++)		// X Ýn Karakter Uzunluðu Kadar For Dönüyor.
	{
		if ((isdigit(x[i])))		//	Karakterin Sayý Olup Olmadýðý Kontrol Ediliyor.
		{
			kontrol = true;
		}
		else
		{
			kontrol = false;
			break;
		}
	}
	if ((kontrol))
	{
		aralikKontrol = stoi(x);
	}
	else
	{
		return false;
	}
	if (kontrol && 0 <= aralikKontrol && aralikKontrol <= 100)		// Sayý 0-100 Arasýnda Olup Olmadýðý
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool kontrolno(string x)
{
	int aralikKontrol;
	bool kontrol;
	for (int i = 0; i < x.length(); i++)		// X Ýn Karakter Uzunluðu Kadar For Dönüyor.
	{
		if ((isdigit(x[i])))		//	Karakterin Sayý Olup Olmadýðý Kontrol Ediliyor.
		{
			kontrol = true;
		}
		else
		{
			kontrol = false;
			break;
		}
	}
	if ((kontrol))
	{
		aralikKontrol = stoi(x);
	}
	else
	{
		return false;
	}
	if (kontrol && 0 < aralikKontrol && aralikKontrol < 1000)		// Sayý 0-100 Arasýnda Olup Olmadýðý
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool islemKontrolu(string x)
{
	char islemler[10] = { '1','2','3','4','5','6','7','8'};
	bool kontrol = false;
	for (int i = 0; i < 8; i++)		// 8 Ýþlem Olduðu Ýçin 8 E Kadar Dönüyor.
	{
		if (x[0] == islemler[i])		//Gelen Verinin Ýlk Karakteri Bizim Ýstediðimiz Deðerdeyse Eðer Girer.
		{
			kontrol = true;
		
			if (isgraph(x[1]))			// Biz Ýkinci veya Daha fazla Karakter Ýstemiyoruz O yüzden 
			{							// Baþka Karakter Girmiþ Kontrol Ediyor.
				kontrol = false;
				break;
			}
		}
	}
	if (kontrol)
		return true;
	return false;
}
void ogrenciyazdir()
{
	int i = 0;
	for (int k = 0; ; k++) // Her Seferinde 20 Öðrenci Yazýlmasý Ýçin Sonsuz Döngüye Giriyor.
	{					   //	Döngüden Çýkmak Ýçin Listenin Bitmesi Gerekiyor Liste Bitince Break Komutu
						   // Ýle Döngüden Çýkýlýyor
		const int a = getchar(); // Devam Etmek Ýçin Enter Tuþuna Basýlmasýný Gerektiren Kod.
		if (a == 1) break;

		system("cls");
		cout << setw(20) << left << "Adý" << setw(20) << "Soyadý" << setw(20) << "Numara" << setw(24) << "Ortalamasý" << setw(20) << "Harf Notu" << endl;
		for (int j = 0; j < 20; j++) //Her Seferinde Sadece 20 Kiþiyi Ekrana Yazdýrýyor
		{
			if (ogrenciler[i].adi != "" && i < 100)	// Dizi Ýçerisindeki Dolu Olanlarý Buluyor.
			{
				cout <<setw(20)<<left<< ogrenciler[i].adi <<right<<""<< setw(20) << left << ogrenciler[i].soyadi << setw(20) << ogrenciler[i].no << setw(25) << ogrenciler[i].ortalama << setw(20) << ogrenciler[i].harf << endl;

				i++;
			}
			else
			{
				cout << "Öðrencilerinizin Listesi Bitti" << endl;
				break;
			}

			if (i == 100)		// Listemiz Max 100 Kiþilik Olduðu Ýçin Eðer Liste Doluysa 100 De Otomatik Bitiyor.
			{
				cout << "Öðrencilerinizin Listesi Bitti" << endl;
				break;
			}


		}
		if (i == 100 || ogrenciler[i].adi == "") // Listemiz Max 100 Kiþilik Olduðu Ýçin Eðer Liste Doluysa 100 De Otomatik Bitiyor.
		{
			break;
		}
		if (k < 4) // Son 20 Öðrenciyi Bastýrdýktan Sonra Enter Tuþuna Bas Yazýsý Çýkmamasý Ýçin
		{
			cout << "Devam Etmek Ýçin Enter Tuþuna Basýnýz";
		}

	}
}
void ortalamaal()
{
	for (int i = 0; i < 100; i++)
	{
		ogrenciler[i].ortalama = (((ogrenciler[i].vize * 0.5) + (ogrenciler[i].kisaSinav1 * 0.07) +
			(ogrenciler[i].kisaSinav2 * 0.07) + (ogrenciler[i].odev1 * 0.1) + (ogrenciler[i].odev2 * 0.1) +
			(ogrenciler[i].proje * 0.16)) * 0.55) + (ogrenciler[i].final * 0.45);
	}
}
void harfnotual()
{
	for (int i = 0; i < 100; i++)
	{
		if (ogrenciler[i].ortalama < 40)
		{
			ogrenciler[i].harf = "FF";
		}
		else if (40 <= ogrenciler[i].ortalama && ogrenciler[i].ortalama < 50)
		{
			ogrenciler[i].harf = "DD";
		}
		else if (50 <= ogrenciler[i].ortalama && ogrenciler[i].ortalama < 60)
		{
			ogrenciler[i].harf = "CC";
		}
		else if (60 <= ogrenciler[i].ortalama && ogrenciler[i].ortalama < 70)
		{
			ogrenciler[i].harf = "CB";
		}
		else if (70 <= ogrenciler[i].ortalama && ogrenciler[i].ortalama < 80)
		{
			ogrenciler[i].harf = "BB";
		}
		else if (80 <= ogrenciler[i].ortalama && ogrenciler[i].ortalama < 90)
		{
			ogrenciler[i].harf = "BA";
		}
		else if (90 <= ogrenciler[i].ortalama && ogrenciler[i].ortalama <= 100)
		{
			ogrenciler[i].harf = "AA";
		}

	}
}
void enyukseknot()
{
	int tut = 0;
	int enyuksek = 0;
	for (int i = 0; i < sinifmevcudu; i++)  //	Sinif Mevcudu Ne Kadar Ýse O Kadar Döner.
	{
		if (ogrenciler[i].ortalama > enyuksek)		// En Yüksek Notu Bulur.
		{
			enyuksek = ogrenciler[i].ortalama;
			tut = i;
		}

	}
	cout << "En Yüksek Ortalamaya Sahip Kiþi Aþaðýda Yer Almaktadýr" << endl <<endl<<
		ogrenciler[tut].adi <<"  "<< ogrenciler[tut].soyadi <<"     " << ogrenciler[tut].ortalama <<"     "<< ogrenciler[tut].harf << endl<<endl<<endl;
}
void endusuknot()
{
	int tut = 0;
	int endusuk = 100;
	for (int i = 0; i < sinifmevcudu; i++)		//	Sinif Mevcudu Ne Kadar Ýse O Kadar Döner.
	{
		if (ogrenciler[i].ortalama < endusuk)	// En Yüksek Notu Bulur.
		{
			endusuk = ogrenciler[i].ortalama;
			tut = i;
		}

	}
	cout << "En Düþük Ortalamaya Sahip Kiþi Aþaðýda Yer Almaktadýr" << endl <<endl<<
		ogrenciler[tut].adi << "  " << ogrenciler[tut].soyadi << "     "  << ogrenciler[tut].ortalama << "    " << ogrenciler[tut].harf << endl<<endl<<endl;
}
void sinifortalamasi()
{
	float toplam = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//	Sinif Mevcudu Ne Kadar Ýse O Kadar Döner.
	{
		toplam += ogrenciler[i].ortalama;	
	}
	cout << "Sýnýf Ortalmasý  :" << setw(12) << toplam / sinifmevcudu << endl;
}
void standartsapma()
{
	int toplam = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//	Sinif Mevcudu Ne Kadar Ýse O Kadar Döner.
	{
		toplam += ogrenciler[i].ortalama;
	}
	float aritmetik = toplam / sinifmevcudu;
	float toplam2 = 0;
	float varyans = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//	Sinif Mevcudu Ne Kadar Ýse O Kadar Döner.
	{
		varyans = ogrenciler[i].ortalama - aritmetik;
		toplam2 += varyans * varyans;
	}
	float st = toplam2 / (sinifmevcudu - 1);
	cout << "Sýnýfýn Standart Sapmasý  :" << setw(12) << sqrt(st) << endl;

}
void arayisirala()
{
	int  kontrol1, kontrol2;
	string deger1, deger2;
	do						// Do While Ýle Ýstenilen Deðerin Doðru Girilip Girilmediði Kontrol Ediliyor.
	{
		cout << "Getirmek Ýstediðiniz Deðer Aralýklarýný Giriniz.(Önce Küçük Olan !!)" << endl;
		cin >> deger1;
		cin >> deger2;

		if (kontrolnot(deger1)) // Girilen Deðer 0-100 Arasýnda Mý Kontrol Edilir.
		{
			kontrol1 = 0;
			if (kontrolnot(deger2))	// Girilen Deðer 0-100 Arasýnda Mý Kontrol Edilir.
			{
				if (stoi(deger1) < stoi(deger2))	//Girilen Ýlk Deðer Ýkinci Deðerden Küçük Mü Kontrol Edilir.
				{
					kontrol2 = 0;
				}
				else
				{
					cout << "Lütfen Önce Küçük Olan Notu Giriniz!!!!!!!" << endl;
					kontrol2 = 1;
				}
			}
			else
			{
				cout << "Lütfen 2.Sayýyý Sadece 0-100 Arasýnda Bir Tam Sayý Giriniz!!!" << endl;
				kontrol2 = 1;
			}
		}
		else
		{
			cout << "Lütfen 1.Sayýyý Sadece 0-100 Arasýnda Bir Tam Sayý Giriniz!!!" << endl;
			kontrol1 = 1;
		}


	} while (kontrol1 || kontrol2);

	int kontrol = 0;
	for (int i = 0; i < sinifmevcudu; i++) //Sadece Sýnýftaki Var Olan Gerçek Kiþileri Kontrol Ýçin
	{
		if (stoi(deger1) <= ogrenciler[i].ortalama && ogrenciler[i].ortalama <= stoi(deger2))	// Ýki Deðer Arasýndaki Sayýlarý Belirler
		{
			kontrol++;
			cout <<setw(15)<<left<< ogrenciler[i].adi <<""<< setw(15)<<left << ogrenciler[i].soyadi <<""<<setw(10) << ogrenciler[i].ortalama << setw(10) << ogrenciler[i].harf << endl;
		}
	}
	if (kontrol > 0); // Ýki Deðer Arasýnda Sayý Var Mý Kontrol Eder
	else
	{
		cout << "Ýki Deðer Aralýðýnda Notu Olan Öðrenci Bulunmamakta" << endl;
	}
}
void sorguekrani()
{
	cout << "1- Tüm Sýnýfý Yazdýr" << endl <<
		"2- Sýnýfýn En Yüksek Notunu Yazdýr" << endl <<
		"3- Sýnýfýn En Düþük Notunu Yazdýr" << endl <<
		"4- Sýnýfýn Ortalmasýný Yazdýr" << endl <<
		"5- Sýnýfýn Standart Sapmasýný Yazdý" << endl <<
		"6- Baþarý Notu Girilen Aralýkta Olanlarý Listele" << endl <<
		"7- Baþarý Notu Girilen Aralýktan Az Olanlarý Listele" << endl <<
		"8- Baþarý Notu Girilen Aralýktan Çok Olanlarý Listele" << endl;
}
void asagisirala()
{
	int  kontrol1;
	string deger1;
	do								// Do While Ýle Ýstenilen Deðerin Doðru Girilip Girilmediði Kontrol Ediliyor.
	{
		cout << "Hangi Deðerden Aþaðýsýný Sýralamak Ýstiyorsanýz Lütfen Yazýnýz" << endl;
		cin >> deger1;

		if (kontrolnot(deger1))  // Girilen Deðer 0-100 Arasýnda Mý Kontrol Edilir.
		{
			kontrol1 = 0;
		}
		else
		{
			cout << "Lütfen Sadece 0-100 Arasýnda Bir Tam Sayý Giriniz!!!" << endl;
			kontrol1 = 1;
		}


	} while (kontrol1);
	int kontrol = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//Sadece Sýnýftaki Var Olan Gerçek Kiþileri Kontrol Ýçin
	{
		if (ogrenciler[i].ortalama <= stoi(deger1))	// Deðerden Küçük Olan Notlar Bulunuyor
		{
			kontrol++;
			cout << setw(15) << left << ogrenciler[i].adi << "" << setw(15) << left << ogrenciler[i].soyadi << "" << setw(10) << ogrenciler[i].ortalama << setw(10) << ogrenciler[i].harf << endl;
		}
	}
	if (kontrol > 0);	//Ýstenilen Deðerden Düþük Not Var Mý Kontrol Ediliyor
	else
	{
		cout << stoi(deger1) << " Deðerinden Düþük Notu Olan Öðrenci Bulunmamakta" << endl;
	}
}
void yukarisirala()
{
	int  kontrol1;
	string deger1;
	do
	{
		cout << "Hangi Deðerden Yukarýsýný Sýralamak Ýstiyorsanýz Lütfen Yazýnýz" << endl;
		cin >> deger1;

		if (kontrolnot(deger1))	// Girilen Deðer 0-100 Arasýnda Mý Kontrol Edilir.
		{
			kontrol1 = 0;
		}
		else
		{
			cout << "Lütfen Sadece 0-100 Arasýnda Bir Tam Sayý Giriniz!!!" << endl;
			kontrol1 = 1;
		}


	} while (kontrol1);

	int kontrol = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//Sadece Sýnýftaki Var Olan Gerçek Kiþileri Kontrol Ýçin
	{
		if (stoi(deger1) <= ogrenciler[i].ortalama)	// Deðerden Küçük Olan Notlar Bulunuyor
		{
			kontrol++;
			cout << setw(15) << left << ogrenciler[i].adi << "" << setw(15) << left << ogrenciler[i].soyadi << "" << setw(10) << ogrenciler[i].ortalama << setw(10) << ogrenciler[i].harf << endl;
		}
	}
	if (kontrol > 0);	//Ýstenilen Deðerden Yüksek Not Var Mý Kontrol Ediliyor.
	else
	{
		cout << stoi(deger1) << " Deðerinden Yüksek Notu Olan Öðrenci Bulunmamakta" << endl;
	}
}