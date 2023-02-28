
#include <iostream>
#include <fstream>
//*class yapisi icin gereken kütüphaneyi tanýmladým**//

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	class ogrenciler{//**class yapýsýnda ogrenciler icin istenen verileri string girdim**//
		public:
			string tcno;
			string adi;
			string soyadi;
			string ogrencino;
			string dogum_tarihi;
			string bolumu;
			string kayit_tarihi;
			string aldigi_ders_sayisi;
			string aldigi_dersler;
			string aldigi_notlar;
			string ortalamalar;
			string harf_notu;
			int vize;
			int kisasinav1;
			int kisasinav2;
			int odev;
			int final;
	};
	
	class personeller{//**ayný iþlemi personeller icin girdim**//
		public:
			string tcno;
			string adi;
			string soyadi;
			string unvani;
	    	string personel_no;
			string dogum_tarihi;
			string bolumu;
			string ise_baslama_tarihi;
			string verdigi_dersler;
	};


int main(int argc, char** argv) {
	
		//** txt dosyalarý oluþturdum ogrenciler ve personeller icin girilen verileri arkada kaydetmesi icin**//
		ofstream dosyaolusturogrenci("ogrenciler.txt",ios::app);
		dosyaolusturogrenci.close();
		ofstream dosyaolusturpersonel("personeller.txt",ios::app);
		dosyaolusturpersonel.close();
		
		
	do{//**menü oluþturdum**//
			int secim,vize, kisasinav1, kisasinav2, odev, final;
			float ortalama;
		    cout<<"1-)Ogrenci kaydi "<<endl;
		    cout<<"2-)Ogrenci kaydi guncelleme"<<endl;
		    cout<<"3-)Ogrenci kaydi silme"<<endl;
		    cout<<"4-)Personel kaydi yapma"<<endl;
		    cout<<"5-)Personel kaydi guncelleme "<<endl;
		    cout<<"6-)Personel kaydi silme"<<endl;
		    cout<<"7-)Ogrenci sorgulama"<<endl;
		    cout<<"8-)Mevcut ogrenci listesi"<<endl;
		    cout<<"9-)Mevcut personel listesi"<<endl;
		    cin>>secim;
		
		if(secim==1){//** ogrenciler icin gereken verileri istedim**//
			int derssayisi;
			ogrenciler ogr;
			cout<<"Ogrencinin bilgilerini giriniz..."<<endl;
			cout<<"Ogrencinin tc kimlik numarasi"<<endl;
			cin>>ogr.tcno;
			cout<<"Ogrenci adi:"<<endl;
			cin>>ogr.adi;
			cout<<"Ogrenci soyadi:"<<endl;
			cin>>ogr.soyadi;
			cout<<"Ogrencinin numarasi:"<<endl;
			cin>>ogr.ogrencino;
			cout<<"Ogrencinin dogum tarihi:"<<endl;
			cin>>ogr.dogum_tarihi;
			cout<<"Ogrencinin bolumu:"<<endl;
			cin>>ogr.bolumu;
			cout<<"Ogrencinin kayit tarihi:"<<endl;
			cin>>ogr.kayit_tarihi;
			cout<<"Ogrencinin aldigi dersler:"<<endl;
			cin>>ogr.aldigi_dersler;
			cout<<"Ogrencinin aldigi ders sayisini giriniz:"<<endl;
			cin>>derssayisi;
			system("CLS");
			for (int i=0;i<derssayisi;i++)//**ortalamasýný hesaplýycak ve harf notunu vericek kod bloðunu yazdým**//
		    cout<<"ogrencinin vize notunu giriniz...:"<<endl;
			cin>>vize;
			cout<<"ogrencinin birinci kisa sinav notunu giriniz...:"<<endl;
			cin>>kisasinav1;
			cout<<"ogrencinin ikinci kisa sinav notunu giriniz...:"<<endl;
			cin>>kisasinav2;
			cout<<"ogrencinin odev notunu giriniz...:"<<endl;
			cin>>odev;
			cout<<"ogrencinin final notunu giriniz...:"<<endl;
			cin>>final;
	        system("CLS");
			ortalama=(float)vize*(0.35)+0.05*((float)kisasinav1+(float)kisasinav2+(float)odev)+(float)final*0.5;
	
			cout<<"ogrencinin ortalamasi...:"<<ortalama<<endl;
			cin>>ogr.ortalamalar;
			if(ortalama<=39.9&&ortalama>=0)
   {
	cout<<"Harf Notu: FF"<<endl;
	}
	
	else if(ortalama<=49.9&&ortalama>=40)
	{
		cout<<"Harf Notu: FD"<<endl;
	}
	
	else if(ortalama<=57.99&&ortalama>=50)
	{
		cout<<"Harf Notu: DD"<<endl;
	}
	
	
	else if(ortalama<=64.99&&ortalama>=58)
	{
		cout<<"Harf Notu: DC"<<endl;
	}
	
	else if(ortalama<=74.99&&ortalama>=65)
	{
		cout<<"Harf Notu: CC"<<endl;
	}
	
		else if(ortalama<=79.99&&ortalama>=75)
	{
		cout<<"Harf Notu: CB"<<endl;
	}
			else if(ortalama<=84.99&&ortalama>=80)
	{
		cout<<"Harf Notu: BB"<<endl;
	}
	
				else if(ortalama<=89.99&&ortalama>=85)
	{
		cout<<"Harf Notu: BA"<<endl;
	}
	
					else if(ortalama<=100&&ortalama>=90)
	{
		cout<<"Harf Notu: AA"<<endl;
	}
	
	
	
			cout<<"Ogrencinin harf notlari:"<<endl;
			 cin>>ogr.harf_notu;
			 
			 
			
			
			//**ogrenciler icin olusturdugumuz txt dosyasýný açýyor not defterine kaydediyor girilen verileri ardýndan kapatýyor**// 
			
			dosyaolusturogrenci.open("ogrenciler.txt",ios::app);
			dosyaolusturogrenci<<ogr.tcno<<"\t"<<ogr.adi<<"\t"<<ogr.soyadi<<"\t"<<ogr.ogrencino<<"\t"<<ogr.dogum_tarihi<<"\t"<<ogr.bolumu<<"\t"<<ogr.kayit_tarihi<<"\t"<<ogr.aldigi_dersler<<"\t"<<ogr.aldigi_notlar<<"\t"<<ogr.ortalamalar<<"\t"<<ogr.harf_notu<<endl;
			dosyaolusturogrenci<<"......................................."<<endl;
			dosyaolusturogrenci.close();
			}
				
				//**2yi yani ogrenci kaydini guncellemek icin gereken kod bloklarýný yazdým**//
				else if (secim==2){
				string girilentc;
				
				cout<<"Guncelleme yapmak istediginiz ogrencinin tc:"<<endl;
				cin>>girilentc;
				
				ifstream dosyaoku("ogrenciler.txt");
				ofstream dosyaolustur("guncel.txt");
				
				string tc,tc_1;
				
				while(!dosyaoku.eof()){
					ogrenciler ogrg;
					getline(dosyaoku,tc);
					tc_1=tc.substr(0,girilentc.length());
				
					if(tc_1==girilentc){
						
						cout<<"Guncelleme yapacaginiz ogrencinin tc kimlik numarasini yaziniz..";
						cin>>ogrg.tcno;
						cout<<"Guncelleme yapacaginiz ogrencinin adini yaziniz..."<<endl;
						cin>>ogrg.adi;
						cout<<"Guncelleme yapacaginiz ogrencinin soyadini yaziniz..."<<endl;
						cin>>ogrg.soyadi;
						cout<<"Guncelleme yapacaginiz ogrencinin numarasini yaziniz..."<<endl;
						cin>>ogrg.ogrencino;
						cout<<"Guncelleme yapacaginiz ogrencinin dogum tarihi yaziniz..."<<endl;
						cin>>ogrg.dogum_tarihi;
						cout<<"Guncelleme yapacaginiz ogrencinin bolumu yaziniz..."<<endl;
						cin>>ogrg.bolumu;
						cout<<"Guncelleme yapacaginiz ogrencinin kayit tarihini yaziniz..."<<endl;
						cin>>ogrg.kayit_tarihi;
						cout<<"Guncelleme yapacaginiz ogrencinin aldigi dersleri yaziniz..."<<endl;
						cin>>ogrg.aldigi_dersler;
						cout<<"Guncelleme yapacaginiz ogrencinin vize notunu yaziniz..."<<endl;
						cin>>ogrg.vize;
						cout<<"Guncelleme yapacaginiz ogrencinin 1.kisa sinav notunu yaziniz..."<<endl;
						cin>>ogrg.kisasinav1;
						cout<<"Guncelleme yapacaginiz ogrencinin 2.kisa sinav notunu yaziniz..."<<endl;
						cin>>ogrg.kisasinav2;
						cout<<"Guncelleme yapacaginiz ogrencinin odev notunu yaziniz..."<<endl;
						cin>>ogrg.odev;
						cout<<"Guncelleme yapacaginiz ogrencinin final notunu yaziniz..."<<endl;
						cin>>ogrg.final;
						cout<<"Guncelleme yapacaginiz ogrencinin aldigi derslerin notlarini yaziniz..."<<endl;
						cin>>ogrg.aldigi_notlar;
						cout<<"Guncelleme yapacaginiz ogrencinin harf notunu yaziniz..."<<endl;
						cin>>ogrg.harf_notu;
						
						dosyaolusturogrenci<<ogrg.tcno<<"\t"<<ogrg.adi<<"\t"<<ogrg.soyadi<<"\t"<<ogrg.ogrencino<<"\t"<<ogrg.dogum_tarihi<<"\t"<<ogrg.bolumu<<"\t"<<ogrg.kayit_tarihi<<"\t"<<ogrg.aldigi_dersler<<"\t"<<ogrg.aldigi_notlar<<"\t"<<ogrg.ortalamalar<<"\t"<<ogrg.harf_notu<<endl;
						
					}
				
						else {
						
						dosyaolustur<<tc<<endl;
					}
					
					break;
					
				}
				
				dosyaoku.close();
				dosyaolustur.close();
				
				remove("ogrenciler.txt");
				rename("guncel.txt", "ogrenciler.txt");
				}
				else if (secim==3){//**ogrenci kaydini silmek icin gereken kod bloklarini yazdim**//
					int main(int argc, char** argv);
					string girilentc;
					cout<<"Silmek istediginiz ogrencinin tc kimlik nosunu yaziniz..."<<endl;
					cin>>girilentc;
	
					ofstream dosyaolustur("guncel.txt");
					ifstream dosyaoku("ogrenciler.txt");
	
					string tc;
					string tc_1;
	
				while(!dosyaoku.eof()){
		
					getline(dosyaoku,tc);
					tc_1=tc.substr(0,girilentc.length());
					if(tc_1!=girilentc)
					{
			
					  dosyaolustur<<tc<<endl;
					  cout<<"Ogrencinin kaydi silinmistir"<<endl;
					  break;
					  
					dosyaoku.close();
					dosyaolustur.close();
					remove("ogrenci.txt");
					rename("guncel.txt","ogrenci.txt");
						  
			
		}
		
		
		
	}
	
	dosyaoku.close();
	dosyaolustur.close();
	
	remove("ogrenciler.txt");
	rename("guncel.txt","ogrenciler.txt");
	
	
	
	}
		


		
		
		else if(secim==4)
		{//**personeller icin bilgileri istedim**//
			personeller pers;
			cout<<"Personelin bilgilerini giriniz..."<<endl;
			cout<<"personelin tc numarasi:"<<endl;
			cin>>pers.tcno;
			cout<<"Personelin adi:"<<endl;
			cin>>pers.adi;
			cout<<"Personelin soyadi:"<<endl;
			cin>>pers.soyadi;
			cout<<"Personelin unvani:"<<endl;
			cin>>pers.unvani;
			cout<<"Personelin personel no:"<<endl;
			cin>>pers.personel_no;
			cout<<"Personelin dogum tarihi:"<<endl;
			cin>>pers.dogum_tarihi;
			cout<<"Personelin bolumu:"<<endl;
			cin>>pers.bolumu;
			cout<<"Personelin ise baslama tarihi:"<<endl;
			cin>>pers.ise_baslama_tarihi;
			cout<<"Personelin verdigi dersler:"<<endl;
			cin>>pers.verdigi_dersler;
			
			
			
			//*personeller icin olusturulan dosyayý acýp bilgileri kaydedip kapatýyor.**//
			dosyaolusturpersonel.open("personeller.txt",ios::app);
			dosyaolusturpersonel<<pers.tcno<<"\t"<<pers.adi<<"\t"<<pers.soyadi<<"\t"<<pers.unvani<<"\t"<<pers.personel_no<<"t"<<pers.dogum_tarihi<<"\t"<<pers.bolumu<<"\t"<<pers.ise_baslama_tarihi<<"\t"<<pers.verdigi_dersler<<endl;
			dosyaolusturpersonel<<"......................................."<<endl;
			dosyaolusturpersonel.close();
				}
				//*5 e bastigimizda duzeltme yapmasi icin gereken kod bloklarini girdim**//
				
				else if (secim==5){
				string girilentc;
				
				cout<<"Duzeltme yapmak istediginiz personelin tc kimlik nosunu yaziniz...:"<<endl;
				cin>>girilentc;
				
				ifstream dosyaoku("personeller.txt");
				ofstream dosyaolustur("guncel.txt");
				
				string tc,tc_1;
				
				while(!dosyaoku.eof()){
					personeller persg;
					getline(dosyaoku,tc);
					tc_1=tc.substr(0,girilentc.length());
					
					if(tc_1==girilentc){
						
						cout<<"Guncelleme yapacaginiz personelin tc kimlik nosunu yaziniz..";
						cin>>persg.tcno;
						cout<<"Guncelleme yapacaginiz personelin adini yaziniz.."<<endl;
						cin>>persg.adi;
						cout<<"Guncelleme yapacaginiz personelin soyadini yaziniz.."<<endl;
						cin>>persg.soyadi;
						cout<<"Guncelleme yapacaginiz personelin unvanini yaziniz.."<<endl;
						cin>>persg.unvani;
						cout<<"Guncelleme yapacaginiz personelin personel numarasini yaziniz..."<<endl;
						cin>>persg.personel_no;
						cout<<"Guncelleme yapacaginiz personelin dogum tarihini yaziniz.."<<endl;
						cin>>persg.dogum_tarihi;
						cout<<"Guncelleme yapacaginiz personelin bolumunu yaziniz.."<<endl;
						cin>>persg.bolumu;
						cout<<"Guncelleme yapacaginiz personelin ise baslama tarihini yaziniz.."<<endl;
						cin>>persg.ise_baslama_tarihi;
						cout<<"Guncelleme yapacaginiz personelin verdiði dersleri yaziniz.."<<endl;
						cin>>persg.verdigi_dersler;
						
						dosyaolusturpersonel<<persg.tcno<<persg.adi<<"\t"<<persg.soyadi<<"\t"<<persg.unvani<<"\t"<<persg.personel_no<<"\t"<<persg.dogum_tarihi<<"\t"<<persg.bolumu<<"\t"<<persg.ise_baslama_tarihi<<"\t"<<persg.verdigi_dersler<<endl;
						//**personeller icin sisteme girdigimiz bilgileri txt dosyasinda sirasini olusturduk**// 
					}
					
						else {
						
						dosyaolusturpersonel<<tc<<endl;
					}
					
				}
				
				dosyaoku.close();
				dosyaolustur.close();
				//**personeller dosyasinin eskisini alip guncel halini ekledik.**//
				remove("personeller.txt");
				rename("guncel.txt", "personeller.txt");
				}
				else if (secim==6){//**personel silmek icin gereken kod blogunu olusturduk.**//
					int main(int argc, char** argv);
					string girilentc;
					cout<<"Silmek istediginiz personelin tc nosu:"<<endl;
					cin>>girilentc;
	
					ofstream dosyaolustur("guncel.txt");
					ifstream dosyaoku("personeller.txt");
	
					string bilgi1;
					string bilgi2;
	
				while(!dosyaoku.eof()){
		
					getline(dosyaoku,bilgi1);
					bilgi2=bilgi1.substr(0,girilentc.length());
		
		
				if(bilgi2!=girilentc){
			
					dosyaolustur<<bilgi1<<endl;
			
		}
		
		
		
	}
	
	dosyaoku.close();
	dosyaolustur.close();

	
	remove("personeller.txt");
	rename("guncel.txt","personeller.txt");
	
	     	//**programýn son halini personeller icin günceller yani son halini iþler**//
				}
				
				else if (secim==7){//**kaydedilen ogrencilerden istenileni bulabilmemiz icin sorguladim**//
					string girilentcno;
					cout<<"Sorgulamak istediginiz ogrencinin tc no giriniz:";
					cin>>girilentcno;
					ifstream dosyaoku("ogrenciler.txt");
					
					string tcno,tcno1;
					while (!dosyaoku.eof())
					{
						getline(dosyaoku,tcno);
						tcno1=tcno.substr(0,girilentcno.length());
						if(tcno1==girilentcno)
						{
							cout<<tcno<<endl;
						}				
					}
					dosyaoku.close();
				}
				
				else if(secim==8){
			
					ifstream dosyaoku("ogrenciler.txt");
			
					string bilgi;
			
					while(!dosyaoku.eof())
					{
				
						getline(dosyaoku,bilgi);
				
						cout<<bilgi<<endl;
					
					}
			
			dosyaoku.close();
			
			
			
		}
			else if(secim==9){
			
				ifstream dosyaoku("personeller.txt");
			
				string bilgi;
			
				while(!dosyaoku.eof())
				{
				
				getline(dosyaoku,bilgi);
				
				cout<<bilgi<<endl;
					
				}
			
				dosyaoku.close();
			
			
			
		}
	}
		
	
	while (1==1);	
		
	system ("PAUSE");	
	return 0;
}
