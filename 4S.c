#include <stdio.h>
#include<graphics.h

char name[1000];int age; int contact_num;int id_proof;
int no_of_guest;int no_of_nights;int Tour;float cost;float disc;

int pers_info(char name[100],int age, int contact_num,int id_proof);
int hotel(int no_of_guest,int no_of_nights,int Tour,float cost,float disc);
int restaurant(int rcost);

int hotel(int no_of_guest,int no_of_nights,int Tour,float cost,float disc)
{
 printf("Enter the number of guest who wants to stay:  ");
 scanf("%d",&no_of_guest);
 printf("\nEnter the number of days you want to stay:  ");
 scanf("%d",&no_of_nights);
 
if(no_of_guest<=2)
 {
  cost=2500*no_of_nights;
 }
else if(no_of_guest==3)
 {
  cost=3500*no_of_nights;
 }
else if(no_of_guest==4)
 {
  cost=4500*no_of_nights;
 }
else if(no_of_guest>=4)
 {
  cost=(4500+1000*no_of_guest-4000)*no_of_nights;
 }
 printf("\nTour type: Enter 1 for Business tour \n         : Enter 2 for Simple tour\n");
 printf("\nEnter the tour type:  ");
 scanf("%d",&Tour);
if(Tour==1)
 {
  cost=cost-0.2*cost;
  disc=0.2*cost;
  printf("\nDiscount is:Rs.%.2f",disc);
  printf("\nPrice to stay:Rs.%.2f\n",cost);
 }
else if(Tour==2)
{
printf("Price to stay:Rs.%.2f\n",cost);
}
 printf("               \n\n          *******Thank U******** \n  \n                     Visit Again.......");
return cost;	
}


int pers_info(char name[100],int age, int contact_num,int id_proof)
{
  puts("\n\nEnter Your Name ::");
  gets(name);
  printf("\nEnter Your Age ::");
  scanf("%d",&age);
  printf("\nEnter Your 10 Digit Contact Number ::");
  scanf("%d",&contact_num);
  printf("\nSelect the type of ID Proof ::\n");
  printf("1:For Aadhaar number\n2:For Passport number\n3:For Driving Licence Number");
  int choice;
  printf("\n\nEnter Your Choice For ID Proof ::");
  scanf("%d",&choice);
  switch(choice)
{
case 1: 
printf("\nEnter Your 12 Digit Aadhaar Number ::");  
scanf("%d",&id_proof);
break;
case 2: 
printf("\nEnter Your Passport Number ::");  
scanf("%d",&id_proof);
break;
case 3: 
printf("\nEnter Your Driving Licence Number ::"); 
scanf("%d",&id_proof);
break;
default:
printf("\nINVALID CHOICE !!!!\n");
}
return name[100];
}


