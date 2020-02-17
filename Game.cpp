z#include <iostream>
#include <conio.h>
#include <fstream>
#include <windows.h>
using namespace std;

class Pilihan{
	public:
		int MenuAwal;
		int Character;
		int Senjata;
		int GamePlay;
		int BuyStatus;
		int BuyLife;
		int BattleForest;
		int Battle;
		int Magic;
}; Pilihan pil;


class InfoCharacter{
	public:
		string Class;
		string Name;
		string NamaSenjata;
		int DamageSenjata;
		int Life;
		int Defends;
		int Magic;
		int Spirit;
		int Level;
		int Exp;
		int Gold;
}; InfoCharacter info;

class InfoEnemy{
	public:
		string Name;
		int DamageSenjata;
		int Life;
		int Gold;
		int Exp;
}; InfoEnemy Enemy;

class Battle{
	public:
		int MyLife;
		int MyMagic;
		int RealLife;
}; Battle pertarungan;

void SaveData(){
	ofstream myFile;
	
	myFile.open("Data.txt");
	myFile<<"Info Pemain"<<endl;
	myFile<<"Nama: "<<info.Name<<endl;
	myFile<<"Karakter: "<<info.Class<<endl;
	myFile<<"Level: "<<info.Level<<endl;
	myFile<<"Gold: "<<info.Gold<<endl;
	myFile<<"Senjata:"<<info.NamaSenjata<<endl;
	myFile<<"Exp: "<<info.Exp<<endl<<endl;
	
	myFile<<"Atribut Pemain"<<endl;
	myFile<<"Damage: "<<info.DamageSenjata<<endl;
	myFile<<"Life: "<<info.Life<<endl;
	myFile<<"Magic: "<<info.Magic<<endl;
	myFile<<"Spirit: "<<info.Spirit<<endl;
	myFile<<"Defends: "<<info.Defends<<endl<<endl;
	
	myFile<<"Life pertarungan"<<endl;
	myFile<<"Life : "<<pertarungan.RealLife;
	myFile.close();
	
	cout<<"Save Data Berhasil";
}

void MenuAwal(){
	system("cls");
	cout<<endl;
	cout<<" _________________________________________________________"<<endl;
	cout<<"|<              *--------------------------*             >|"<<endl;
	cout<<"|---------------|*.....ADVENTURE GAME.....*|--------------|"<<endl;
	cout<<"|---------------|__________________________|--------------|"<<endl;
	cout<<"||   o o o      | BLURA THE GUARDIAN FOREST|     o o o   ||"<<endl;
	cout<<"||   /\\|/\\      *--------------------------*     /\\|/\\   ||"<<endl;
	cout<<"||   \\___/                                       \\___/   ||"<<endl;
	cout<<"||    ] [          [1]PLAY                        ] [    ||"<<endl;
	cout<<"||    ] [          [2]EXIT                        ] [    ||"<<endl;
	cout<<"||    \\_/          [3]AUTHOR                      \\_/    ||"<<endl;
	cout<<"|_________________________________________________________|"<<endl;
	cout<<"Pilihan: ";
	cin>>pil.MenuAwal;
}

void Status(){
	info.Life=100;
	info.Defends=5;
	info.Magic=8;
	info.Spirit=15;
	info.Level=1;
	info.Gold=0;
	pertarungan.RealLife=100;
}

void Tanda();

void SelectWeapon(){
	PS:
	system("cls");
	cout<<endl;
	cout<<"Pilih Senjatamu : "<<endl;
	cout<<"[1]Sword"<<endl;
	cout<<"[2]Axe"<<endl;
	cout<<"[3]Arrow"<<endl;
	cout<<"[4]MagicWand"<<endl;
	cout<<"Pilihanmu: ";
	cin>>pil.Senjata;
	
		if(pil.Senjata==1){
			info.DamageSenjata = 20;
			info.NamaSenjata = "Sword";
			Status();
			cout<<endl<<"Pilihan yang bagus!! :)";
			getch();

		}
		else if(pil.Senjata==2){
			info.DamageSenjata = 25;
			info.NamaSenjata = "Axe";
			Status();
			cout<<endl<<"Pilihan yang bagus!! :)";
			getch();

		}
		else if(pil.Senjata==3){
			info.DamageSenjata = 10;
			info.NamaSenjata = "Arrow";
			Status();
			cout<<endl<<"Pilihan yang bagus!! :)";
			getch();

		}
		else if(pil.Senjata==4){
			info.DamageSenjata = 20;
			info.NamaSenjata = "MagicWand";
			Status();
			cout<<endl<<"Pilihan yang bagus!! :)";
			getch();
		}
		else{
			cout<<"Pilihan tidak tersedia";
			getch();
			goto PS;
		}
}

