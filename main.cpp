
#include<iostream>
#include<windows.h>
#include<stdlib.h>

using namespace std;

//Extra Design Functions
void load();
void gotoxy();
void welcome();
void menu();
void exit();

//Main Functions
void options();
void library();
void developers();


int main()
{
	system("color 0c");
	load();
	system("cls");
	welcome();
	system("cls");
	options();
	
	cout << endl << endl << endl << endl << endl << endl << endl;
}

	//Exit Function		
	void exit()
	{
        cout << "                                      " << endl;
        cout << "                                      " << endl;
        cout << "           T H A N K  Y O U       \n\n" << endl;
        cout << "           F O R  U S I N G       \n\n" << endl;
        cout << "        T H I S  P R O G R A M        " << endl;
        cout << "                                      " << endl;
        cout << "                                      " << endl;
	}
	
	///START Structure Here
	//The Menu Function
	void menu(){
		
	//Data Types
	char main1[]="The Classic++" ,main2[]="The Veggie++" ,main3[]="The Double++";
	char special1[]="The C(Cheese) Language", special2[]="The B(Barbecue) Language",special3[]="The A(All-in) Language";
	char statement1[]="The Fish Statement", statement2[]="The Ham Statement", statement3[]="The Fried Statement";
	int trans, main, qtyClassic, qtyVeggie, qtyDouble, special, qtyA, qtyB, qtyC, statement,qtyFish, qtyHam, qtyFried;
	int totMain = 0, totClassic = 0, totVeggie = 0, totDouble = 0, totSpecial=0,totA=0,totB=0,totC=0,totStatement=0, totFried=0,totHam=0,totFish=0, totCost = 0, Payment = 0, change = 0;

	do {
		cout<<"\t\t\t|-------------------------------------------------------|\n";
		cout<<"\t\t\t|                     BURGER++ LIBRARY                  |\n";
		cout<<"\t\t\t|-------------------------------------------------------|\n\n";
		cout<<"Hello, What would you like to order?\n\n";
		
		cout<<"[Choice 1] Main() Classics\n";
		cout<<"[Choice 2] Special Classes\n";
		cout<<"[Choice 3] Statement Burgers\n";
		cout<<"[Choice 4] Go Back \n";
		cout<<"[Choice 5] Checkout \n";
		
		cout<<"\nPlease Enter your Choice: ";
		cin >> trans;
		
		switch (trans) {
		case 1: { 
			system("cls");
			do {
				//Menu for Main() Classes
				cout<<"\t\t\t|-------------------------------------------------------|\n";
				cout<<"\t\t\t|                     MAIN() CLASSICS                   |\n";
				cout<<"\t\t\t|-------------------------------------------------------|\n\n";
				cout<<"\n1) "<<main1<<" (buns, beef patty, tomato, onions, lettuce, (one) cheese) \n";
				cout<<"2) "<<main2<<" (buns, veggie patty, tomato, onions, pickles, mushrooms) \n";
				cout<<"3) "<<main3<<"(buns, double beef patty, tomato, onions, lettuce, (two) cheese, fries) \n";
				cout << "4) Go Back to Menu\n";
				
				cout<<"\nPlease Enter which main() Classics would you like to have?:";
				
				cin >> main;
				switch (main) {
				case 1: {
					cout << "How many Classic++ you want?";
					cin >> qtyClassic;
					totClassic = totClassic + (50 * qtyClassic);
					totMain = totMain + totClassic;
				} break;
				case 2: {
					cout << "How many Veggie++ you want?";
					cin >> qtyVeggie;
					totVeggie = totVeggie + (75 * qtyVeggie);
					totMain = totMain + totVeggie;
				} break;
				case 3: {
					cout << "How many Double++ you want?";
					cin >> qtyDouble;
					totDouble = totDouble + (100 * qtyDouble);
					totMain = totMain + totDouble;
				} 
				break;
				}
			} while (main <= 3); 
		} break; 
		
	
		case 2: { 
			system("cls");
			do { 
				//Menu for Special Classes
				cout<<"\t\t\t|-------------------------------------------------------|\n";
				cout<<"\t\t\t|                    SPECIAL CLASSES                    |\n";
				cout<<"\t\t\t|-------------------------------------------------------|\n\n";
				
				cout<<"\n1 "<<special1<<" P180"<<"(four cheese as main ingredients—mozzarella, cheddar, parmesan, swiss, buns, beef patty, tomato, onions, lettuce) \n";
				cout<<"2 "<<special2<<" P150"<<"(buns, beef patty, barbecue sauce, bacon, onions, lettuce, tomato) \n";
				cout<<"3 "<<special3<<" P160"<<" (buns, double patty, bacon, four cheese, tomato, onion, lettuce) \n";
				cout << "4) Go Back to Menu\n";
				
				cout<<"\nPlease Enter which special classes would you like to have?:";
				cin>>special;
				
				switch (special) { 
				case 1: {
					cout << "How many C(Cheese) Language you want? ";
					cin >> qtyC;
					totC = totC + (180 * qtyC);
					totSpecial = totSpecial + totA;
				} break; //end of switch(necklace): case 1
				case 2: {
					cout << "How many The B (Barbecue) Language you want?";
					cin >> qtyB;
					totB = totB + (150 * qtyB);
					totSpecial = totSpecial + totB;
				} break; //end of switch(necklace): case 2
				case 3: {
					cout << "How The A (All-In) Language you want?";
					cin >> qtyA;
					totA = totA + (160 * qtyA);
					totSpecial = totSpecial + totA;
				} break; //end of switch(necklace): case 3
				} //end of Switch (necklace)
			} while (special <= 3);
		} break; 

		
		case 3: {
			system("cls");
			//Menu for Statement Burgers
			do {
				cout<<"\t\t\t|-------------------------------------------------------|\n";
				cout<<"\t\t\t|                    STATEMENT BURGERS                  |\n";
				cout<<"\t\t\t|-------------------------------------------------------|\n\n";
				cout << "4) Go Back to Menu\n";
				
				cout<<"\n1 "<<statement1<<" P180"<<"(buns, salmon, onions, tomato, lettuce) \n";
				cout<<"2 "<<statement2<<" P150"<<"(buns, sliced ham, onions, tomato, lettuce) \n";
				cout<<"3 "<<statement3<<" P160"<<" (buns, breaded and deep fried beef, bacon, onion, lettuce, tomato, french fries) \n";
				
				cout<<"\nPlease Enter which special classes would you like to have?:";
				cin>>statement;
				
				switch (statement) {
				case 1: {
					cout << "How many Fish Statement do you want?";
					cin >> qtyFried;
					totFried = totFried + (180 * qtyFried);
					totStatement = totStatement + totFried;
				} break;
				case 2: {
					cout << "How many Ham Statement do you want?";
					cin >> qtyHam;
					totHam = totHam + (150 * qtyHam);
					totStatement = totStatement + totHam;
				} break;
				case 3: {
					cout << "How many Fried Statement do you want?";
					cin >> qtyFried;
					totFried = 	totFried + (100 * qtyFried);
					totStatement = totStatement + 	totFried;
				} break;
				}
			} while (statement <= 3); 
		} break;
		
		case 4: {
			system("cls");
			options();
			break;
		}
		
		default:cout << "\nThank you please come again!\n\n"; break;
		}
	} while (trans <= 3);
	
	
	do {
		system("cls");  // clear screen

		// Formula for Total Bill
		totCost = totMain + totSpecial + totStatement;

		//Summary 
		cout<<"\t\t\t|-------------------------------------------------------|\n";
		cout<<"\t\t\t|                  SUMMARY OF PURCHASES                 |\n";
		cout<<"\t\t\t|-------------------------------------------------------|\n\n";
		
		cout << " The Classic++              	   = " << totClassic << " \n";
		cout << " The Veggie++                      = " << totVeggie << " \n";
		cout << " The Double++                      = " << totDouble << " \n";
		cout << " The C (Cheese) Language           = " << totC << " \n";
		cout << " The B (Barbecue) Language         = " << totB << " \n";
		cout << " The A (All-In) Language           = " << totA << "\n";
		cout << " The Fish Statement                = " << totFish << "\n";
		cout << " The Ham Statement                 = " << totHam << "\n";
		cout << " The Fried Statement               = " << totFried << "\n";
		cout << "                                            \n";
		cout << "----------------------------------------------\n";
		cout << "   Total Burger++ Bill             = " << totCost <<"\n";
		cout << "----------------------------------------------\n";
		
		cout << "   Enter Payment                    = ";
		cin >> Payment;

	} while (Payment < totCost);
	
	int pwdsc;
	cout << " Are you a PWD/Senior Citizen? \n";
	cout << " [choose 1] Yes \n";
	cout << " [choose 2] No  ";
	cin >> pwdsc;
	cout<<"Enter 12345 to continue the discount  = ";
	
	if( pwdsc==1){
		int user;
	
		scanf("\n %d",&user);
		if(user==12345){
		
	double OriginalPrice = totCost;
    double DiscountAmount = totCost * 20 / 100;
    double PriceAfterDiscount = OriginalPrice - DiscountAmount;
    double TaxAmount = PriceAfterDiscount * 10 / 100;
    double NetPrice = PriceAfterDiscount + TaxAmount;

    cout << "\nSubtotal:        P" << OriginalPrice;
    cout << "\nDiscount:        P" << DiscountAmount;
    cout << "\nTax Amount:      P" << TaxAmount;
    cout << "\nNet Price:       P" << NetPrice;
    cout << "\nTotal:           P" << PriceAfterDiscount;
    
    //double Change;

    //cout << "\nEnter your payment: ";
    //cin >> Change;
	double Change = Payment- PriceAfterDiscount;
	cout << "\nChange:          P" << Change;
}

}
	else if ( pwdsc==2){
		
		double Change1 = Payment- totCost;
		double TaxAmount = totCost * 10 / 100;
    	double NetPrice = totCost + TaxAmount;
		
		cout << "\nSubtotal:        P" << totCost;
    	cout << "\nTax Amount:      P" << TaxAmount;
    	cout << "\nNet Price:       P" << NetPrice;
    	cout << "\nTotal:           P" << totCost;
		cout << "\nChange:          P" << Change1;
	}
	
	cout<<"\n-------------------------------------------------------\n";
	cout<<"         THANK YOU FOR BUYING, HAVE A GOOD DAY!        \n";

}//end of main()


	//Function for Developers
	void developers(){
	int choose=0, goback;
			
	starting:
	system("cls");
	//Names of Group 4 Developers
	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|                     DEVELOPERS                        |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	
	cout<<"[Choice 1] Show the Delopers\n";
	cout<<"[Choice 2] Go Back\n";

	cout<<"\nPlease Enter your Choice: ";
	cin>>choose;

	if(choose==1)
	 {
		cout<<"     TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES    \n";
 		cout<<"                   Manila City                     \n";
 		cout<<"       ITE001 - Computer Programming 1             \n";
 		cout<<"         1st Semester S.Y. 2020-2021               \n";
 		cout<<"                 Final Project                     \n";
 		cout<<"  Title: Burger++ Menu Transaction System          \n";
 		cout<<"  Memebers: Toquire,Maria Allyza A. - BSIT         \n";
 		cout<<"            Lindo,Jem Francine A. - BSIT           \n";
 		cout<<"            Parco,Lester Henry - BSIT              \n";
 		cout<<"            Jose, Kevin Isaiah - BSIT              \n";
 		cout<<"Instructor: Sir Joseph Luken Domingo               \n";
 		
 		cout<<"\nPlease Enter 0 to go back to menu:";
				cin>>goback;
				
				switch (goback) {
				case 0: {
					system("cls");
					options();
				} break;
	 }

}
	 else if(choose==2)
	 {
		system("cls");
			options();
 	}
}
        
    //Main menu
	void options(){
		char selection;

	cout<<"\n Where do you want to go?";
	cout<<"\n\n B - Burger++ Library";
	cout<<"\n D - Developers";
	cout<<"\n E - Exit";
	
	cout<<"\n\n Enter selection: ";

// read the input 
cin>>selection;

 switch(selection){
 	system("cls");
 	
	case 'B' :
	case 'b':{ 
		system("cls");
		menu();
		
	}
	break;
	case 'D' :
	case 'd' :{
		system("cls");
		developers();
 }
	break;
	case 'E':
	case 'e':{
		system("cls");
		exit();
		break;
	}

	default : cout<<"\n Invalid selection";
}
	cout<<"\n";}

//Introduction Title
void welcome() {
	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" BURGER++";
	printf("\n\n\n\n\n\t\t\t");
	for(int wlc=0; wlc<strlen(welcome);wlc++){

		printf(" %c",welcome[wlc]);
		Sleep(100);
	}

	printf("\n\n\t\t\t\t ");
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		printf(" %c",welcome2[wlc2]);
		Sleep(100);
	}

	printf("\n\n\t\t\t ");
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){

			printf(" %c",welcome3[wlc3]);
		}
		else{

			printf(" %c",welcome3[wlc3]);
		}

		Sleep(100);
	}
}

//position
void gotoxy(int x, int y)
{
	COORD d;
	d.X = x;
	d.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}

//Loading screen function
void load()
{
	char a = 219;
	gotoxy(36, 14);
	cout << "Loading..."<< endl;
	gotoxy(30,16);
	for(int r =1; r<=20; r++)
	{
		for(int q=0; q<=10000000; q++);
		cout << a;
	}
}

