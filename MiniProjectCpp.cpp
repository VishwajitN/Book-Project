#include<stdio.h>
#include<iostream>
using namespace std;
#include<string.h>
class Book
{
	public:
	int id ;
	char bname[20];
	char author[20];
	double price;
	double rating;
	
	Book()//Defoult constructor.
	{
		this->id=0;
		strcpy(this->bname,"no given");
		strcpy(this->author,"non given");
		this->price=0;
		this->rating=0;
	}
	
	Book(int id,const char* bname,const char* author,double price,double rating)//Defoult constructor.
	{
		this->id=id;
		strcpy(this->bname,bname);
		strcpy(this->author,author);
		this->price=price;
		this->rating=rating;
	}
	
	//	//setter
	void setId(int id)
	{
		this->id=id;
	}
	void setBname(char* bname)
	{
		strcpy(this->bname,bname);
	}
	void setAuthor(char* author)
	{
		strcpy(this->author,author);
	}
	void setPrice(double price)
	{
		this->price=price;
	}
	void setRating(double rating)
	{
		this->rating=rating;
	}
	
	//Getter
	int getId()
	{
		return this->id;
	}
	char* getBname()
	{
		return this->bname;
	}
	char* getAuthor()
	{
		return this->author;
	}
	double getPrice()
	{
		return this->price;
	}
	double getRating()
	{
		return this->rating;
	}

};
void storevalue(Book*,int);//
void display(Book*,int);//
void search(Book*,int);//
void searchbyname(Book*,char*);//
void update(Book*,int);//
void update1(Book*,double);//
void delet(Book*,int);//
int maxprice(Book*);//
int  maxrating(Book*);//
void topthreeprice(Book*);//
void topthreerating(Book*);//

int n=6;
int main()
{
	int exit;
	
	Book arr[10]; 
	storevalue(arr,n);
   
	do // pahle execute hoga bad may condition check karega.
	{
		 cout<<"\n--------------------Diffrant Choice---------------------";
	     cout<<"\n 1:Display\n 2:Search\n 3:Update\n 4:Delete\n 5:Maximum\n 6:Top";
	     cout<<"\n----------------------#***#-----------------------------";
	
	     int ch;
	     cout<<"\n Enter your choice :-->";
	     cin>>ch;
	
	switch(ch)
	{
		case 1:
		//	display
			display(arr,n);
			break;
			
		case 2:
			//search
			cout<<"\n 1.Search Id\n2.Search Name ";
			int ch1;
		    cout<<"\n Enter the  Choice ::";
		    cin>>ch1;
		    if(ch1==1)
		    {
		    	cout<<"\n Search Book Id ";
		    	int bid;
				cin>>bid;
				search(arr,bid);
		    		
			}
			if(ch1==2)
			{
			     cout<<"\n Search Book Name ";
			     char bookname[20];
				 fflush(stdin);
				 gets(bookname);
				 fflush(stdin);
				 searchbyname(arr,bookname);   	
			}
			
			break;
			
		case 3:
			//update
		//	fflush(stdin);
			cout<<"\n 1.Price Update\n2.Rating Updaet ";
			int ch2;
			cout<<"\n Enter the choice :: ";
			cin>>ch2;
			if(ch2==1)
			{
			   cout<<"\n Enter The Book Price To Update ->";
			   double price;
			   cin>>price;
			   update(arr,price);
		    }
		    if(ch2==2)
			{
			   cout<<"\n Enter The Book Rating To Update ->";
			   double rating;
			   cin>>rating;
			   update1(arr,rating);
		    }
			
			break;
		case 4:
			//delete
			cout<<"\n Enter The Book id  To Delet :: ";
			int bid;
			cin>>bid;
			delet(arr,bid);
			
			break;
		case 5:
			//maximum 
			cout<<"\n 1.Maximum Price\n2.Maximum Rating ";
			int ch;
		    cout<<"\n Enter the  Choice ::";
		    cin>>ch;
		    if(ch==1)
		    {
		    //	printf("Find maximum Price\n");
		    		maxprice(arr);
			}
			if(ch==2)
			{
			     //printf("Enter Maximum Rating\n");
			      maxrating(arr);	
			}
			
			break;
		case 6:
			//top 3
		    cout<<"\n------------------------top three price are :: -> ----------------------------------";
			topthreeprice(arr);
			cout<<"\n------------------------top three ratings are :: -> ----------------------------------\n";
			topthreerating(arr);
			break;
     }
			
			cout<<"\n Do You Want To Continue (0/1)-->";
			cin>>exit;
			
	}while(exit); // jab tak while ki value zero nahi hoti tab tak

}