void SelectCharacter(){
	SC:
	system("cls");
	cout<<endl;
	cout<<"Selamat datang di Planet Centauri"<<endl;
	Sleep(5000);
	cout<<"banyak tanaman-tanaman hijau disini"<<endl;
	Sleep(5000);
	cout<<"begitupun binatang buas"<<endl;
	Sleep(3000);
	cout<<"Pilih karaktermu :"<<endl;
	cout<<"[1]Blura"<<endl;
	cout<<"[2]Leura"<<endl;
	cout<<"Pilihanmu : ";
	cin>>pil.Character;
		if(pil.Character==1){
			info.Class="Blura";
		}
		else if(pil.Character==2){
			info.Class="Leura";
		}
		else{
			cout<<"Pilihan tidak tersedia";
			getch();
			goto SC;
		}
	cout<<"Set your Name: ";
	cin.sync();
	getline(cin,info.Name);
	cout<<"Nama yang bagus !! :)";
	getch();
	SelectWeapon();
}

void Increase(){
	info.Life=info.Life+10;
	info.DamageSenjata=info.DamageSenjata+10;
	info.Defends=info.Defends+10;
	info.Magic=info.Magic+8;
	info.Spirit=info.Spirit+15;	
}

void Tanda(){
	pertarungan.MyLife=info.Life;
	pertarungan.MyMagic=info.Magic;
}

void CekStatus(){
	system("cls");
	cout<<"====== Atribut Pemain ======"<<endl;
	cout<<"Life   : "<<info.Life<<endl;
	cout<<"Senjata: "<<info.NamaSenjata<<endl;
	cout<<"Damage : "<<info.DamageSenjata<<endl;
	cout<<"Defends: "<<info.Defends<<endl;
	cout<<"Magic  : "<<info.Magic<<endl;
	cout<<"Spirit : "<<info.Spirit<<endl;
	getch();
}

void CekStatus2(){
	system("cls");
	cout<<"====== Status ======"<<endl;
	cout<<"Life   : "<<pertarungan.RealLife<<endl;
	cout<<"Senjata: "<<info.NamaSenjata<<endl;
	cout<<"Damage : "<<info.DamageSenjata<<endl;
	cout<<"Defends: "<<info.Defends<<endl;
	cout<<"Magic  : "<<info.Magic<<endl;
	cout<<"Spirit : "<<info.Spirit<<endl;
}


void Forest(){
	ulang:
	system("cls");
	cout<<"===== Battleon Forest ====="<<endl;
	cout<<"[1]Lawan anjing liar"<<endl;
	cout<<"[2]Lawan babi hutan"<<endl;
	cout<<"Pilihan : ";
	cin>>pil.BattleForest;
		if(pil.BattleForest==1){
			Enemy.Name="Anjing liar";
			Enemy.Life=100;
			Enemy.DamageSenjata=10;
			Enemy.Gold=1000;
			Enemy.Exp=500;
		}
		else if(pil.BattleForest==2){
			Enemy.Name="Babu Hutan";
			Enemy.Life=100;
			Enemy.DamageSenjata=15;
			Enemy.Gold=2500;
			Enemy.Exp=1000;
		}
		else{
			cout<"Pilihan tidak tersedia";
			getch();
			goto ulang;
		}
}


