#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
void start();
int manu();
int k=0;


int main()
{
	start();
	string f_name[100];
	string l_name[100];
	string email[100];
	string address[100];
	string b_group[50];
	string con_no[100];
	string age[20];
	string donate[100];

	int check=0;
	int Total_contacts=0;
    check=manu();
    do
    {
    	// Add Donors information
    	if(check==1)
    	{

    		cout<<"\t\t\t\t\t\t First Name :";
    		cin>>f_name[k];
    		cout<<"\t\t\t\t\t\t Last Name :";
    		cin>>l_name[k];
    		cout<<"\t\t\t\t\t\t Email :";
    		cin>>email[k];
    		cout<<"\t\t\t\t\t\t Address :";
    		cin>>address[k];
    		cout<<"\t\t\t\t\t\t Blood Group :";
    		cin>>b_group[k];
    		cout<<"\t\t\t\t\t\t Phone no :";
    		cin>>con_no[k];
    		cout<<"\t\t\t\t\t\t Age:";
    		cin>>age[k];
    		cout<<"\t\t\t\t\t\t Last date of donate :";
    		cin>>donate[k];
    		k++;
    		Total_contacts++;
    		cout<<endl<<" add successfully...";
		}




		//Diplay donor
		else if (check==2)
		{
			int check2=0;
			for(int i=0; i<5;i++)
			{

			    cout<<"User number: "<<i+1<<"***********************************************"<<endl;
				cout<<"\t\t\t\t\tName :"<<f_name[i]<<" "<<l_name[i]<<endl;
				cout<< "\t\t\t\t\tEmail :"<<email[i]<<endl;
				cout<< "\t\t\t\t\tAddress :"<<address[i]<<endl;
				cout<< "\t\t\t\t\tBlood group :"<<b_group[i]<<endl;
				cout<< "\t\t\t\t\tPhone Number :"<<con_no[i]<<endl;
				cout<< "\t\t\t\t\tAge :"<<age[i]<<endl;
				cout<< "\t\t\t\t\tLast date of donate :"<<donate[i]<<endl;

				check2++;


			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t";
			}
		}
		//Search by Blood_g
		else if(check==3)
		{
			string temp;
			cout<<"\t\t\t\t\tEntered Blood Group : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<200;i++)
			{
				if(temp==b_group[i])
				{
					cout<<"\t\t\t\t\t  Found Blood Group: \n";
					cout<<"**********************************************"<<endl;
					cout<<"\t\t\t\t\t  Name :"<<f_name[i]<<" "<<l_name[i]<<endl;
				    cout<< "\t\t\t\t\t Email :"<<email[i]<<endl;
				    cout<< "\t\t\t\t\t Address :"<<address[i]<<endl;
				    cout<< "\t\t\t\t\t Blood group :"<<b_group[i]<<endl;
				    cout<< "\t\t\t\t\t Phone Number :"<<con_no[i]<<endl;
				    cout<< "\t\t\t\t\t Age :"<<age[i]<<endl;
                    cout<< "\t\t\t\t\t Last date of donate :"<<donate[i]<<endl;
					check2++;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t This Number is Not found in your contact list\n";
			}
		}
		//Search By Name
		else if(check==4)
		{
				string temp;
			cout<<"\t\t\t\t\t Search by Name : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==f_name[i])
				{
					cout<<"\t\t\t\t\t  Donor is found\n";
					cout<<"**********************************************"<<endl;
					cout<<"\t\t\t\t\t  Name :"<<f_name[i]<<" "<<l_name[i]<<endl;
				    cout<< "\t\t\t\t\t Email :"<<email[i]<<endl;
				    cout<< "\t\t\t\t\t Address :"<<address[i]<<endl;
				    cout<< "\t\t\t\t\t Blood group :"<<b_group[i]<<endl;
				    cout<< "\t\t\t\t\t Phone Number :"<<con_no[i]<<endl;
				    cout<< "\t\t\t\t\t Age :"<<age[i]<<endl;
				    cout<< "\t\t\t\t\t Last date of donate :"<<donate[i]<<endl;
					check2++;
				}

			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t This type of Blood is not found in your Database\n";
			}
		}
		// Update
		else if(check==5)
		{
			string temp,temp2,temp3;
			cout<<"\t\t\t\t\tName : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==f_name[i])
				{
					cout<<"\t\t\t\t\t Name :"<<f_name[i]<<" "<<l_name[i]<<endl;
				cout<< "\t\t\t\t\t Email :"<<email[i]<<endl;
				cout<< "\t\t\t\t\t Address :"<<address[i]<<endl;
				cout<< "\t\t\t\t\t Blood group :"<<b_group[i]<<endl;
				cout<< "\t\t\t\t\t Phone Number :"<<con_no[i]<<endl;
				cout<< "\t\t\t\t\t Age :"<<age[i]<<endl;
				cout<< "\t\t\t\t\t Last date of donate :"<<donate[i]<<endl;
					cin>>temp2;
					cout<<"\t\t\t\t\t Name :"<<f_name[i]<<" "<<l_name[i]<<endl;
				cout<< "\t\t\t\t\t Email :"<<email[i]<<endl;
				cout<< "\t\t\t\t\t Address :"<<address[i]<<endl;
				cout<< "\t\t\t\t\t Blood group :"<<b_group[i]<<endl;
				cout<< "\t\t\t\t\t Phone Number :"<<con_no[i]<<endl;
				cout<< "\t\t\t\t\t Age :"<<age[i]<<endl;
				cout<< "\t\t\t\t\t Last date of donate :"<<donate[i]<<endl;
					cin>>temp3;
					f_name[i]=temp2;
					l_name[i]=temp2;
					email[i]=temp2;
					address[i]=temp2;
					b_group[i]=temp2;
					con_no[i]=temp3;
					age[i]=temp3;
					donate[i]=temp3;
					check2++;
					cout<<"\t\t\t\t\tUpdated Successfully ";
				}

			}
				if(check2==0)
			{
				cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
			}
		}
		// delete
		else if(check==6)
		{
				string temp;
			cout<<"\t\t\t\t\tFor Delete Enter Name : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==f_name[i])
				{
					cout<<"\t\t\t\t\tDeleted Successfully\n";
					cout<<"\t\t\t\t\t Name :"<<f_name[i]<<" "<<l_name[i]<<endl;
				cout<< "\t\t\t\t\t Email :"<<email[i]<<endl;
				cout<< "\t\t\t\t\t Address :"<<address[i]<<endl;
				cout<< "\t\t\t\t\t Blood group :"<<b_group[i]<<endl;
				cout<< "\t\t\t\t\t Phone Number :"<<con_no[i]<<endl;
				cout<< "\t\t\t\t\t Age :"<<age[i]<<endl;
				cout<< "\t\t\t\t\t Last date of donate :"<<donate[i]<<endl;
					f_name[i]="\0";
					l_name[i]="\0";
					email[i]="\0";
					address[i]="\0";
					b_group[i]="\0";
					con_no[i]="\0";
					age[i]="\0";
					donate[i]="\0";
					check2++;
					Total_contacts--;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
			}
		}
		// delete All
		else if(check==7)
		{

					cout<<"\t\t\t\t\t All Deleted Successfully\n";
					for(int i=0;i<k;i++)
					{
						f_name[i]="\0";
					l_name[i]="\0";
					email[i]="\0";
					address[i]="\0";
					b_group[i]="\0";
					con_no[i]="\0";
					age[i]="\0";
					donate[i]="\0";
					}
					k=0;
					Total_contacts=0;
		}
		// Diplay all Blood Banks
		else if(check==8)
		{
		    cout<<"\n"<<endl;
		    cout<<"\t\t\t  List of all Blood Banks in Dhaka.."<<endl;
		    cout<<"***************************************"<<endl;
			cout<<"1. Quantum Blood Bank Lab "<<endl;
			cout<<"2. Bangladesh Red Crescent Blood Bank "<<endl;
			cout<<"3. Alif Blood Bank & Transfusion Center "<<endl;
			cout<<"4. Badhan Blood Bank "<<endl;
			cout<<"5. Thalassemia Blood Bank "<<endl;
			cout<<"6. Sandhani (Central) "<<endl;
			cout<<"7. Police Blood Bank "<<endl;
			cout<<"8. Oriental Blood bank "<<endl;
			cout<<"9. Mukti Blood Bank & Pathology Lab "<<endl;
			cout<<"10. Islami Bank Hospital Blood Bank "<<endl;
			int x;
			cout<<"***************************************"<<endl;
			cout<<"View Hospital Details: ";
			cin>>x;
			cout<<"***************************************"<<endl;
			switch(x){
			    case 1:{
			        cout<<"Address: 31/V Shilpacharya Zainul Abedin Sarak, Shantinagar, Dhaka 1217 "<<endl;
			        cout<<"Contact No: 02-9351365, 8801714-010869  "<<endl;
			        cout<<"Website: http://quantummethod.org/blood-donation "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 2:{
			        cout<<"Address: 7/5, Aurangzeb Road, Mohammadpur, Dhaka. "<<endl;
			        cout<<"Contact No.: +880-02-9116563 "<<endl;
			        cout<<"Website: Bangladesh Red Crescent "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 3:{
			        cout<<"Address: 44/11, West Panthapath (2nd Floor), Opposite of Shamrita Hospital, Dhaka 1215 "<<endl;
			        cout<<"Contact No.: 01712392923, 01913059375 "<<endl;
			        cout<<" "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 4:{
			        cout<<"Address: Central Office, T.S.C(Ground Floor), University of Dhaka, Dhaka-1000"<<endl;
			        cout<<"Contact No: 01534982674 "<<endl;
			        cout<<"Website: www.badhan.org "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 5:{
			        cout<<"Address: 30 Chamelibag, 1st Lane, Dhaka 1217 "<<endl;
			        cout<<"Contact No: 02-8332481 "<<endl;
			        cout<<"Website: http://www.thals.org "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 6:{
			        cout<<"Address: Sandhani Central. Room 35, Tinshed Outdoor building BSMMU, Shahabag, Dhaka – 1000 "<<endl;
			        cout<<"Contact No. : 880-2-8621658, Fax: 880-2-8620378 "<<endl;
			        cout<<"Web: www.sandhani.org "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 7:{
			        cout<<"Address: [Central Police Hospital, Rajarbag, Dhaka. "<<endl;
			        cout<<"Contact No: 01713-398386 "<<endl;
			        cout<<"Website: www.policebloodbank.gov.bd "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 8:{
			        cout<<"Address: Green Center, 2B/30, Green Road, Dhanmondi, Dhaka "<<endl;
			        cout<<"Contact No: 01812700053 "<<endl;
			        cout<<" "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 9:{
			        cout<<"Address: 54 (1st Floor), Bir-Uttam A.M. Shafiullah Road, Free School Street, Dhaka-1207 "<<endl;
			        cout<<"Contact No: +880 2-8624249 "<<endl;
			        cout<<" "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    case 10:{
			        cout<<"Address: Dhaka, Bangladesh "<<endl;
			        cout<<"Contact No: 02-8317090, 8321495 "<<endl;
			        cout<<"Website: http://www.blooddonorsbd.com/ "<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			        break;
			    }
			    default:{
			        cout<<"you entered wrong number..."<<endl;
			        cout<<"*********************************************************\n\n\n"<<endl;
			    }

			}

		}

		check=manu();

	}while(check!=9);

}
int manu()
{
int n;
cout<<"\n\n\n\n\n\n\n\n\n"<<endl;
cout<<"\t\t\t\t  Enter 1 for Admin panel and 2 for User panel: ";
cin>>n;
switch(n){
    case 1:{
        	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t|     BLOOD DONATION DATABASE SYSTEM       |\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t************ Admin Panel *************     |\n";
	cout<<"\t\t\t\t\t|       [1]  Update                        |\n";
	cout<<"\t\t\t\t\t|       [2]  delete                        |\n";
	cout<<"\t\t\t\t\t|       [3]  Delete All                    |\n";
	cout<<"\t\t\t\t\t|       [4]  List of all Blood Banks       |\n";
	cout<<"\t\t\t\t\t|                                          |\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t|            [5]    Exit                   |\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	break;
    }
    case 2:{
        	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t|     BLOOD DONATION DATABASE SYSTEM       |\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t|*********** User Panel ***************    |\n";
	cout<<"\t\t\t\t\t|       [1]  Add Donor                     |\n";
	cout<<"\t\t\t\t\t|       [2]  Display All Donors            |\n";
	cout<<"\t\t\t\t\t|       [3]  Search by Blood Group         |\n";
	cout<<"\t\t\t\t\t|       [4]  Search by Name                |\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
	cout<<"\t\t\t\t\t|            [5]    Exit                   |\n";
	cout<<"\t\t\t\t\t--------------------------------------------\n";
    }
    break;
    default:{
        cout<<"you entered a wrong number...."<<endl;
    }
}

	int a;
	cin>>a;
	system("cls");
	return a;
}

void start()
{
	system("Color 0B");
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t-------------------------------\n";
	cout<<"\t\t\t\t\t\t-------------------------------\n";
	cout<<"\t\t\t\t\t\t BLOOD DONATION DATABASE SYSTEM\n";
	cout<<"\t\t\t\t\t\t-------------------------------\n\n";
	cout<<"\t\t\t\t\tLoading ";
	char x = 219;
	for(int i=0; i<35; i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(150);
		if(i>=10)
		Sleep(25);
	}
	system("cls");

}