void storevalue(Book* arr,int n)
    {
	int i;
	cout<<"\n----------------------Book Stucture--------------------";


	    arr[0].setId(10);
	    arr[0].setBname("shamchiaai");
	    arr[0].setAuthor("saneguruji");
	    arr[0].setPrice(400);
	    arr[0].setRating(10);
	    
	    arr[1].setId(20);
	    arr[1].setBname("chava");
	    arr[1].setAuthor("shivajisaWant");
	    arr[1].setPrice(550);
	    arr[1].setRating(9.5);
	    
	    arr[2].setId(30);
	    arr[2].setBname("panipath");
	    arr[2].setAuthor("vishwaspatil");
	    arr[2].setPrice(600);
	    arr[2].setRating(9);
	    
	    arr[3].setId(40);
	    arr[3].setBname("valiv");
	    arr[3].setAuthor("shankarpatil");
	    arr[3].setPrice(650);
	    arr[3].setRating(8.5);
	    
	    arr[4].setId(50);
	    arr[4].setBname("amrutevel");
	    arr[4].setAuthor("vi.s.vhandekar");
	    arr[4].setPrice(700);
	    arr[4].setRating(8);
	    
	    arr[5].setId(60);
	    arr[5].setBname("zombi");
	    arr[5].setAuthor("anantyadav");
	    arr[5].setPrice(750);
	    arr[5].setRating(7.5);
	    		
}
  
 void display(Book* arr,int n)
  {
	int i;
	for(i=0;i<n;i++)
	{
	  cout<<"\n Enter the Book Id :: "<<arr[i].getId();
      cout<<"\n Enter the Book Name ::"<<arr[i].getBname();
      cout<<"\n Enter the Book Author ::"<<arr[i].getAuthor();
      cout<<"\n Enter the Book Price ::"<<arr[i].getPrice();
      cout<<"\n Enter the Book Rating ::"<<arr[i].getRating();
      cout<<"\n----------------------------------------------------------";
         }
  }
  
void search( Book* arr,int n)
 {
  int i,flag=0;

	for(i=0;i<6;i++)
	{
		if(arr[i].id==n)
		{
			flag=1;
	      cout<<"\n Enter the Book Id :: "<<arr[i].getId();
          cout<<"\n Enter the Book Name ::"<<arr[i].getBname();
          cout<<"\n Enter the Book Author ::"<<arr[i].getAuthor();
          cout<<"\n Enter the Book Price ::"<<arr[i].getPrice();
          cout<<"\nEnter the Book Rating ::"<<arr[i].getRating();
		}
	}
	if(flag==0)
	{
	
		printf("No Book found with Book id %d",n);
	}
	
}
void searchbyname(Book* arr,char* n)
{
	int i,flag=0;
	for(i=0;i<6;i++)
	{
		if(strcmp(arr[i].bname,n)==0)
		{
			flag=1;
		  cout<<"\n Enter the Book Id ::"<<arr[i].getId();
          cout<<"\n Enter the Book Name ::"<<arr[i].getBname();
          cout<<"\n Enter the Book Author ::"<<arr[i].getAuthor();
          cout<<"\n Enter the Book Price ::"<<arr[i].getPrice();
          cout<<"\nEnter the Book Rating ::"<<arr[i].getRating();
		}
	}
	if(flag==0)
	{
		printf("No book found with this name\n");
	}
}

