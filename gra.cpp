#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <time.h>
#include <string>

using namespace std;
	bool getPointForG1 = false,getPointForG2 = false,stillPlaying = true,withoutPoints=false,endOfTheGem=false,gemForG1=false,gemForG2=false;
	int pointsG1 = 0, pointsG2 = 0,gemsG1=0,gemsG2=0;
	class whoGetThePoint{
		public:
		int DefG1 = 0, DefG2 = 0,AtkG1 = 0,AtkG2 = 0;
		
		void endOfGem(){	
			endOfTheGem == false;	
			gemForG1 == false;
			gemForG2 == false;	
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

						
				if(AtkG2 != DefG1){
					getPointForG2 = true;						
				}
				if(AtkG1 != DefG2){
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
				getPointForG1 = "Bez punktu";
				getPointForG2 = "Bez punktu (nie może być wyniku AD:AD)";
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
			
			string result = "";
			result = to_string(pointsG1)+":"+to_string(pointsG2)+"		Zdobyte Gemy Gracz1:Gracz2 " + to_string(gemsG1) +":"+ to_string(gemsG2);
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
	
	// NA RAZIE TYLKO GRA Z BOTEM!
		while (stillPlaying == true)
		{
			whoGetThePoint wGTP;
		
			
		displayGrid();
		// ATACK
		srand(time(NULL));
			int fieldAtack = 0;
		while(fieldAtack <= 0 || fieldAtack >= 7){
			cout<<"Wybierz pole jakie chcesz zaatakować (1-6) ";
			cin>>fieldAtack;
			cout<<endl;
		}	
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
		}	
		wGTP.endOfGem();	
		cout<<endl<<endl<<wGTP.information()<<endl<<endl<<"Punktacja wygląda następująco: "<<wGTP.result();
		


		}
	return 0;
	}
	
