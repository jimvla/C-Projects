#include <iostream>
#include <string>
using namespace std;

struct Cook{
	char name[50];
	char spec_cuisine[50];
	unsigned short int age;
	float score;
	bool chef;
};

struct Trial{
	char trial_name[50];
	char trial_cuisine[50];
	int dif_level;
	int reward;
};

void show_level(Cook cook1){
	if (cook1.age < 25) && (cook1.bool==1){
		cout << "Young Chef";
	}
	else if(cook1.age >= 25) && (cook1.bool==1){
		cout << "Old Chef";
	} 
}

void predict_winner(Cook cook1,Cook cook2,Trial trial1){
	if (cook1.spec_cuisine == trial1.trial_cuisine) && (cook2.spec_cuisine != trial1.trial_cuisine){
		cout << "First Cook has an advantage";
	}
	else if (cook2.spec_cuisine == trial1.trial_cuisine) && (cook1.spec_cuisine != trial1.trial_cuisine){
		cout << "Second Cook has an advantage";
	} 
	else if (cook1.spec_cuisine == cook2.spec_cuisine){
		cout << "Same Cuisine";
		if (cook1.score > cook2.score){
			cout << "First Cook has greater score so far, so he might win";
		else if (cook1.score < cook2.score){
			cout << "Second Cook has greater score so far, so he might win";
		}
		else if (cook1.score == cook2.score){
			cout << "Equal Scores";
		}	
		}
	}

}

int modify_winner(Cook cook1,Trial trial1){
	if trial1.dif_level <= 3{
		cook1.score = cook1.score + trial1.dif_level * trial1.reward;
	}
	else{
		cook1.score = cook1.score + trial1.reward;
	}
}

class Chef{
	public:
		string name;
		int wins;
	private:
		string spec_cuisine;
		double score;
}

Chef::Chef(){
	name = "DimitrisVlachos";
	wins = 76;
	score = 568;
	spec_cuisine = "Greek";
	cout << "A new chef is ready to cook \n";
	cout << "Last year's winner was ",name ,"with ",wins "wins and ",score ,"points. ",spec_cuisine ,"favorite cuisine is " ,P
}