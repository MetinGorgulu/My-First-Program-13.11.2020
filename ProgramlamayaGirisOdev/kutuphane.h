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
	"Nagehan","Buse","Furkan","Talha","Ömer","Ayþe","Fatma","Nur","Nergis","Çiðdem","Esra",
	"Esma","Ali","Þengül","Sevda","Merve","Emine","Güney","Emin","Büþra","Ýlkay", };
static string soyisimler[30]{ "Görgülü","Kýlýçarslan","Sarýtemur","Solak","Canbaz","Günay","Kaya","Demir",
	"Çolak","Akdaþ","Yýldýrým","Çelik","Þahin","Yýldýz","Öztürk","Aydýn","Özdemir","Arslan","Doðan",
	"Kýlýç","Çetin","Kara","Koç","Kurt","Özkan","Þimþek","Polat","Özcan","Çakýr","Yavuz" };
void toplamogr(int x);					//  Siniftaki Öðrenci Sayýsýný sinifmevudu içeriine atar.
void randomadlar();
void randomnotvervize();				//				|	 Kulanýcýya Sunulan Ýki |		
void randomnover();						//				|							|
void randomnotverfinal();				//				|	Seçenekten Birisi		|	
void randomnotverodev1();				 //				|	Olan Öðrencileri		|	
void randomnotverodev2();			 //					|	 Atarken Öðrencilerin	|		
void randomnotverproje();			 //					|	 Rastgele Alacaaðý		|	
void randomnotverkisaSinav1();		  //				|	 Notlarýn Oluþturulma	|		
void randomnotverkisaSinav2();		//					|	Fonskiyonlarý.			|
void adver(string ad, int i);		//		|	Kullanýcýdan Gelen  |						
void soyadver(string x, int i);		//		|	Verileri			|	
void nover(string x, int i);		//		|	Ýþler				|		
void vizever(string x, int i);		//		|						|
void finalver(string x, int i);		//		|						|
void kisa1ver(string x, int i);		//		|						|		
void kisa2ver(string x, int i);		//		|						|		
void odev1ver(string x, int i);		//		|						|		
void odev2ver(string x, int i);		//		|						|						
void projever(string x, int i);		//		|						|					
bool kontrolsayi(string x);   //		|	Kullanýcýdan Ýstenen		|	
bool kontrolharf(string x);	  //		|	Sayýlarýn Ýstenen			|
bool kontrolnot(string x);	  //		|	Koþullarda Olup Olmadýðýný	|	
bool kontrolno(string x);		//		|								|
bool islemKontrolu(string x); //		| Kontrol Eden Fonksiyonlar.	|
void ortalamaal();		// Sýnýf Mevcudu Kadar Struct Ýçindeki Öðrenci Notlarýnýn Ortalamalarýný alýr.	  
void harfnotual();		// Alýnan Ortalamalarý Harf	Notuna Çeviren Fonksiyon. Harf Aralýklarýný Kendim Belirledim.
void ogrenciyazdir();	// Ogrencileri Ekrana Yazdýrýr.
void enyukseknot();		// En Yüksek Notu Ekrana Yazdýrýr.
void endusuknot();		// En Düþük Notu Ekrana Yazdýrýr.
void sinifortalamasi(); // Sýnýfýn Not Ortalmasýný Ekrana Yazdýrýr.
void standartsapma();	// Sýnýfýn Standart Sapmasýný Ekrana Yazdýrýr.
void arayisirala();  // Kullanýcýdan Girilen Ýki Deðer Arasýndaki Ortalamarý Ekrana Yazdýrýr.
void sorguekrani();			// Tekrar Ýþlem Yapýlmak Ýstendiðinde Seçenekleri Ekrana Yazdýrmak Ýçin Fonksiyon.
void asagisirala();   // Kullanýcýdan Girilen Deðerin Altýndaki Ortalmalarý Ekrana Yazdýrýr.
void yukarisirala();  // Kullanýcýdan Girilen Deðerin Altýndaki Oralamalarý Ekrana Yazdýrýr.
#endif