void BuyLife(){
	cout<<"ingin membeli life ?"<<endl;
	cout<<" [ ]"<<endl;
	cout<<" | |"<<endl;
	cout<<"/  \\"<<endl;	
	cout<<"[1]Potion Fulllife 1000G"<<endl;
	cout<<"[2]Potion Halflife 500G"<<endl;
	cout<<"Pilihanmu: ";
	cin>>pil.BuyLife;
		if(pil.BuyLife==1){
			if(info.Gold>=1000){
				if(pertarungan.RealLife<info.Life){
					info.Gold=info.Gold-1000;
					for(int i=pertarungan.RealLife;i<info.Life;i++){
						pertarungan.RealLife++;
					}
					cout<<"Use full potion";
				}
				else{
					cout<<"life masih penuh";
				}
			}
			else{
				cout<<"Gold tidak cukup. Lawan monster untuk mendapatkan gold";
			}
		}
		else if(pil.BuyLife==2){
			if(info.Gold>=500){
				if(pertarungan.RealLife<info.Life){
					info.Gold=info.Gold-500;
					for(int i=pertarungan.RealLife;i<info.Life/2;i++){
						pertarungan.RealLife++;
					}
					cout<<"Use half potion";
				}
				else{
					cout<<"life masih penuh";
				}
			}
			else{
				cout<<"Gold tidak cukup. Lawan monster untuk mendapatkan gold";
			}
		}
		else{
			cout<<"Pilihan tidak tersedia";
		}
}
	 

void BuyStatus(){
	ulang:
	system("cls");
	cout<<"===== Tingkatkan Atribut ====="<<endl;
	cout<<"Latihan perang seharga 5000g"<<endl;
	cout<<"dengan Peningkatan"<<endl;
	cout<<"Life   : 10"<<endl;
	cout<<"Damage : 10"<<endl;
	cout<<"Defends: 10"<<endl;
	cout<<"Magic  : 8"<<endl;
	cout<<"Spirit : 15"<<endl;
	cout<<"Ingin ikut latihan ? [1]/[2]        *1 untuk membayar 5000g *2 untuk tidak."<<endl;
	cin>>pil.BuyStatus;
		
		if(pil.BuyStatus==1){
			if(info.Gold>=5000){
				Increase();
				cout<<"Latihan Berhasil!!";
				CekStatus();
			}
			else{
				cout<<"Gold tidak mencukupi!!";
			}
		}
		else if(pil.BuyStatus==2){
			cout<<"Keluar dari tempat Traning";
		}
		else{
			cout<<"Pilihan tidak tersedia";
			getch();
			goto ulang;
		}
}

