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

///START Structure Here
int main(){
	system("color 0c");
	load();
	system("cls");
	welcome();
	system("cls");
	options();
	
	cout << endl << endl << endl << endl << endl << endl << endl;
}

//position
void gotoxy(int x, int y){
	COORD d;
	d.X = x;
	d.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}

//Loading screen function
void load(){
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

		Sleep(200);
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
				cout<<"\n1) "<<main1<<" P50"<<" (buns, beef patty, tomato, onions, lettuce, (one) cheese) \n";
				cout<<"2) "<<main2<<" P75"<<" (buns, veggie patty, tomato, onions, pickles, mushrooms) \n";
				cout<<"3) "<<main3<<" P100"<<"(buns, double beef patty, tomato, onions, lettuce, (two) cheese, fries) \n";
				cout << "4) Go Back to Menu\n";
				
				cout<<"\nPlease Enter which main() Classics would you like to have? ";
				
				cin >> main;
				switch (main) {
				case 1: {
					cout << "How many Classic++ you want? ";
					cin >> qtyClassic;
					totClassic = totClassic + (50 * qtyClassic);
					totMain = totMain + totClassic;
				} break;
				case 2: {
					cout << "How many Veggie++ you want? ";
					cin >> qtyVeggie;
					totVeggie = totVeggie + (75 * qtyVeggie);
					totMain = totMain + totVeggie;
				} break;
				case 3: {
					cout << "How many Double++ you want? ";
					cin >> qtyDouble;
					totDouble = totDouble + (100 * qtyDouble);
					totMain = totMain + totDouble;
				} 
				break;
					default:
					system("cls"); 
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
				
				cout<<"\n1) "<<special1<<" P180"<<"(four cheese as main ingredients—mozzarella, cheddar, parmesan, swiss, buns, beef patty, tomato, onions, lettuce) \n";
				cout<<"2) "<<special2<<" P150"<<"(buns, beef patty, barbecue sauce, bacon, onions, lettuce, tomato) \n";
				cout<<"3) "<<special3<<" P180"<<" (buns, double patty, bacon, four cheese, tomato, onion, lettuce) \n";
				cout << "4) Go Back to Menu\n";
				
				cout<<"\nPlease Enter which special classes would you like to have? ";
				cin>>special;
				
				switch (special) { 
				case 1: {
					cout << "How many C(Cheese) Language you want? ";
					cin >> qtyC;
					totC = totC + (180 * qtyC);
					totSpecial = totSpecial + totA;
				} break; //end of switch(necklace): case 1
				case 2: {
					cout << "How many The B (Barbecue) Language you want? ";
					cin >> qtyB;
					totB = totB + (150 * qtyB);
					totSpecial = totSpecial + totB;
				} break; //end of switch(necklace): case 2
				case 3: {
					cout << "How The A (All-In) Language you want? ";
					cin >> qtyA;
					totA = totA + (180 * qtyA);
					totSpecial = totSpecial + totA;
				} break;
					default:
					system("cls"); 
				} 
			} while (special <= 3);
		} break; 

		
		case 3: {
			system("cls");
			//Menu for Statement Burgers
			do {
				cout<<"\t\t\t|-------------------------------------------------------|\n";
				cout<<"\t\t\t|                    STATEMENT BURGERS                  |\n";
				cout<<"\t\t\t|-------------------------------------------------------|\n\n";
				
				cout<<"\n1) "<<statement1<<" P170"<<"(buns, salmon, onions, tomato, lettuce) \n";
				cout<<"2) "<<statement2<<" P100"<<"(buns, sliced ham, onions, tomato, lettuce) \n";
				cout<<"3) "<<statement3<<" P180"<<" (buns, breaded and deep fried beef, bacon, onion, lettuce, tomato, french fries) \n";
				cout << "4) Go Back to Menu\n";
				
				cout<<"\nPlease Enter which statement burgers would you like to have? ";
				cin>>statement;
				
				switch (statement) {
				case 1: {
					cout << "How many Fish Statement do you want? ";
					cin >> qtyFried;
					totFried = totFried + (170 * qtyFried);
					totStatement = totStatement + totFried;
				} break;
				case 2: {
					cout << "How many Ham Statement do you want? ";
					cin >> qtyHam;
					totHam = totHam + (100 * qtyHam);
					totStatement = totStatement + totHam;
				} break;
				case 3: {
					cout << "How many Fried Statement do you want? ";
					cin >> qtyFried;
					totFried = 	totFried + (180 * qtyFried);
					totStatement = totStatement + 	totFried;
				} break;
				default:
					system("cls");
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
		totCost = totClassic + totVeggie + totDouble+ totC+totB+totA+totFish+totHam+totFried;

		//Summary 
		cout<<"\t\t\t|-------------------------------------------------------|\n";
		cout<<"\t\t\t|                  SUMMARY OF PURCHASES                 |\n";
		cout<<"\t\t\t|-------------------------------------------------------|\n\n";
		
		cout << " The Classic++              	    = " << totClassic << " \n";
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
	
	int discount;
	

	cout << " [choose 1] PWD/Senior Citizen \n";
	cout << " [choose 2] Student  \n";
	cout << " [choose 3] Voucher Codes  \n"; 
	cout << " [choose 4] None \n\n";
	
	cout << " Please choose one to avail discount: ";
	cin >> discount;
	
	//Senior/PWD Discounts
	if(discount==1){
		
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
    
	double Change = Payment- PriceAfterDiscount;
	cout << "\nChange:          P" << Change;
	}
	
	//Student Discount
	else if(discount==2){
		
		int marks[3], i;
        float sum=0,avg;

        cout<<"\n Enter your mark to the following subjects validate the discount; \n";
        cout<<"-------------------------------------------------";
        cout<<"\n English : ";
        cin>>marks[0];
        cout<<"\n Maths : ";
        cin>>marks[1];;
        cout<<"\n Science : ";
        cin>>marks[2];

        for(i=0;i<3;i++)
        {
                sum=sum+marks[i];
        }
        cout<<"-------------------------------------------------";
        cout<<"\n Total Marks of Student = "<<sum;
        avg=sum/3;
        cout<<"\n Average = "<<avg<<"\n";

		//if the student have a 91 GWA above they will have 8% discount
        if(avg>91)
        {
        double OriginalPrice = totCost;
    	double DiscountAmount = totCost * 8/ 100;
    	double PriceAfterDiscount = OriginalPrice - DiscountAmount;
    	double TaxAmount = PriceAfterDiscount * 10 / 100;
    	double NetPrice = PriceAfterDiscount + TaxAmount;

    		cout << "\nSubtotal:        P" << OriginalPrice;
    		cout << "\nDiscount:        P" << DiscountAmount;
    		cout << "\nTax Amount:      P" << TaxAmount;
    		cout << "\nNet Price:       P" << NetPrice;
    		cout << "\nTotal:           P" << PriceAfterDiscount;
    
			double Change = Payment- PriceAfterDiscount;
			cout << "\nChange:          P" << Change;
			
			cout <<"\n\n Keep it up!The Burger++ is happy to serve you";
        }
        
        //if the student have a 85-90 GWA they will have 5% discount
        else if(avg>=85 && avg<=90)
        {
        double OriginalPrice = totCost;
    	double DiscountAmount = totCost * 5/ 100;
    	double PriceAfterDiscount = OriginalPrice - DiscountAmount;
    	double TaxAmount = PriceAfterDiscount * 10 / 100;
    	double NetPrice = PriceAfterDiscount + TaxAmount;

    		cout << "\nSubtotal:        P" << OriginalPrice;
    		cout << "\nDiscount:        P" << DiscountAmount;
    		cout << "\nTax Amount:      P" << TaxAmount;
    		cout << "\nNet Price:       P" << NetPrice;
    		cout << "\nTotal:           P" << PriceAfterDiscount;
    
			double Change = Payment- PriceAfterDiscount;
			cout << "\nChange:          P" << Change;
			
			cout <<"\n\n Keep it up!The Burger++ is happy to serve you";
        }
		
		//if the student did not reach the grade limit they will have no discount
		else{
			cout<<"\n Discount not applied";
			
		double Change1 = Payment- totCost;
		double TaxAmount = totCost * 10 / 100;
    	double NetPrice = totCost + TaxAmount;
		
		cout << "\nSubtotal:        P" << totCost;
    	cout << "\nTax Amount:      P" << TaxAmount;
    	cout << "\nNet Price:       P" << NetPrice;
    	cout << "\nTotal:           P" << totCost;
		cout << "\nChange:          P" << Change1;
		
		cout <<"\n\n Keep it up!The Burger++ is happy to serve you ";
		}
		
	}
	
	
	//Voucher code(Please read the README.txt file so you can now the voucher codes.
	//The codes will change according to the management
	else if(discount==3){
		int cust;
		
		cout<<"\n Please enter your voucher code  = ";
		scanf("\n %d",&cust);
		
		//If the customer shows the "4852" code they will have 50% discount
		if(cust==4852){
		
		double OriginalPrice = totCost;
    	double DiscountAmount = totCost * 50 / 100;
    	double PriceAfterDiscount = OriginalPrice - DiscountAmount;
    	double TaxAmount = PriceAfterDiscount * 10 / 100;
    	double NetPrice = PriceAfterDiscount + TaxAmount;

    		cout << "\nSubtotal:        P" << OriginalPrice;
    		cout << "\nDiscount:        P" << DiscountAmount;
    		cout << "\nTax Amount:      P" << TaxAmount;
    		cout << "\nNet Price:       P" << NetPrice;
    		cout << "\nTotal:           P" << PriceAfterDiscount;
    
			double Change = Payment- PriceAfterDiscount;
			cout << "\nChange:          P" << Change;
		}
		
		//If the customer shows the "4360" code they will have 40% discount
		else if(cust==4360){
		
		double OriginalPrice = totCost;
    	double DiscountAmount = totCost * 40 / 100;
    	double PriceAfterDiscount = OriginalPrice - DiscountAmount;
    	double TaxAmount = PriceAfterDiscount * 10 / 100;
    	double NetPrice = PriceAfterDiscount + TaxAmount;

    		cout << "\nSubtotal:        P" << OriginalPrice;
    		cout << "\nDiscount:        P" << DiscountAmount;
    		cout << "\nTax Amount:      P" << TaxAmount;
    		cout << "\nNet Price:       P" << NetPrice;
    		cout << "\nTotal:           P" << PriceAfterDiscount;
    
			double Change = Payment- PriceAfterDiscount;
			cout << "\nChange:          P" << Change;
	}
	
		//If the customer shows the "7768" code they will have 30% discount
			else if(cust==7768){
		
		double OriginalPrice = totCost;
    	double DiscountAmount = totCost * 30 / 100;
    	double PriceAfterDiscount = OriginalPrice - DiscountAmount;
    	double TaxAmount = PriceAfterDiscount * 10 / 100;
    	double NetPrice = PriceAfterDiscount + TaxAmount;

    		cout << "\nSubtotal:        P" << OriginalPrice;
    		cout << "\nDiscount:        P" << DiscountAmount;
    		cout << "\nTax Amount:      P" << TaxAmount;
    		cout << "\nNet Price:       P" << NetPrice;
    		cout << "\nTotal:           P" << PriceAfterDiscount;
    
			double Change = Payment- PriceAfterDiscount;
			cout << "\nChange:          P" << Change;
	}
	
		//If the customer shows the "7878" code they will have 20% discount
			else if(cust==7878){
		
		
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
    
			double Change = Payment- PriceAfterDiscount;
			cout << "\nChange:          P" << Change;
		}
		
		//If the customer shows the "3366" code they will have 10% discount
			else if(cust==3366){
		
		double OriginalPrice = totCost;
    	double DiscountAmount = totCost * 10 / 100;
    	double PriceAfterDiscount = OriginalPrice - DiscountAmount;
    	double TaxAmount = PriceAfterDiscount * 10 / 100;
    	double NetPrice = PriceAfterDiscount + TaxAmount;

    		cout << "\nSubtotal:        P" << OriginalPrice;
    		cout << "\nDiscount:        P" << DiscountAmount;
    		cout << "\nTax Amount:      P" << TaxAmount;
    		cout << "\nNet Price:       P" << NetPrice;
    		cout << "\nTotal:           P" << PriceAfterDiscount;
    
			double Change = Payment- PriceAfterDiscount;
			cout << "\nChange:          P" << Change;
		}
		
		//If the code are not match with any of the following given voucher, they have no discount
		else {
		cout<< "Your voucher code is invalid";
		
		double Change1 = Payment- totCost;
		double TaxAmount = totCost * 10 / 100;
    	double NetPrice = totCost + TaxAmount;
		
		cout << "\nSubtotal:        P" << totCost;
    	cout << "\nTax Amount:      P" << TaxAmount;
    	cout << "\nNet Price:       P" << NetPrice;
    	cout << "\nTotal:           P" << totCost;
		cout << "\nChange:          P" << Change1;
				
		}
		
	}
	
	//If they can't present anything, the system will generate their bill
	else if (discount==4){	
	
		double Change1 = Payment- totCost;
		double TaxAmount = totCost * 10 / 100;
    	double NetPrice = totCost + TaxAmount;
		
		cout << "\nSubtotal:        P" << totCost;
    	cout << "\nTax Amount:      P" << TaxAmount;
    	cout << "\nNet Price:       P" << NetPrice;
    	cout << "\nTotal:           P" << totCost;
		cout << "\nChange:          P" << Change1;
	
	}
	
	else{
		system("cls");
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
