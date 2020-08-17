#include <iostream>
#include <vector>

using namespace std;


std::vector<std::vector<string>> array;
int ind = 0;
bool ok = true;





int add_to_data(string book_id, string book_name, string author, string user_id){
	std::vector<string> da;
	da.push_back(book_id);
	da.push_back(book_name);
	da.push_back(author);
	da.push_back(user_id);
	array.push_back(da);
	return 0;
}	


void print_data(){
	int nu = array.size();
	cout<<"|------------------------------------------------|"<<endl;
	for (int i=0; i< nu; i++) {
		cout<<" book_id: "<< array[i][0]<<" book_name : "<<array[i][1]<<" author: "<< array[i][2]<<" user_id : "<<array[i][3]<<endl;
		cout<<"|------------------------------------------------ |"<<endl;
	}
}

void user_adding(){
	string book_id ;
	string book_name ;
	string author ;
	string user_id ;
	cout<<"Please Enter book id : ";
	cin>>book_id;
	cout<<"Please Enter book name : ";
	cin>>book_name;
	cout<<"Please Enter author name : ";
	cin>>author;
	cout<<"Please Enter user id : ";
	cin>>user_id;
	add_to_data(book_id, book_name, author, user_id);

}

void my_storage(){
	add_to_data("0", "tale of two cities", "agatha cristie", "1254");
	add_to_data("1", "tale s", "agatha ", "1288");
	add_to_data("2", "t cities", " cristie", "4554");
}


void exit_cond(){
	bool eshta = true;
	char ex;
	while (eshta){
		cout<<"EXIT(y/n)";
		cin>>ex;

		if (ex == 'y'){
			eshta = false;
			ok = false;
			cout<< "thank you" ;
		}

		else if (ex == 'n'){
		cout<<endl;
		eshta = false;
		}

		else{
			cout<<"please try again , i can't understand .";
		}
	}
}


void main_loop(){
	while(ok){
		char value;
		cout<<"for adding data press 'A' then ENTER"<<endl;
		cout<<"for showing data press 'S' then ENTER"<<endl;
		cin>>value;
		if (value == 'a'){
		user_adding();
		}
		else if (value == 's'){
			print_data();
		}
		else{
			cout<<"can't understand please try again.";
		}
		exit_cond();
		
	}
}





int main(){
	my_storage();
	main_loop();



	
	return 0;
}
