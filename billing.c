#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct fabrics
{
char product_name[100];
int product_id;
int quantity;
int price;
}
struct billing
{
int pid;
int qty;
int pq;
}B[100];

admin()
{
int m,paswrd,value,count,disc;
printf("As your a admin you can make changes which are as follows:\n");
printf("The changes that can be made are:\n");
printf(" 1 : Update username and password\n");
printf(" 2: Update cost\n");
printf(" 3: Update stock\n");
printf(" 4: Update discount Percantage applicable \n");
printf(" 5: Display Product information per unit, Stock available as columns\n");
printf(" 6: Logout\n");
scanf("%d",&m);
clrscr();
switch(m)
{
case:"1"
printf("Updating password\n");
scanf("%d",&paswrd);
printf("Enter the old password\n");
scanf("%d",&pwd);
printf("Enter the new password\n");
scanf("%d",&paswrd);
if(pwd==paswrd)
{
printf("Done!!\n The new password matches with the old password\n");
pwd=paswrd;

}
else
{
printf("Re-enter your password);
}
break;
case:"2"
printf("Updating the cost\n");
printf("Type the product name and product id\n");
 scanf("%s\t%d",product_name,product_id);
printf("Enter the price to be updated\n");
scanf("%d",&value);
for(i=0;i<20;i++)
{
if(strcmp(p[i].product_name,"product_name")==0)
{
if(strcmp(p[i].product_id,"product_id")==0)
{
strcpy(p[i].price,"value");
}
}
}
break;
case:"3"
printf("Updating the stock\n");
scanf("%d",&count);
for(i=0;i<20;i++)
{
if(p[i].quantity<5)
{
p[i].quantity=20;
}
else
{
break;
}
}
break;
case:"4"
printf("Updating the discount\n");
printf("Enter the discount\n");
scanf("%d",&disc);
discount=disc;
break;
case:"5"
printf("Welcome to Boducom's\n");
for(i=0;i<20;i++)
{
printf("Description of fabrics\n");
printf("Fabric name:%s\n",p[i].product_name);
printf("Fabric id:%d\n", p[i].product_id);
printf("Quantity:%d\n",p[i].quantity);
printf("price:%d\n",p[i].price);
}
break;
case:"6"
printf("Logout\n");
exit(0);
}

billing()
{
int pc;
printf("_________/\_________Welcome...!_________/\_________");
printf("--------------------BODUCOM's  N  MARRI's--------------------");
printf("Enter the product count\n");
printf("%d",&pc);
printf("Enter the product ID followed by quantity purchased of products:\n");
for(i=1;i=pc;i++)
{
scanf("%d\n %d",B[i].pid,B[i].pq);
}
printf("----------------------**********THANK YOU FOR VISITING**********--------------------------");
clrscr();
printf("product ID\t Quantity\tPrice per Quantity\tPrice\n");
for(i=1;i=pc;i++)
{
printf("%d\t%d\t%d\t%d\t\n",B[i].pid,B[i].qty,P[i].price,B[i].qty*P[i].price\n");
}
for(i=1;i=pc;i++)
{
total=total+(B[i].qty*p[i].price);
}
printf("\t\t\t\t Subtotal:%d",total\n);
printf("\t\t\t\tDiscount\n");
if(total==3000)
{
discount=15;
printf("\t\t\t\t%d",discount);
}
else
{
printf("No discount\n");
}
printf("\t\t\t\tTotal:%d",(total-(total*discount/100)));
printf("_______________payment done.________________");
clrscr();
printf("Want to continue (Y/N)?\n");
scanf("%s",&w);
if(w==y)
{
billing();
}
else
{
printf("Exit from the application\n");
exit;
}

int main()
{
int ch,pwd,total=0,discount;
char user,w;
struct fabrics p[19];
strcpy(p[0].product_name,"Cotton");
p[0].product_id=368;
p[0].quantity=20;
p[0].price=80;

strcpy(p[1].product_name,"Wool");
p[1].product_id=369;
p[1].quantity=20;
p[1].price=100;

strcpy(p[2].product_name,"Jute");
p[2].product_id=371;
p[2].quantity=20;
p[2].price=110;

strcpy(p[3].product_name,"Polyester");
p[3].product_id=372;
p[3].quantity=20;
p[3].price=50;

strcpy(p[4].product_name,"Cyfon");
p[4].product_id=373;
p[4].quantity=20;
p[4].price=40;

strcpy(p[5].product_name,"Velvet");
p[5].product_id=374;
p[5].quantity=20;
p[5].price=110;

strcpy(p[6].product_name,"Sequence");
p[6].product_id=375;
p[6].quantity=20;
p[6].price=110;

strcpy(p[7].product_name,"Rawsilk");
p[7].product_id=376;
p[7].quantity=20;
p[7].price=60;

strcpy(p[8].product_name,"Silk");
p[8].product_id=377;
p[8].quantity=20;
p[8].price=175;

strcpy(p[9].product_name,"Pattu");
p[9].product_id=378;
p[9].quantity=20;
p[9].price=1000;

strcpy(p[10].product_name,"Kanchipattu");
p[10].product_id=379;
p[10].quantity=20;
p[10].price=2000;

strcpy(p[11].product_name,"Dharmavaram");
p[11].product_id=380;
p[11].quantity=20;
p[11].price=970;

strcpy(p[12].product_name,"Banaras");
p[12].product_id=381;
p[12].quantity=20;
p[12].price=850;

strcpy(p[13].product_name,"Lenin");
p[13].product_id=382;
p[13].quantity=20;
p[13].price=600;

strcpy(p[14].product_name,"Chicken curry");
p[14].product_id=383;
p[14].quantity=20;
p[14].price=800;

strcpy(p[15].product_name,"Leather");
p[15].product_id=384;
p[15].quantity=20;
p[15].price=500;

strcpy(p[16].product_name,"Needle");
p[16].product_id=385;
p[16].quantity=20;
p[16].price=70;

strcpy(p[17].product_name,"Threads");
p[17].product_id=386;
p[17].quantity=20;
p[17].price=200;


strcpy(p[18].product_name,"Sewing machine");
p[18].product_id=387;
p[18].quantity=20;
p[18].price=2000;

strcpy(p[19].product_name,"Natural colors");
p[19].product_id=388;
p[19].quantity=20;
p[19].price=300;

printf("_______/\_______WELCOME....!!_______/\_______);
printf("-------------------- BODUCOM's   N   MARRI's--------------------");
printf("You can login as:\n");
printf(" 1 . Admin\n");
printf(" 2 . Billing agent\n");
printf("Enter 1 for admin and 2 for billing agent\n");
scanf("%d",&ch);
clrscr();
switch(ch)
{
case:"1"
printf("Enter your username\n");
printf("Use only characters\n");
scanf("%d",&user);
printf("Enter your password\n");
printf("Use only intergers\n");
scanf("%d",&pwd);
if(user=="Ravali boducom" && p=="Boducom");
{
printf("Welcome to Ravali Boducom..!!\n");
admin();
clrscr();
}
else
{
printf(" please reenter\n");
}
break;
case:"2"
billing();
break;
}
return 0;
} 
