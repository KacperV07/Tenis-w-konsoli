#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <time.h>
#include <string>

using namespace std;
	bool getPointForG1 = false,getPointForG2 = false,stillPlaying = true,withoutPoints=false,endOfTheGem=false,gemForG1=false,gemForG2=false;
	int pointsG1 = 0, pointsG2 = 0,gemsG1=0,gemsG2=0,fieldAtack = 0;;

	class whoGetThePoint{
		public:
		int DefG1 = 0, DefG2 = 0,AtkG1 = 0,AtkG2 = 0;
		
		void probabilityOfAut(){
			int probabilty = 0;
			string aut = "Piłka wypadła na AUT!";
			if(fieldAtack == 3 || fieldAtack == 4){				
				//1,2,3,4,(5),6,7,8,9,10 (jak wypadnie 5 to AUT!) ,czyli 10% że wypadnie na AUT!
				probabilty = rand()%10+1;
				if(probabilty == 5){
					fieldAtack = 0;
					cout<<aut;
				}
			}
			if(fieldAtack == 5 || fieldAtack == 6){				
				//1,2,3,4 (jak wypadnie 4 to AUT) , czyli 25% że wypadnie AUT!
				probabilty = rand()%4+1;
				if(probabilty == 4){
					fieldAtack = 0;
					cout<<aut;
				}
			}
		}	
		
		
		void endOfGem(){	
			endOfTheGem = false;	
			gemForG1 = false;
			gemForG2 = false;	
			if(pointsG1 == 4 && pointsG2 < 3){
				gemsG1++;
				pointsG1 = 0;
				pointsG2 = 0;
				endOfTheGem = true;
			}			
			if(pointsG2 == 4 && pointsG1 < 3){
				gemsG2++;
				pointsG1 = 0;
				pointsG2 = 0;
				endOfTheGem = true;
			}
			if(pointsG1 >= 5){
				gemsG1++;
				pointsG1 = 0;
				pointsG2 = 0;
				endOfTheGem = true;
			}			
			if(pointsG2 >= 5){
				gemsG2++;
				pointsG1 = 0;
				pointsG2 = 0;
				endOfTheGem = true;
			}			
		}



		// Def1 -> atk2, Def2 -> Atk1,
		void whoWin(){
			withoutPoints = false;
			getPointForG1 = false;	
			getPointForG2 = false;				

				// jesli field attack == 0 to AUT		
				if((AtkG2 != DefG1) ){
					getPointForG2 = true;						
				}
				if((AtkG1 != DefG2) && (fieldAtack !=0)){
					getPointForG1 = true;					
				}	
				if((pointsG1 == 3) && (pointsG2 == 3) && (getPointForG1 == true) && (getPointForG2 == true)){
					withoutPoints = true;
				}
				else{
					if((pointsG1 == 4) && (pointsG2 == 3) && (getPointForG1 == false) && (getPointForG2 == true)){
						pointsG1--;
						pointsG2++;
					}
					else{						
						if((pointsG1 == 3) && (pointsG2 == 4) && (getPointForG1 == true) && (getPointForG2 == false)){
						pointsG1++;
						pointsG2 = pointsG1 - 1;
						}else{
							if(getPointForG1 == true){
								pointsG1++;
							}
							if(getPointForG2 == true){
								pointsG2++;
							}
						}
					}

				}
			
				
				
			
		


		}

			
		string information(){
			string getPointForG1Text="",getPointForG2Text="";
			
			if(withoutPoints == true){
				getPointForG1Text = "Bez punktu";
				getPointForG2Text = "Bez punktu (nie może być wyniku AD:AD)";
			}else{
				if(getPointForG1 == true){
				getPointForG1Text = "Zdobywasz punkt!";			

				}else{
					getPointForG1Text = "Nie zdobywasz punktu!";
				}
				if(getPointForG2 == true){
					getPointForG2Text = "Zdobywasz punkt!";			
				
				}else{
					getPointForG2Text = "Nie zdobywasz punktu! ";
				}
			}
			if (endOfTheGem == true)
			{
				if(gemForG1 == true){
					getPointForG1Text = getPointForG1Text + " ZDOBYWASZ GEMA!";
				}else{
					getPointForG2Text = getPointForG2Text + " ZDOBYWASZ GEMA!";
				}
			}
			return "Informacja dla Gracza 1: "+ getPointForG1Text + " Informacja dla Gracza 2: " + getPointForG2Text;
		}		
		
		

		
		string result(){
			string inGamePointG1= "",inGamePointG2="";
			string result = "";
			//Dla G1
			if(pointsG1 == 0){
				inGamePointG1 = "0";
			}
			if(pointsG1 == 1){
				inGamePointG1 = "15";
			}
			if(pointsG1 == 2){
				inGamePointG1 = "30";
			}
			if(pointsG1 == 3){
				inGamePointG1 = "40";
			}
			if(pointsG1 == 4){
				inGamePointG1 = "AD";
			}
			// Dla G2
			if(pointsG2 == 0){
				inGamePointG2 = "0";
			}
			if(pointsG2 == 1){
				inGamePointG2 = "15";
			}
			if(pointsG2 == 2){
				inGamePointG2 = "30";
			}
			if(pointsG2 == 3){
				inGamePointG2 = "40";
			}
			if(pointsG2 == 4){
				inGamePointG2 = "AD";
			}
			result = inGamePointG1+":"+inGamePointG2+" | Zdobyte Gemy Gracz 1 " + to_string(gemsG1) +":"+ to_string(gemsG2)+" Gracz 2";
			return result;	
		
		}
		


		
	};


    void displayGrid() {
    cout<<endl << "        pole przeciwnika" << "\n";
    cout << "      ---------------------" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      |   |  1  |  2  |   |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      | 5 |-----|-----| 6 |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      |   |  3  |  4  |   |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "---------------------------------" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      |   |  1  |  2  |   |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      | 5 |-----|-----| 6 |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      |   |  3  |  4  |   |" << "\n";
    cout << "      |   |     |     |   |" << "\n";
    cout << "      ---------------------" << "\n";
    cout << "           Twoje pole" << "\n";
}
	void atack(int field){
		switch(field){
		case 0:
		cout<<"Nie trafiłeś piłka poleciała w AUT :/"<<endl;
		case 1:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 2:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 3:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 4:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 5:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	
		case 6:
		cout<<"Zaatakowałeś pole nr."<<field<<endl;
		break;	

	}

	}

	void defend(int field){
		switch(field){
		case 1:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 2:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 3:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 4:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 5:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	
		case 6:
		cout<<"Bronisz pole nr."<<field<<endl;
		break;	

	}

	}

    int main(){

		int tryb;
		do{
			cout << "Witaj, wybierz tryb gry:\n";
    		cout << "1. Gra z botem\n";
    		cout << "2. Gra z drugim graczem\n";
    		cout << "Wybierz opcję (1 lub 2): ";
			cin >> tryb;
		}while(tryb != 1 && tryb != 2);

		if(tryb == 1){
			// Gra z botem
			cout << "Wybrałeś gre z botem";
			while (stillPlaying == true)
			{
				fieldAtack = 0;
				whoGetThePoint wGTP;
				endOfTheGem = false;

					
					
				displayGrid();
				// ATACK
				srand(time(NULL));
					
				while(fieldAtack <= 0 || fieldAtack >= 7){
					cout<<"Wybierz pole jakie chcesz zaatakować (1-6) ";
					cin>>fieldAtack;
					cout<<endl;
				}
				wGTP.probabilityOfAut();
				atack(fieldAtack);
					
			
			// DEFEND
				int fieldDefend = 0;
				displayGrid();
				while(fieldDefend <= 0 || fieldDefend >= 7){
					cout<<"Wybierz pole jakie chcesz obronić (1-6) ";
					cin>>fieldDefend;
					cout<<endl;
				}
				defend(fieldDefend);
				// DRAWING
				int DefRand = rand()%6+1;
				int AtkRand = rand()%6+1;
				cout<<"Twój Przeciwnik obronił pole: "<<DefRand<<endl<<"Twój Przeciwnik zaatakował pole:  "<<AtkRand;
				// Send to class wGTP (whoGetThePoint)
				wGTP.AtkG1 = fieldAtack;
				wGTP.AtkG2 = AtkRand;
				wGTP.DefG1 = fieldDefend;
				wGTP.DefG2 = DefRand;	
				
				if(endOfTheGem == false){
					wGTP.whoWin();
				}	else{
					//cout<<"endOFTheGem == false!";
				}
				wGTP.endOfGem();	
				cout<<endl<<endl<<wGTP.information()<<endl<<"Punktacja wygląda następująco: "<<wGTP.result();
					if(gemsG1 >= 3){
						cout<<endl<<"Gracz 1 WYGRYWA!";
						stillPlaying = false;
					}
					if(gemsG2 >= 3){
						cout<<endl<<"Gracz 2 WYGRYWA!";
						stillPlaying = false;
					}
			} // koniec while
		}
		else{
		// Gra z 2 graczem
		cout << "Wybrałeś gre z 2 graczem";
		}
		return 0;
	}
	
