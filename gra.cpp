#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <time.h>
#include <string>

using namespace std;
	bool GetpointForG1 = false,GetpointForG2 = false;
	class whoGetThePoint{
		public:
		int DefG1 = 0, DefG2 = 0,AtkG1 = 0,AtkG2 = 0;
		
		
		// Def1 -> atk2, Def2 -> Atk1,
		void whoWin(){
			
			if(AtkG1 != DefG2){
				GetpointForG1 = true;				
			}	
			if(AtkG2 != DefG1){
				GetpointForG2 = true;				
			}
		}
		string information(){
			string GetpointForG1Text="",GetpointForG2Text="";
			if(GetpointForG1 == true){
				GetpointForG1Text = "Zdobyłeś punkt! :)";
			}else{
				GetpointForG1Text = "Przeciwnik wybronił się przed Twoim atakiem nie zdobywasz punktu :(";
			}
			if(GetpointForG2 == true){
				GetpointForG2Text = "Zdobyłeś punkt! :) G2";
			}else{
				GetpointForG2Text = "Przeciwnik wybronił się przed Twoim atakiem nie zdobywasz punktu :( G2";
			}
			return "LICZBY"+ to_string(AtkG1)+"A1" + to_string(AtkG2)+"A2" + to_string(DefG1)+"D1"+to_string(DefG2)+"D2" +" | "+ GetpointForG1Text + " | " + GetpointForG2Text;
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
	whoGetThePoint wGTP;
	// NA RAZIE TYLKO GRA Z BOTEM!
		
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
	wGTP.whoWin();
	cout<<endl<<endl<<wGTP.information();


	return 0;
    }
	
