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
	for (int i = 0; i < 100; i++) //Her Bir �ye ��in �sim Ve Soyisim �retmek ��in For D�ng�s�
	{

		int random1 = rand() % 30;
		int random2 = rand() % 30;
		ogrenciler[i].adi = isimler[random1];	// Random 1-30 Aras� Say� Alarak �sim Dizisinden Rastgele �sim Se�er 
		ogrenciler[i].soyadi = soyisimler[random2]; // Random 1-30 Aras� Say� Alarak �sim Dizisinden Rastgele Soyisim Se�er

	}
}
void randomnover()
{
	int dizisayaci = 0;
	bool kontrol = false;
	while (dizisayaci < 100) // 100 Ki�iye NO Verece�i ��in Sayac 100 Olana Kadar D�n�yor.
	{
		int randomnot = rand() % 999;
		for (int i = 0; i < 100; i++) //�retilen Random Not Herhangi Bir ��rencininkiyle Ayn� M� Diye Kontrol Ediliyor.
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
	int sayac2 = 0;				//	Bu Sayaclar �devde �stenen Random Not Aral�klar�n�
	int sayac3 = 0;				//	D�zenleyebilmek ��in Olu�turuldu.
	int sayac4 = 0;

	while (dizisayaci < 100)
	{
		int randomnot = rand() % 100;
		if ((sayac1 < 10 && randomnot <= 40) ||							//	E�er Ki Olu�turulan Yeni Random Not 
			(sayac2 < 50 && 40 < randomnot && randomnot <= 70) ||		//	Y�zdesel Olarak �stenen Not Aral���n� 
			(sayac3 < 15 && 70 < randomnot && randomnot <= 80) ||		//	Doldurmad�ysa �f ��erisine Girerek 
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
	 
	//E�er Ki S�n�ftaki Notlar�n Da��t�m�nda Ki Oran�n Do�rulu�unu Kontrol Etmek �sterseniz 
	// Yukar�daki Fonksiyonu Aktif Ediniz!!!!!!!!
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
	for (int i = 0; i < x.length(); i++)		// X �n Karakter Uzunlu�u Kadar For D�n�yor.
	{
		if (isdigit(x[i]))		//	Karakterin Say� Olup Olmad��� Kontrol Ediliyor.
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
	for (int i = 0; i < x.length(); i++)			// X �n Karakter Uzunlu�u Kadar For D�n�yor.
	{
		if (!(isdigit(x[i])))			//	Karakterin Say� Olup Olmad��� Kontrol Ediliyor.
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
	for (int i = 0; i < x.length(); i++)		// X �n Karakter Uzunlu�u Kadar For D�n�yor.
	{
		if ((isdigit(x[i])))		//	Karakterin Say� Olup Olmad��� Kontrol Ediliyor.
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
	if (kontrol && 0 <= aralikKontrol && aralikKontrol <= 100)		// Say� 0-100 Aras�nda Olup Olmad���
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
	for (int i = 0; i < x.length(); i++)		// X �n Karakter Uzunlu�u Kadar For D�n�yor.
	{
		if ((isdigit(x[i])))		//	Karakterin Say� Olup Olmad��� Kontrol Ediliyor.
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
	if (kontrol && 0 < aralikKontrol && aralikKontrol < 1000)		// Say� 0-100 Aras�nda Olup Olmad���
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
	for (int i = 0; i < 8; i++)		// 8 ��lem Oldu�u ��in 8 E Kadar D�n�yor.
	{
		if (x[0] == islemler[i])		//Gelen Verinin �lk Karakteri Bizim �stedi�imiz De�erdeyse E�er Girer.
		{
			kontrol = true;
		
			if (isgraph(x[1]))			// Biz �kinci veya Daha fazla Karakter �stemiyoruz O y�zden 
			{							// Ba�ka Karakter Girmi� Kontrol Ediyor.
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
	for (int k = 0; ; k++) // Her Seferinde 20 ��renci Yaz�lmas� ��in Sonsuz D�ng�ye Giriyor.
	{					   //	D�ng�den ��kmak ��in Listenin Bitmesi Gerekiyor Liste Bitince Break Komutu
						   // �le D�ng�den ��k�l�yor
		const int a = getchar(); // Devam Etmek ��in Enter Tu�una Bas�lmas�n� Gerektiren Kod.
		if (a == 1) break;

		system("cls");
		cout << setw(20) << left << "Ad�" << setw(20) << "Soyad�" << setw(20) << "Numara" << setw(24) << "Ortalamas�" << setw(20) << "Harf Notu" << endl;
		for (int j = 0; j < 20; j++) //Her Seferinde Sadece 20 Ki�iyi Ekrana Yazd�r�yor
		{
			if (ogrenciler[i].adi != "" && i < 100)	// Dizi ��erisindeki Dolu Olanlar� Buluyor.
			{
				cout <<setw(20)<<left<< ogrenciler[i].adi <<right<<""<< setw(20) << left << ogrenciler[i].soyadi << setw(20) << ogrenciler[i].no << setw(25) << ogrenciler[i].ortalama << setw(20) << ogrenciler[i].harf << endl;

				i++;
			}
			else
			{
				cout << "��rencilerinizin Listesi Bitti" << endl;
				break;
			}

			if (i == 100)		// Listemiz Max 100 Ki�ilik Oldu�u ��in E�er Liste Doluysa 100 De Otomatik Bitiyor.
			{
				cout << "��rencilerinizin Listesi Bitti" << endl;
				break;
			}


		}
		if (i == 100 || ogrenciler[i].adi == "") // Listemiz Max 100 Ki�ilik Oldu�u ��in E�er Liste Doluysa 100 De Otomatik Bitiyor.
		{
			break;
		}
		if (k < 4) // Son 20 ��renciyi Bast�rd�ktan Sonra Enter Tu�una Bas Yaz�s� ��kmamas� ��in
		{
			cout << "Devam Etmek ��in Enter Tu�una Bas�n�z";
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
	for (int i = 0; i < sinifmevcudu; i++)  //	Sinif Mevcudu Ne Kadar �se O Kadar D�ner.
	{
		if (ogrenciler[i].ortalama > enyuksek)		// En Y�ksek Notu Bulur.
		{
			enyuksek = ogrenciler[i].ortalama;
			tut = i;
		}

	}
	cout << "En Y�ksek Ortalamaya Sahip Ki�i A�a��da Yer Almaktad�r" << endl <<endl<<
		ogrenciler[tut].adi <<"  "<< ogrenciler[tut].soyadi <<"     " << ogrenciler[tut].ortalama <<"     "<< ogrenciler[tut].harf << endl<<endl<<endl;
}
void endusuknot()
{
	int tut = 0;
	int endusuk = 100;
	for (int i = 0; i < sinifmevcudu; i++)		//	Sinif Mevcudu Ne Kadar �se O Kadar D�ner.
	{
		if (ogrenciler[i].ortalama < endusuk)	// En Y�ksek Notu Bulur.
		{
			endusuk = ogrenciler[i].ortalama;
			tut = i;
		}

	}
	cout << "En D���k Ortalamaya Sahip Ki�i A�a��da Yer Almaktad�r" << endl <<endl<<
		ogrenciler[tut].adi << "  " << ogrenciler[tut].soyadi << "     "  << ogrenciler[tut].ortalama << "    " << ogrenciler[tut].harf << endl<<endl<<endl;
}
void sinifortalamasi()
{
	float toplam = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//	Sinif Mevcudu Ne Kadar �se O Kadar D�ner.
	{
		toplam += ogrenciler[i].ortalama;	
	}
	cout << "S�n�f Ortalmas�  :" << setw(12) << toplam / sinifmevcudu << endl;
}
void standartsapma()
{
	int toplam = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//	Sinif Mevcudu Ne Kadar �se O Kadar D�ner.
	{
		toplam += ogrenciler[i].ortalama;
	}
	float aritmetik = toplam / sinifmevcudu;
	float toplam2 = 0;
	float varyans = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//	Sinif Mevcudu Ne Kadar �se O Kadar D�ner.
	{
		varyans = ogrenciler[i].ortalama - aritmetik;
		toplam2 += varyans * varyans;
	}
	float st = toplam2 / (sinifmevcudu - 1);
	cout << "S�n�f�n Standart Sapmas�  :" << setw(12) << sqrt(st) << endl;

}
void arayisirala()
{
	int  kontrol1, kontrol2;
	string deger1, deger2;
	do						// Do While �le �stenilen De�erin Do�ru Girilip Girilmedi�i Kontrol Ediliyor.
	{
		cout << "Getirmek �stedi�iniz De�er Aral�klar�n� Giriniz.(�nce K���k Olan !!)" << endl;
		cin >> deger1;
		cin >> deger2;

		if (kontrolnot(deger1)) // Girilen De�er 0-100 Aras�nda M� Kontrol Edilir.
		{
			kontrol1 = 0;
			if (kontrolnot(deger2))	// Girilen De�er 0-100 Aras�nda M� Kontrol Edilir.
			{
				if (stoi(deger1) < stoi(deger2))	//Girilen �lk De�er �kinci De�erden K���k M� Kontrol Edilir.
				{
					kontrol2 = 0;
				}
				else
				{
					cout << "L�tfen �nce K���k Olan Notu Giriniz!!!!!!!" << endl;
					kontrol2 = 1;
				}
			}
			else
			{
				cout << "L�tfen 2.Say�y� Sadece 0-100 Aras�nda Bir Tam Say� Giriniz!!!" << endl;
				kontrol2 = 1;
			}
		}
		else
		{
			cout << "L�tfen 1.Say�y� Sadece 0-100 Aras�nda Bir Tam Say� Giriniz!!!" << endl;
			kontrol1 = 1;
		}


	} while (kontrol1 || kontrol2);

	int kontrol = 0;
	for (int i = 0; i < sinifmevcudu; i++) //Sadece S�n�ftaki Var Olan Ger�ek Ki�ileri Kontrol ��in
	{
		if (stoi(deger1) <= ogrenciler[i].ortalama && ogrenciler[i].ortalama <= stoi(deger2))	// �ki De�er Aras�ndaki Say�lar� Belirler
		{
			kontrol++;
			cout <<setw(15)<<left<< ogrenciler[i].adi <<""<< setw(15)<<left << ogrenciler[i].soyadi <<""<<setw(10) << ogrenciler[i].ortalama << setw(10) << ogrenciler[i].harf << endl;
		}
	}
	if (kontrol > 0); // �ki De�er Aras�nda Say� Var M� Kontrol Eder
	else
	{
		cout << "�ki De�er Aral���nda Notu Olan ��renci Bulunmamakta" << endl;
	}
}
void sorguekrani()
{
	cout << "1- T�m S�n�f� Yazd�r" << endl <<
		"2- S�n�f�n En Y�ksek Notunu Yazd�r" << endl <<
		"3- S�n�f�n En D���k Notunu Yazd�r" << endl <<
		"4- S�n�f�n Ortalmas�n� Yazd�r" << endl <<
		"5- S�n�f�n Standart Sapmas�n� Yazd�" << endl <<
		"6- Ba�ar� Notu Girilen Aral�kta Olanlar� Listele" << endl <<
		"7- Ba�ar� Notu Girilen Aral�ktan Az Olanlar� Listele" << endl <<
		"8- Ba�ar� Notu Girilen Aral�ktan �ok Olanlar� Listele" << endl;
}
void asagisirala()
{
	int  kontrol1;
	string deger1;
	do								// Do While �le �stenilen De�erin Do�ru Girilip Girilmedi�i Kontrol Ediliyor.
	{
		cout << "Hangi De�erden A�a��s�n� S�ralamak �stiyorsan�z L�tfen Yaz�n�z" << endl;
		cin >> deger1;

		if (kontrolnot(deger1))  // Girilen De�er 0-100 Aras�nda M� Kontrol Edilir.
		{
			kontrol1 = 0;
		}
		else
		{
			cout << "L�tfen Sadece 0-100 Aras�nda Bir Tam Say� Giriniz!!!" << endl;
			kontrol1 = 1;
		}


	} while (kontrol1);
	int kontrol = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//Sadece S�n�ftaki Var Olan Ger�ek Ki�ileri Kontrol ��in
	{
		if (ogrenciler[i].ortalama <= stoi(deger1))	// De�erden K���k Olan Notlar Bulunuyor
		{
			kontrol++;
			cout << setw(15) << left << ogrenciler[i].adi << "" << setw(15) << left << ogrenciler[i].soyadi << "" << setw(10) << ogrenciler[i].ortalama << setw(10) << ogrenciler[i].harf << endl;
		}
	}
	if (kontrol > 0);	//�stenilen De�erden D���k Not Var M� Kontrol Ediliyor
	else
	{
		cout << stoi(deger1) << " De�erinden D���k Notu Olan ��renci Bulunmamakta" << endl;
	}
}
void yukarisirala()
{
	int  kontrol1;
	string deger1;
	do
	{
		cout << "Hangi De�erden Yukar�s�n� S�ralamak �stiyorsan�z L�tfen Yaz�n�z" << endl;
		cin >> deger1;

		if (kontrolnot(deger1))	// Girilen De�er 0-100 Aras�nda M� Kontrol Edilir.
		{
			kontrol1 = 0;
		}
		else
		{
			cout << "L�tfen Sadece 0-100 Aras�nda Bir Tam Say� Giriniz!!!" << endl;
			kontrol1 = 1;
		}


	} while (kontrol1);

	int kontrol = 0;
	for (int i = 0; i < sinifmevcudu; i++)	//Sadece S�n�ftaki Var Olan Ger�ek Ki�ileri Kontrol ��in
	{
		if (stoi(deger1) <= ogrenciler[i].ortalama)	// De�erden K���k Olan Notlar Bulunuyor
		{
			kontrol++;
			cout << setw(15) << left << ogrenciler[i].adi << "" << setw(15) << left << ogrenciler[i].soyadi << "" << setw(10) << ogrenciler[i].ortalama << setw(10) << ogrenciler[i].harf << endl;
		}
	}
	if (kontrol > 0);	//�stenilen De�erden Y�ksek Not Var M� Kontrol Ediliyor.
	else
	{
		cout << stoi(deger1) << " De�erinden Y�ksek Notu Olan ��renci Bulunmamakta" << endl;
	}
}