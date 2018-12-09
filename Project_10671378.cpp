#include<fstream>
#include <iostream>
#include<conio.h>
 #include<stdio.h>
using namespace std;
 

struct student
    {
       char name[50];
	   char lecturer[50]
       int id;
       char course[20];
       int lvl;
	   char contact[10];
	   int marks;
	   char grade[4];
    };
    
int main()
{
	fstream fin;
	fin.open("base.txt");
      
	char dow;
	int arr=0;
	do{

       student stud[10];


	   cout<<" 		Press 1 to Enter Record \n";
	   cout<<" 		Press 2 to Delete Record \n";
	   cout<<" 		Press 3 to Edit Record \n";
	   cout<<" 		Press 4 to Search Record \n";
	   cout<<" 		Press 5  to Display Record \n";
	   cout<<" 		Press 6 to Save \n";
	   cout<<"		Take NOTE: IF YOU WANT TO SAPACE OUT USE '_'";
	   cout<<"\n \t 		Select Option: ";

	   
		 int idnchek=0;

       int sw;
	   cin>>sw;
	   

	   switch (sw)
	   {

		   case 1:
			 
			   
           cout<<"\n Enter the Data of the student no "<<arr+1<<" is :\n";
         
		   cout<<"\t Enter the ID No = ";
		  int idn2;
		   int idn;
		   
		   
		   cin>>idn;
		   
		   
		   for(int j=0;j<=arr;j++)
		   {
			   
			  
			   idn2=idn;
		   if(rol2==stud[j].id)
		   {
			   idnchek=1;
			   }
		   }
		   if(rolchek!=1){
			   stud[arr].id=rol;
			   

		  cout<<"\t Enter your Name =  ";
		 cin>>stud[arr].name;

		 cout<<"\t Enter the Lecturer`s name =  ";
		 cin>>stud[arr].lecturer;

		 cout<<"\t Enter your contact  =  ";
		 cin>>stud[arr].contact;

         cout<<"\t Enter the Course Title = ";
		 cin>>stud[arr].course;

		 cout<<"\t Enter your Marks =  ";
		 cin>>stud[arr].marks;

         cout<<"\t Enter your Grade = ";
		 cin>>stud[arr].grade;

         cout<<"\t Enter your level = ";
         cin>>stud[arr].lvl;
		 arr=arr+1;
		   }
		   else
		   {
			   cout<<"This Record Already Enterd \n";
		   }
			   
			   
            break;

			case 2:
					   
           cout<<"\n Enter the ID no of the student To Delete ::\n";
         
		   
		
		   cin>>idn;
		   
		   
		   for(int j=0;j<=arr;j++)
		   {
			   
			  
			   idn2=idn;
		   if(rol2==stud[j].id)
		   {
			   		   
			   
			   stud[j].id='d';
		  cout<<"\t Record Deleted";
			   }
		   }
       
            break;

			case 3:
				 cout<<"\n Enter the ID no of the student To Update ::\n";
         
		   
		
		   cin>>idn;
		   
		   
		   for(int j=0;j<=arr;j++)
		   {
			   
			  
			   idn2=idn;
		   if(idn2==stud[j].id)
		   {
			   		cout<<"ID =  ";   
			   cout<<stud[j].id<<endl;
			   cout<<"Name =  ";
			   cout<<stud[j].name<<endl;
			  cout<<"Lecturer =  ";
			   cout<<stud[j].lecturer<<endl;
			    cout<<"Contact  =  ";
				cout<<stud[j].contact<<endl;
				 cout<<"Course_Title = ";
				 cout<<stud[j].course<<endl;
			    cout<<"Markes =  ";
			   cout<<stud[j].marks<<endl;
			      cout<<"Grade = ";
			   cout<<stud[j].grade<<endl;
			  

cout<<"\n\t ReEnter Data  ";

			    cout<<"\n\t Enter the Name =  ";
		 cin>>stud[j].name;

		 cout<<"\n\t Enter the lecturer =  ";
		 cin>>stud[j].lecturer;

		 cout<<"\n\t Enter the contact =  ";
		 cin>>stud[j].contact;

         cout<<"\n\t Enter the Course Title = ";
		 cin>>stud[j].course;

		 cout<<"\n\t Enter the Markes =  ";
		 cin>>stud[j].marks;

         cout<<"\n\t Enter the Grade = ";
		 cin>>stud[j].grade;

         cout<<"\n\t Enter the lvl = ";
         cin>>stud[j].lvl;
		  
			   }
		   }
       
            break;

			case 4:


				 cout<<"\n Enter the ID no of the student To Search ::";
         
		   
		
		   cin>>idn;
		   
		   
		   for(int j=0;j<=arr;j++)
		   {
			   
			  
			   idn2=idn;
		   if(rol2==stud[j].id)
		   {
			   		   
			   
			 	cout<<"\n \t ID =  ";   
			   cout<<stud[j].id;
			   cout<<"\n \t Name =  ";
			   cout<<stud[j].name;
			  cout<<"\n \t  lecturer =  ";
			   cout<<stud[j].lecturer;
			   cout<<"\n \t Level =";
			   cout<<stud[j].lvl;
			    cout<<"\n \t  contact =  ";
				cout<<stud[j].contact;
				 cout<<"\n \t Course Title = ";
				 cout<<stud[j].course;
			    cout<<"\n \t  Markes =  ";
			   cout<<stud[j].marks;
			      cout<<"\n \t Grade = ";
			   cout<<stud[j].grade;
		  
		   }}
       
            break;
            

			case 6:
				
				fin<<"\n*************************************************************************\n";	
        for(int i=0;i<1;i++)
		   {
		   	 for(int k=0;k<arr;k++)
		   {
			   if (stud[k].id!='d')
			   {
			   fin<<"Record of student "<<k+1<<endl;
			   fin<<"ID"<<" : "<<stud[k].id<<endl;
			   fin<<"Name"<<" : "<<stud[k].name<<endl;
			   fin<<"Lecturer"<<" : "<<stud[k].lecturer<<endl;
			   fin<<"Level"<<" : "<<stud[k].lvl<<endl;
			     fin<<"Contact"<<" : "<<stud[k].contact<<endl;
				 fin<<"Course_Title"<<" : "<<stud[k].course<<endl;
				 fin<<"Markes"<<" : "<<stud[k].marks<<endl;
				 fin<<"Grade"<<" : "<<stud[k].grade<<endl;
				 fin<<" "<<endl;
				 fin<<"\n";
			   
			   
			   
			   }
			  	
			  
			    
		  
			   }}
		 fin<<"\n*****************************************************************************";
		
            break;
            
            	case 5:
				
				cout<<"\n*************************************************************************\n";	
        for(int i=0;i<1;i++)
		   {
		   	 for(int k=0;k<arr;k++)
		   {
			   if (stud[k].id!='d')
			   {
			   cout<<"Record of student "<<k+1<<endl;
			   cout<<"ID"<<" : "<<stud[k].id<<endl;
			   cout<<"Name"<<" : "<<stud[k].name<<endl;
			   cout<<"Lecturer"<<" : "<<stud[k].lecturer<<endl;
			   cout<<"Level"<<" : "<<stud[k].lvl<<endl;
			     cout<<"Contact"<<" : "<<stud[k].contact<<endl;
				 cout<<"Course_Title"<<" : "<<stud[k].course<<endl;
				 cout<<"Markes"<<" : "<<stud[k].marks<<endl;
				 cout<<"Grade"<<" : "<<stud[k].grade<<endl;
				 cout<<" "<<endl;
				 cout<<"\n";
			   
			   
			   
			   }
			  	
			  
			    
		  
			   }}
		 cout<<"\n*****************************************************************************";
		 break;
		


	       default:
		    cout<<"\t Worng option Selected ";
		   break;
	   
	}

    

    
	   cout<<"\n \n \t Do You want to Continue Again [Y/N]";
	   cin>>dow;

	}
	while(dow=='y');
	

	
	 
       return 0;
       getch();

}