int main(){
	
	well:
	MenuAwal();
	
	if(pil.MenuAwal==1){
		SelectCharacter();
		start:
		system("cls");

		cout<<"Info Pemain"<<endl;
		cout<<"Nama: "<<info.Name<<"     "<<"Karakter: "<<info.Class<<"     "<<"Level: "<<info.Level<<"     "<<"Gold:"<<info.Gold<<"     "<<"Exp: "<<info.Exp<<"/"<<"5000"<<endl;
		cout<<"===================================================================="<<endl;
		cout<<" Battleon Town "<<endl;
		cout<<"                |>"<<endl;
		cout<<"               /\\          |>"<<endl;
		cout<<"              /--\\   .  . / \\"<<endl;
		cout<<" ____________/----\\_/\\_/\\_| |____________"<<endl;
		cout<<"|[][][][][][]|    |   _   | |[][][][][][]|"<<endl;
		cout<<"|][][][][][][|    |  | |  | |][][][][][][|"<<endl;
		cout<<" 1. Cek Status Pemain"<<endl;
		cout<<" 2. Pergi Ke Hutan"<<endl;
		cout<<" 3. Beli Potion"<<endl;
		cout<<" 4. Tingkatkan Status"<<endl;
		cout<<" 5. Save Data"<<endl;
		cout<<" 6. Menu Awal"<<endl;
		cout<<"Pilihan: ";
		
		if(pertarungan.RealLife<=0 and info.Gold<500){
			cout<<"GameOver :(";
			getch();
			goto well;
		}
		else
		cin>>pil.GamePlay;
			if(pil.GamePlay==1){
				CekStatus2();
				getch();
				goto start;
			}
			else if(pil.GamePlay==2){
				Tanda();
				Forest();
				ulangi:
					system("cls");
					if(Enemy.Life<=0){
						cout<<"Menang!!";
						info.Gold=info.Gold+Enemy.Gold;
						info.Exp=info.Exp+Enemy.Exp;
						cout<<"Dapat "<<Enemy.Gold<<"G"<<endl;
						cout<<"Dapat "<<Enemy.Exp<<" Exp"<<endl;
						if(info.Exp>=5000){
							info.Exp=0;
							info.Level=info.Level+1;
							cout<<"Naik lvl "<<info.Level; 
						}
						getch();
						goto start;
		
					}
					if(pertarungan.RealLife>0){
						cout<<"Enemy: "<<Enemy.Name<<"     "<<"My Life: "<<pertarungan.RealLife<<endl;
						cout<<"Life: "<<Enemy.Life<<"     "<<"My Magic: "<<pertarungan.MyMagic<<endl;
						cout<<"[1]Attack"<<endl;
						cout<<"[2]Defends"<<endl;
						cout<<"[3]Magic"<<endl;
						cout<<"[4]Run"<<endl;
						cout<<"Pilihan: ";
						cin>>pil.Battle;
							if(pil.Battle==1){
								pertarungan.RealLife = pertarungan.RealLife-Enemy.DamageSenjata;
								Enemy.Life= Enemy.Life-info.DamageSenjata;
								cout<<"Slash!!"<<endl;
								getch();
								cout<<"Enemy "<<Enemy.Name<<" Attack"<<endl;
								getch();
								goto ulangi;
							}
							else if(pil.Battle==2){
								pertarungan.RealLife = pertarungan.RealLife-(Enemy.DamageSenjata/2);
								if(pertarungan.MyMagic<info.Magic){
									pertarungan.MyMagic=pertarungan.MyMagic+2;
								}
								cout<<"Defends!!"<<endl;
								getch();
								cout<<"Enemy "<<Enemy.Name<<" Attack"<<endl;
								getch();
								cout<<"Get magic++";
								getch();
								goto ulangi;
							}
							else if(pil.Battle==3){
								atas:
									if(pertarungan.MyMagic>=5){
									cout<<"Magic:"<<endl;
									cout<<"[1]Fire"<<endl;
									cout<<"[2]Water"<<endl;
									cout<<"[3]Air"<<endl;
									cout<<"Pilihan: ";
									cin>>pil.Magic;
										if(pil.Magic==1){
											Enemy.Life=Enemy.Life-30;
											pertarungan.MyMagic=pertarungan.MyMagic-3;
											cout<<"Magic use Fire!!";
											getch();
											goto ulangi;
										}
										else if(pil.Magic==2){
											Enemy.Life=Enemy.Life-20;
											pertarungan.MyMagic=pertarungan.MyMagic-2;
											cout<<"Magic use water!!";
											getch();
											goto ulangi;
										}
										else if(pil.Magic==3){
											Enemy.Life=Enemy.Life-10;
											pertarungan.MyMagic=pertarungan.MyMagic-1;
											cout<<"Magic use air!!";
											getch();
											goto ulangi;
										}
										else{
											cout<<"Pilihan tidak tersedia";
											getch();
											goto atas;
										}
									}
									else{
									cout<<"Magic kurang, defend untuk mendapatkan magic!";
									getch();
									goto ulangi;
									}
							}
							else if(pil.Battle==4){
								cout<<"Lari dari pertarungan!";
							}
							else{
								cout<<"Pilihan tidak tersedia";
								getch();
								goto ulangi;
							}
					}
				else{
					cout<<"Kalah. Life 0";
					pertarungan.RealLife=0;
				}
				getch();
				goto start;
			}
			else if(pil.GamePlay==3){
				BuyLife();
				getch();
				goto start;
			}
			else if(pil.GamePlay==4){
				CekStatus();
				getch;
				BuyStatus();
				getch();
				goto start;
			} 
			else if(pil.GamePlay==5){
				SaveData();
				getch();
				goto start;
			}
			else if(pil.GamePlay==6){
				cout<<"Kembali ke menu awal";
				getch();
				goto well;
			}
			else{
				cout<<"Pilihan tidak tersedia";
				getch();
				goto start;
			}
	}
	else if(pil.MenuAwal==2){
		cout<<"Terima kasih sudah bermain game ini";
		getch();
		return 0;
	}
	else if(pil.MenuAwal==3){
		cout<<endl<<"Author: Danes"<<endl;
		getch();
		cout<<"yeah useful";
		getch();
		goto well;
	}
	else {
		cout << "Pilihan tidak tersedia";
		getch();
		goto well;
	}

}