void update(Book* arr,int n)
{
	int i;
	int flag=0;
	for(i=0;i<6;i++)
	{
		if(arr[i].price==n)
		{
			flag=1;
	      cout<<"\n Enter the Book Price ::";
	      cin>>arr[i].price;
	      fflush(stdin);
      
		 cout<<"\n Update Successfuly ";	
         cout<<"\n Enter the Book Id :: "<<arr[i].getId();
         cout<<"\n Enter the Book Name :: "<<arr[i].getBname();
         cout<<"\n Enter the Book Author :: "<<arr[i].getAuthor();
         cout<<"\n Enter the Book Price :: "<<arr[i].getPrice();
         cout<<"\n Enter the Book Rating :: "<<arr[i].getRating();
         cout<<"\n----------------------------------------------------";
	    	break;
		}		
	}
	   if(flag==0)
	   	 cout<<"\n No Book Found in This Id "<<n;	
}
void update1(Book* arr,double n)
{
	int i;
	int flag=0;
	for(i=0;i<6;i++)
	{
		if(arr[i].rating==n)
		{
			flag=1;
		
	      fflush(stdin);
	      cout<<"\n Enter the Book rating ::";
	      cin>>arr[i].rating;
	      fflush(stdin);
	      
		  cout<<"\n Update Successfuly ";	
         cout<<"\n Enter the Book Id :: "<<arr[i].getId();
         cout<<"\n Enter the Book Name :: "<<arr[i].getBname();
         cout<<"\n Enter the Book Author :: "<<arr[i].getAuthor();
         cout<<"\n Enter the Book Price :: "<<arr[i].getPrice();
         cout<<"\n Enter the Book Rating :: "<<arr[i].getRating();
	    	break;
		}		
	}
	   if(flag==0)
	   	 cout<<"No Book Found in This Id %d"<<n;	
}
void delet(Book* arr,int bid)
{
   int i;
   int flag=0;
   for(i=0;i<6;i++)
   {                                  
   	 
   	  if(arr[i].id==bid)
   	    {
   	    	flag=1;
			arr[i]=arr[i+1];
   	  	    n--;
		}
		if(flag==1)
		{
		  	arr[i+1]=arr[i+2];      
        }
   }
   display(arr,n);
   
}

int maxprice(Book* arr)
{
	
	int i;
	int temp;
	double max=0;
	for(i=0;i<6;i++)
	{	
		if(max<arr[i].price)
		{
			
		  max=arr[i].price;
		  temp=i;
	    }
	}
      cout<<"\n Enter Book Id :: "<<arr[temp].getId();
      cout<<"\n Enter the Book Name :: "<<arr[temp].getBname();
      cout<<"\n Enter the Book Author :: "<<arr[temp].getAuthor();
      cout<<"\n Enter the Book Price :: "<<arr[temp].getPrice();
      cout<<"\n Enter the Book Rating :: "<<arr[temp].getRating();
     
      return arr[temp].id;
}
int maxrating(Book* arr)
{
	int i,temp;
	double max=0;
	for(i=0;i<6;i++)
	{
		if(max<arr[i].rating)
		{
		
		 max=arr[i].rating;
		 temp=i;
	    }
	}
      cout<<"\n Enter the Book Id :: "<<arr[temp].getId();
      cout<<"\n Enter the Book Name ::"<<arr[temp].getBname();
      cout<<"\n Enter the Book Author ::"<<arr[temp].getAuthor();
      cout<<"\n Enter the Book Price ::"<<arr[temp].getPrice();
      cout<<"\n Enter the Book Rating ::"<<arr[temp].getRating();
      return arr[temp].id;
}

