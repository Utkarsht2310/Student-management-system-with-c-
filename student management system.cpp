#include <iostream>
using namespace std;
string a1[20], a2[20], a3[20], a4[20], a5[20],a6[20];
int total = 0;
void enter ()
{
    int choice;
  cout << "How many students do you want to enter : " << endl;
  cin >> choice;
  //for first entry
  if(total==0){
  
  total= total+choice;
  for (int i = 0; i < choice; i++)
    {
      cout << "\nEnter the data of student :" << i + 1 << endl << endl;
      cout<<"\n Enter name : ";
      cin>>a1[i];
      cout<<"Enter Phone  NO : "<<endl;
            
      cin>>a2[i];
      cout<<"Enter course : "<<endl;
          
      cin>>a3[i];
      cout<<"Enter year : "<<endl;
          
      cin>>a4[i];
      cout<<"Enter college roll no : "<<endl;
          
      cin>>a5[i];
      cout<<"Enter fee status  : "<<endl;
          
      cin>>a6[i];
      
    
    }
}
else{
	for (int i =total; i <total+choice; i++) //after one entry the code will the run from total to tota +choice
    {
      cout << "\nEnter the data of student :" << i + 1 << endl << endl;
      cout<<"\n Enter name : ";
      cin>>a1[i];
      cout<<"Enter Phone  NO : "<<endl;
            
      cin>>a2[i];
      cout<<"Enter course : "<<endl;
          
      cin>>a3[i];
      cout<<"Enter year : "<<endl;
          
      cin>>a4[i];
      cout<<"Enter college roll no : "<<endl;
          
      cin>>a5[i];
      cout<<"Enter fee status  : "<<endl;
          
      cin>>a6[i];
      
    
    }
	
} 
}
void show ()
{
    for(int i=0;i<total;i++){
        cout<<"DATA OF  STUDENT\n"<<endl;
        cout<<"Name\n"<<a1[i]<<endl;
        cout<<"PHONE NO.\n"<<a2[i]<<endl;
        cout<<"COURSE:\n"<<a3[i]<<endl;
        cout<<"YEAR:\n"<<a4[i]<<endl;
        cout<<"COLLEGE ROLL NO:\n"<<a5[i]<<endl;
        cout<<"FEE STATUS:\n"<<a6[i]<<endl;
        
    }
}

void
search ()
{
	string rollno;
	cout<<"enter the roll no. of student you want to see details"<<endl;
	cin>>rollno;
	for(int i =0;i<total;i++)
	{
		if (rollno==a2[i]){ // when thee given roll no match with roll no store in array 2 then it will show the details
			cout<<"DATA OF  STUDENT\n"<<endl;
        cout<<"Name"<<a1[i]<<endl;
        cout<<"PHONE NO.\n"<<a2[i]<<endl;
        cout<<"COURSE:\n"<<a3[i]<<endl;
        cout<<"YEAR:\n"<<a4[i]<<endl;
        cout<<"COLLEGE ROLL NO:\n"<<a5[i]<<endl;
        cout<<"FEE STATUS:\n"<<a6[i]<<endl;
			
		}
	}

}

void
update ()
{
 string rollno;
	cout<<"enter the roll no. of student you want to change the details"<<endl;
	cin>>rollno;
	for(int i =0;i<total;i++)
	{
		if (rollno==a2[i]){ // when thee given roll no match with roll no store in array 2 then it will show the details
			cout<<"PREVIOUS DATA\n"<<endl;
        cout<<"Name"<<a1[i]<<endl;
        cout<<"PHONE NO.\n"<<a2[i]<<endl;
        cout<<"COURSE:\n"<<a3[i]<<endl;
        cout<<"YEAR:\n"<<a4[i]<<endl;
        cout<<"COLLEGE ROLL NO:\n"<<a5[i]<<endl;
        cout<<"FEE STATUS:\n"<<a6[i]<<endl;
        cout<<"ENTER NEW DATA"<<endl;
        
        cout << "\nEnter the data of student :" << i + 1 << endl << endl;
      cout<<"\n Enter name : ";
      cin>>a1[i];
      cout<<"Enter Phone  NO : "<<endl;
            
      cin>>a2[i];
      cout<<"Enter course : "<<endl;
          
      cin>>a3[i];
      cout<<"Enter year : "<<endl;
          
      cin>>a4[i];
      cout<<"Enter college roll no : "<<endl;
          
      cin>>a5[i];
      cout<<"Enter fee status  : "<<endl;
          
      cin>>a6[i];
      
        
			
		}
	}
}

void
deleterecord ()
{
	int a;
	cout<<"Press 1 to delete full record"<<endl;
	cout<<"Press 2 to delete specific record"<<endl;
	cin>>a;
	if(a==1){
		total=0;
		cout<<"All Record Is Deleted!"<<endl;
	}
	
	else(a==2);
	{
		string rollno;
		cout<<"Enter the roll no. whose details you want to delete"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==a2[i]){
				for(int j=i;j<total;j++) //here j is start from the value at i is 
				{
					a1[j]=a1[j+1];
					a2[j]=a2[j+1];
					a3[j]=a3[j+1];
					a4[j]=a4[j+1];
					a5[j]=a5[j+1];
					a6[j]=a6[j+1];
				}
				
				total--;
				cout<<"Your Required Record Is Deleted!!"<<endl;
			}
		}
	}

}


int main ()
{
  int value;
  while (true)
    {
      cout << "\n\n\nPress 1 to enter data " << endl;
      cout << "Press 2 to show data " << endl;
      cout << "Press 3 to search data " << endl;
      cout << "Press 4 to update data " << endl;
      cout << "Press 5 to delete data " << endl;
      cout << "Press 6 to exit " << endl;
      cin >> value;
      switch (value)
	{


	case 1:
	  enter ();
	  break;
	case 2:
	  show ();
	  break;
	case 3:
	  search ();
	  break;
	case 4:
	  update ();
	  break;
	case 5:
	  deleterecord ();
	  break;
	case 6:
	  exit (0);
	  break;
	default:
	  cout << "Invalid input" << endl;
	  break;
	}
    }
}