int restaurant(int rcost)
{
	printf("\t\t\t\t\t******MENU CARD******");
	printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
 	int lunch,breakfast,dinner,n=1;
 	printf("\nFor Breakfast press ::1\nFor Lunch press ::2\nFor Dinner press ::3");
 	while (n=1)
	 {
	 printf("\n\nEnter Your Choice For ::");
     scanf("%d",&choice);
 	 if(choice==1)
	  {
	  	
	  	printf("\n\n::Garma Garam::");
	  	printf("\n::VEG CORNER::                     \t\t\t\t\t\t\t\t\t\t::NONVEG CORNER::");
	    printf("\n1)Aloo Paratha      ..........Rs.50\t\t\t\t\t\t\t\t\t\t1)Plain Omeltte    ...........Rs.55");	
		printf("\n2)Upama             ..........Rs.50\t\t\t\t\t\t\t\t\t\t2)Masala Omeltte   ...........Rs.70"); 
		printf("\n3)Idli Vada Sambar  ..........Rs.80\t\t\t\t\t\t\t\t\t\t3)Burji Paav       ...........Rs.80");
		printf("\n4)Pohe              ..........Rs.40\t\t\t\t\t\t\t\t\t\t4)Chicken Sandwich ...........Rs.80");
        printf("\n5)Misal Paav        ..........Rs.60\t\t\t\t\t\t\t\t\t\t5)Masala Egg toast...........Rs.65");
        printf("\n6)Masala Maggie     ..........Rs.55");
        printf("\n7)Saboodana Khichadi..........Rs.60");
        printf("\n8)Veg Sandwich      ..........Rs.40");
       
	    printf("\n\n::Beverages::");
        printf("\n1)Cutting Chai     ...........Rs.20");
        printf("\n2)Masala Chai      ...........Rs.30");
        printf("\n3)Nes Coffee       ...........Rs.40");
        printf("\n4)Cold Coffee      ...........Rs.60");
        printf("\n5)Soft Drink       ...........Rs.40");
 	  }	
 	  if(choice==2 || choice==3 )
 	  {
 	  	printf("\n\n::STARTERS::");
 	  	printf("\n1)Soyabean Chilli...............Rs.100");
 	  	printf("\n2)Masala Pappad  ...............Rs.50");
 	  	printf("\n3)Veg Pakoda     ...............Rs.100");
 	  	printf("\n4)Veg Kabab      ...............Rs.150");
 	  	printf("\n5)Hakka Noodles  ...............Rs.120");
 	  	printf("\n6)Paneer Roll    ...............Rs.80");
 	  	printf("\n7)Chinese Roll   ...............Rs.70");
 	  	
 	  	printf("\n\n::VEG BHAJI::");
 	  	printf("\n1)Daal Fry     ...............Rs.80");
 	  	printf("\n2)Daal Makhni  ...............Rs.110");
 	  	printf("\n3)Shahi Paneer ...............Rs.140");
 	  	printf("\n4)Kadhai Paneer...............Rs.160");
 	  	printf("\n5)Rajma Masala ...............Rs.110");
 	  	printf("\n6)Mix Veg      ...............Rs.140");
 	  	printf("\n7)Veg Kolhapuri...............Rs.130");
 	  	printf("\n8)Kaju Curry   ...............Rs.130");
 	  	printf("\n9)Aaloo Mutter ...............Rs.130");
 	  	printf("\n10)Chana Masala...............Rs.100");
 	  	
 	  	printf("\n\n::NONVEG BHAJI::");
 	  	printf("\n1)Chicken Tandoori............Rs.200");
 	  	printf("\n2)Butter Chicken  ............Rs.240");
 	  	printf("\n3)Chicken Punjabi ............Rs.240");
 	  	printf("\n4)Mutton Fry      ............Rs.140");
 	  	printf("\n5)Mutton Royal    ............Rs.150");
 	  	printf("\n6)Andda Curry     ............Rs.180");
 	  	printf("\n7)Chicken Biriyani............Rs.350");
 	  	
 	  	printf("\n\n::ROTI::");
 	  	printf("\n1)Tandoori Roti ............Rs.30");
 	  	printf("\n2)Butter Naan   ............Rs.20");
 	  	printf("\n3)Simple Roti   ............Rs.15");
 	  	printf("\n4)Paneer Paratha............Rs.40");
 	  	
 	  	printf("\n\n::RICE::");
 	  	printf("\n1)Fried Rice  ............Rs.80");
 	  	printf("\n2)Jeera Rice  ............Rs.90");
 	  	printf("\n3)Steam Rice  ............Rs.70");
 	  	printf("\n4)Lemon Rice  ............Rs.80");
 	    printf("\n5)Simple Rice ............Rs.70");
 	    printf("\n5)Pulaav      ............Rs.100");
 	    
 	  	printf("\n\n::DESSERTS::");
 	  	printf("\n1)Gulab Jaamun  ............Rs.80");
 	  	printf("\n2)Rass Gulla    ............Rs.100");
 	  	printf("\n3)Pastries      ............Rs.70");
 	  	printf("\n4)Ice Cream     ............Rs.70");
 	  	printf("\n5)Paneer Paratha............Rs.40");
 	  	printf("\n6)Rass Malai    ............Rs.100");
 	  	printf("\n6)Gajar Ka Halwa............Rs.100");
 	  	printf("\n7)Soft Drink    ............Rs.40");
	  }
	 }
}


int main() 
{
 printf("\t\t\t\t\t******RESORT 4ACE******");
 printf("\n\nWELCOME TO RESORT 4ACE.........");
 printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
 pers_info(name,age,contact_num,id_proof);
 
printf("\n\nHi ");
puts(name);
printf("Here are the Billing Details given as follows.......\n");

hotel( no_of_guest, no_of_nights, Tour, cost, disc);
}
