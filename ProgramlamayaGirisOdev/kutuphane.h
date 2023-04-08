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
#ifndef Kutuphane_hpp
#define Kutuphane_hpp
#include <iostream>
using namespace std;
struct tarih
{
	int gun;
	int ay;
	int yil;

};
struct ogrenci
{
	string adi;
	string soyadi;
	int no;
	int kisaSinav1;
	int kisaSinav2;
	int odev1;
	int odev2;
	int proje;
	int vize;
	int final;
	float ortalama;
	string harf;
	struct tarih dogumTarihi;
};

static struct ogrenci ogrenciler[100];
static string isimler[30] = { "Metin","Bedirhan","Sait","Melih","Ece","Ahmet","Mehmet","Seda","Eda",
	"Nagehan","Buse","Furkan","Talha","�mer","Ay�e","Fatma","Nur","Nergis","�i�dem","Esra",
	"Esma","Ali","�eng�l","Sevda","Merve","Emine","G�ney","Emin","B��ra","�lkay", };
static string soyisimler[30]{ "G�rg�l�","K�l��arslan","Sar�temur","Solak","Canbaz","G�nay","Kaya","Demir",
	"�olak","Akda�","Y�ld�r�m","�elik","�ahin","Y�ld�z","�zt�rk","Ayd�n","�zdemir","Arslan","Do�an",
	"K�l��","�etin","Kara","Ko�","Kurt","�zkan","�im�ek","Polat","�zcan","�ak�r","Yavuz" };
void toplamogr(int x);					//  Siniftaki ��renci Say�s�n� sinifmevudu i�eriine atar.
void randomadlar();
void randomnotvervize();				//				|	 Kulan�c�ya Sunulan �ki |		
void randomnover();						//				|							|
void randomnotverfinal();				//				|	Se�enekten Birisi		|	
void randomnotverodev1();				 //				|	Olan ��rencileri		|	
void randomnotverodev2();			 //					|	 Atarken ��rencilerin	|		
void randomnotverproje();			 //					|	 Rastgele Alacaa��		|	
void randomnotverkisaSinav1();		  //				|	 Notlar�n Olu�turulma	|		
void randomnotverkisaSinav2();		//					|	Fonskiyonlar�.			|
void adver(string ad, int i);		//		|	Kullan�c�dan Gelen  |						
void soyadver(string x, int i);		//		|	Verileri			|	
void nover(string x, int i);		//		|	��ler				|		
void vizever(string x, int i);		//		|						|
void finalver(string x, int i);		//		|						|
void kisa1ver(string x, int i);		//		|						|		
void kisa2ver(string x, int i);		//		|						|		
void odev1ver(string x, int i);		//		|						|		
void odev2ver(string x, int i);		//		|						|						
void projever(string x, int i);		//		|						|					
bool kontrolsayi(string x);   //		|	Kullan�c�dan �stenen		|	
bool kontrolharf(string x);	  //		|	Say�lar�n �stenen			|
bool kontrolnot(string x);	  //		|	Ko�ullarda Olup Olmad���n�	|	
bool kontrolno(string x);		//		|								|
bool islemKontrolu(string x); //		| Kontrol Eden Fonksiyonlar.	|
void ortalamaal();		// S�n�f Mevcudu Kadar Struct ��indeki ��renci Notlar�n�n Ortalamalar�n� al�r.	  
void harfnotual();		// Al�nan Ortalamalar� Harf	Notuna �eviren Fonksiyon. Harf Aral�klar�n� Kendim Belirledim.
void ogrenciyazdir();	// Ogrencileri Ekrana Yazd�r�r.
void enyukseknot();		// En Y�ksek Notu Ekrana Yazd�r�r.
void endusuknot();		// En D���k Notu Ekrana Yazd�r�r.
void sinifortalamasi(); // S�n�f�n Not Ortalmas�n� Ekrana Yazd�r�r.
void standartsapma();	// S�n�f�n Standart Sapmas�n� Ekrana Yazd�r�r.
void arayisirala();  // Kullan�c�dan Girilen �ki De�er Aras�ndaki Ortalamar� Ekrana Yazd�r�r.
void sorguekrani();			// Tekrar ��lem Yap�lmak �stendi�inde Se�enekleri Ekrana Yazd�rmak ��in Fonksiyon.
void asagisirala();   // Kullan�c�dan Girilen De�erin Alt�ndaki Ortalmalar� Ekrana Yazd�r�r.
void yukarisirala();  // Kullan�c�dan Girilen De�erin Alt�ndaki Oralamalar� Ekrana Yazd�r�r.
#endif