void topthreeprice(Book* arr)
{
//	printf("Count in TopThree Book Price :: %d\n",count);
	cout<<"\n-------------------------------------";
	int i,temp,temp2; 
	int max=arr[0].price;
	for(i=0;i<6;i++)
	{
		if(max<arr[i].price)
		{
		  max=arr[i].price;
		  temp=i;	
		}	
	}
	   cout<<"\n Enter the Book Id :: "<<arr[temp].getId();
      cout<<"\n Enter the Book Name :: "<<arr[temp].getBname();
      cout<<"\n Enter the Book Author :: "<<arr[temp].getAuthor();
      cout<<"\n Enter the Book Price :: "<<arr[temp].getPrice();
      cout<<"\n Enter the Book Rating :: "<<arr[temp].getRating();
      cout<<"\n------------------------------------------------------";
     int max2=0;
     for(i=0;i<6;i++)
     {
     	if(max2<arr[i].price&&arr[i].price!=max)
     	{
     		max2=arr[i].price;
     		temp=i;
		 }
	 }
	   cout<<"\n Enter the Book Id :: "<<arr[temp].getId();
      cout<<"\n Enter the Book Name :: "<<arr[temp].getBname();
      cout<<"\n Enter the Book Author :: "<<arr[temp].getAuthor();
      cout<<"\n Enter the Book Price :: "<<arr[temp].getPrice();
      cout<<"\n Enter the Book Rating :: "<<arr[temp].getRating();
      cout<<"\n------------------------------------------------------";

    int max3=0;
     for(i=0;i<6;i++)
     {
     	if(max3<arr[i].price&&arr[i].price!=max&&arr[i].price!=max2)
     	{
     		max3=arr[i].price;
     		temp=i;
		 }
	 }
	   cout<<"\n Enter the Book Id :: "<<arr[temp].getId();
      cout<<"\n Enter the Book Name :: "<<arr[temp].getBname();
      cout<<"\n Enter the Book Author :: "<<arr[temp].getAuthor();
      cout<<"\n Enter the Book Price :: "<<arr[temp].getPrice();
      cout<<"\n Enter the Book Rating :: "<<arr[temp].getRating();
      cout<<"\n------------------------------------------------------";

}

void topthreerating(Book* arr)
{
//	printf("Count in TopThree Book Rating :: %d\n",count);
	cout<<"\n----------------------------------------------------------";
	int i,temp2; //temp
	double max=0;
	for(i=0;i<6;i++)
	{
		if(max<arr[i].rating)
		{
		  max=arr[i].rating;
		  temp2=i;	
		}	
	}
	  cout<<"\n Enter the Book Id :: "<<arr[temp2].getId();
      cout<<"\n Enter the Book Name :: "<<arr[temp2].getBname();
      cout<<"\n Enter the Book Author :: "<<arr[temp2].getAuthor();
      cout<<"\n Enter the Book Price :: "<<arr[temp2].getPrice();
      cout<<"\n Enter the Book Rating :: "<<arr[temp2].getRating();
      cout<<"\n------------------------------------------------------";

     double max2=0;
     for(i=0;i<6;i++)
     {
     	if(arr[i].rating>max2&&arr[i].rating!=max)
     	{
     		max2=arr[i].rating;
     		temp2=i;
		 }
	 }
	  cout<<"\n Enter the Book Id :: "<<arr[temp2].getId();
      cout<<"\n Enter the Book Name :: "<<arr[temp2].getBname();
      cout<<"\n Enter the Book Author :: "<<arr[temp2].getAuthor();
      cout<<"\n Enter the Book Price :: "<<arr[temp2].getPrice();
      cout<<"\n Enter the Book Rating :: "<<arr[temp2].getRating();
      cout<<"\n------------------------------------------------------";

    double max3=0;
     for(i=0;i<6;i++)
     {
     	if(max3<arr[i].rating&&arr[i].rating!=max&&arr[i].rating!=max2)
     	{
     		max3=arr[i].rating;
     		temp2=i;
		 }
	 }
	  cout<<"\n Enter the Book Id :: "<<arr[temp2].getId();
      cout<<"\n Enter the Book Name :: "<<arr[temp2].getBname();
      cout<<"\n Enter the Book Author :: "<<arr[temp2].getAuthor();
      cout<<"\n Enter the Book Price :: "<<arr[temp2].getPrice();
      cout<<"\n Enter the Book Rating :: "<<arr[temp2].getRating();
      cout<<"\n------------------------------------------------------";

}






