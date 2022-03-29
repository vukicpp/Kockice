#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <math.h>
#include <time.h>
#include <Mmsystem.h>
#include <graphics.h>
#include <ctype.h>
#include <cstring>
#include <cctype>
#pragma comment(lib, "winmm.lib")


int vrednostt1;
	int vrednostt2;
		int vrednostt3;
			int vrednostt4;
				int vrednostt5;
					int vrednostt6;
	int vrednost1;
		int vrednost2;
			int vrednost3;
				int vrednost4;
					int vrednost5;
						int vrednost6;
int loop;

		

        void igrac2() {
			std::string input2;
				std::cout << "Igrac broj 2: Baci kockicu! \n Pritisni slovo -b- na tastaturi!" << std::endl;
					std::cin >> input2;

			if(input2 == "b"){
				std::cout << "OK" << std::endl;
					PlaySound("C:\\Users\\Vuk\\Documents\\cpp\\dicesound.wav", NULL, SND_FILENAME);
					srand(time(0));
						for(int i=0;i<1;i++){
							int kocka2 = rand()%6 + 1;
								if(kocka2==1){
									std::cout << "Kocka1" << std::endl;
										initwindow(100, 100, "Kocka1");
											readimagefile("kocka1.jpg",0,0,100,100);
												vrednostt1 = 1;
									}
									else if(kocka2==2){
										std::cout << "Kocka2" << std::endl;
											initwindow(100, 100, "Kocka2");
												readimagefile("kocka2.jpg",0,0,100,100);
													vrednostt2 = 2;
										}
										else if(kocka2==3){
											std::cout << "Kocka3" << std::endl;
												initwindow(100, 100, "Kocka3");
													readimagefile("kocka3.jpg",0,0,100,100);
														vrednostt3 = 3;
											}
											else if(kocka2==4){
												std::cout << "Kocka4" << std::endl;
													initwindow(100, 100, "Kocka4");
														readimagefile("kocka4.jpg",0,0,100,100);
															vrednostt4 = 4;
												}
												else if(kocka2==5){
													std::cout << "Kocka5" << std::endl;
														initwindow(100, 100, "Kocka5");
															readimagefile("kocka5.jpg",0,0,100,100);
																vrednostt5 = 5;
													}
													else if(kocka2==6){
														std::cout << "Kocka6" << std::endl;
															initwindow(100, 100, "Kocka6");
																readimagefile("kocka6.jpg",0,0,100,100);
																	vrednostt6 = 6;
														}
							}
				}
				else{
					std::cout << "Pritisni slovo -b- na tastaturi!" << std::endl;
						igrac2();
			}
		}
		
		void igrac1(){
			std::string input1;
				std::cout << "Igrac broj 1: Baci kockicu!\n Pritisni slovo -b- na tastaturi!" << std::endl;
					std::cin >> input1;

			if(input1 == "b"){
				std::cout << "OK" << std::endl;
				PlaySound("C:\\Users\\Vuk\\Documents\\cpp\\dicesound.wav", NULL, SND_FILENAME);
					srand(time(0));
						for(int i=0;i<1;i++){
							int kocka = rand()%6 + 1;
								if(kocka==1){
									std::cout << "Kocka1" << std::endl;
										 initwindow(100,100,"Kocka1");
										 	readimagefile("kocka1.jpg",0,0,100,100);
										 		
														vrednost1 = 1;
								}
									else if(kocka==2){
										std::cout << "Kocka2" << std::endl;
											initwindow(100,100,"Kocka2");
										 		readimagefile("kocka2.jpg",0,0,100,100);
															vrednost2 = 2;
							}
										else if(kocka==3){
											std::cout << "Kocka3" << std::endl;
												initwindow(100,100,"Kocka3");
										 			readimagefile("kocka3.jpg",0,0,100,100);
										 						
																vrednost3 = 3;
										}
											else if(kocka==4){
												std::cout << "Kocka4" << std::endl;
													initwindow(100,100,"Kocka4");
										 				readimagefile("kocka4.jpg",0,0,100,100);
										 					
																	vrednost4 = 4;
											}
												else if(kocka==5){
													std::cout << "Kocka5" << std::endl;
														initwindow(100,100,"Kocka5");
										 					readimagefile("kocka5.jpg",0,0,100,100);
										 						
																		vrednost5 = 5;
												}
													else if(kocka==6){
														std::cout << "Kocka6" << std::endl;
															initwindow(100,100,"Kocka6");
										 						readimagefile("kocka6.jpg",0,0,100,100);
										 							
																			vrednost6 = 6;
													}
						}
			}
			else{
				std::cout << "Pritisni slovo -b- na tastaturi!" << std::endl;
					igrac1();
			}
		}
		
		void pocetak(){
			std::cout << "Koliko puta zelite da bacite kockicu?" << std::endl;
			std::cout << "Pritisnite ENTER da potvrdite broj bacanja kockice!" << std::endl;
				std::cout << "Bacanje kockice izvrsava se pritiskom na slovo -b- pa na ENTER za potvrdu!" << std::endl;
					std::cin >> loop;
						PlaySound("C:\\Users\\Vuk\\Documents\\cpp\\begin.wav", NULL, SND_FILENAME);
							if(loop == true){
								std::cout << "KRECE BACANJE KOCKICA!" << std::endl;
								loop;
							}
							else if(loop == false){
								std::cout << "Unesite broj koliko puta zelite da bacite kockice sledeci put! " << std::endl;
								exit(0);
							}
		for(int i=0;i<loop ;i++){
			igrac1();
			igrac2();
		}

			int sum2 = vrednostt1 + vrednostt2 + vrednostt3 + vrednostt4 + vrednostt5 + vrednostt6;
				int sum1 = vrednost1 + vrednost2 + vrednost3 + vrednost4 + vrednost5 + vrednost6;
					if(sum2 > sum1){
						std::cout << "\n IGRAC 2 JE POBEDIO!!!" << sum2 << " " << sum1 << std::endl;
							PlaySound("C:\\Users\\Vuk\\Documents\\cpp\\end.wav", NULL, SND_FILENAME);
					}
						else if(sum2 < sum1){
							std::cout << "\n IGRAC 1 JE POBEDIO!!!" << sum1 << " " << sum2 << std::endl;
								PlaySound("C:\\Users\\Vuk\\Documents\\cpp\\end.wav", NULL, SND_FILENAME);
					}
					
		}
		

int main(){
	
		int i=0;
		while(i< 1){
			std::string ponovi;
				std::cout <<"Pokreni kockice(da/ne)" << std::endl;
					std::cin >> ponovi;
						if(ponovi == "da"){
							std::cout << "Kreator igrice = Vuk Vukovic 30.3.2022." << std::endl;
								pocetak();	
						}
							else if(ponovi == "ne"){
								std::cout << "Prijatan dan!!" << std::endl;
									exit(0);
							}
							
			
		}
	
		
					

	return 0;
}
