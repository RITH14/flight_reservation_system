#include <stdio.h>
#include<string.h>
#include<time.h>
//#include<conio.h>

int loginres=0;
char from[20],to[20];
int d,m,y;
int sl;
int d1,m1,y1;
int p;
int days,days1,nd;
int cls;
int m,l,b;
int n;
int num;



void login()
{
    char name[10]="abc";
    int pass=123;
    char usn[10];
    int pwd;
    printf("\n");
   
    printf("enter username \n");
    scanf("%s",&usn);
    printf(" enter password \n");
    scanf("%d",&pwd);
    if((strcmp(usn,name)==0) && pwd==pass)
    {
        printf("logged in sucessfully \n \n");
        loginres=1;
    }
    else
    {
        printf("incorrect username or password \n");
    }
}

void fromto()
{
    printf("enter flight origin \n");
    scanf("%s",&from);
    printf("\n enter destination \n");
    scanf("%s",&to);
}

void date()
{
    printf("enter date of departure (dd mm yyyy)   ");
    scanf("%d %d %d",&d,&m,&y);
}

struct flights
{
    int sl_no;
    char flt_no[10];
    char airline[10];
    char origin[20];
    char destn[20];
    char tdep[10];
    char tlan[10];
   
};

void flt_list()
{
    struct flights f1={1,"IN100","indigo","bangalore","mumbai","09:00","11:00"};
    struct flights f2={2,"IN101","indigo","bangalore","mumbai","14:00","16:00"};
    struct flights f3={3,"IN102","indigo","bangalore","mumbai","20:00","22:00"};
    struct flights f4={4,"AI200","air india","bangalore","mumbai","12:00","14:00"};
    struct flights f5={5,"AI201","air india","bangalore","mumbai","09:00","11:00"};
    struct flights f6={6,"AI202","air india","bangalore","mumbai","06:00","08:00"};
    struct flights f7={7,"GF300","go first","bangalore","mumbai","18:00","20:00"};
    struct flights f8={8,"GF301","go first","bangalore","mumbai","10:00","12:00"};
    struct flights f9={9,"GF302","go first","bangalore","mumbai","11:00","13:00"};
    struct flights f10={10,"VS400","vistara","bangalore","mumbai","19:00","21:00"};
    struct flights f11={11,"VS401","vistara","bangalore","mumbai","21:00","23:00"};
    struct flights f12={12,"VS402","vistara","bangalore","mumbai","15:00","17:00"};
    struct flights f13={13,"IN103","indigo","bangalore","delhi","06:30","09:30"};
    struct flights f14={14,"IN104","indigo","bangalore","delhi","16:30","19:30"};
    struct flights f15={15,"IN105","indigo","bangalore","delhi","17:00","20:00"};
    struct flights f16={16,"AI203","air india","bangalore","delhi","06:00","09:00"};
    struct flights f17={17,"AI204","air india","bangalore","delhi","09:30","12:30"};
    struct flights f18={18,"AI205","air india","bangalore","delhi","16:00","19:00"};
    struct flights f19={19,"GF303","go first","bangalore","delhi","13:00","16:00"};
    struct flights f20={20,"GF304","go first","bangalore","delhi","10:30","13:30"};
    struct flights f21={21,"GF305","go first","bangalore","delhi","05:00","08:00"};
    struct flights f22={22,"VS403","vistara","bangalore","delhi","07:00","10:00"};
    struct flights f23={23,"VS404","vistara","bangalore","delhi","20:30","23:30"};
    struct flights f24={24,"VS405","vistara","bangalore","delhi","14:00","17:00"};
   

    struct flights f25={25,"IN106","indigo","mumbai","bangalore","09:00","13:00"};
    struct flights f26={26,"IN107","indigo","mumbai","bangalore","14:00","16:00"};
    struct flights f27={27,"IN108","indigo","mumbai","bangalore","20:00","22:00"};
    struct flights f28={28,"AI206","air india","mumbai","bangalore","12:00","14:00"};
    struct flights f29={29,"AI207","air india","mumbai","bangalore","09:00","11:00"};
    struct flights f30={30,"AI208","air india","mumbai","bangalore","06:00","08:00"};
    struct flights f31={31,"GF306","go first","mumbai","bangalore","18:00","20:00"};
    struct flights f32={32,"GF307","go first","mumbai","bangalore","10:00","12:00"};
    struct flights f33={33,"GF308","go first","mumbai","bangalore","11:00","13:00"};
    struct flights f34={34,"VS406","vistara","mumbai","bangalore","19:00","21:00"};
    struct flights f35={35,"VS407","vistara","mumbai","bangalore","21:00","23:00"};
    struct flights f36={36,"VS408","vistara","mumbai","bangalore","15:00","17:00"};
    struct flights f37={37,"IN109","indigo","mumbai","delhi","06:30","09:30"};
    struct flights f38={38,"IN110","indigo","mumbai","delhi","16:30","19:30"};
    struct flights f39={39,"IN111","indigo","mumbai","delhi","17:00","20:00"};
    struct flights f40={40,"AI209","air india","mumbai","delhi","06:00","09:00"};
    struct flights f41={41,"AI210","air india","mumbai","delhi","09:30","12:30"};
    struct flights f42={42,"AI211","air india","mumbai","delhi","16:00","19:00"};
    struct flights f43={43,"GF309","go first","mumbai","delhi","13:00","16:00"};
    struct flights f44={44,"GF310","go first","mumbai","delhi","10:30","13:30"};
    struct flights f45={45,"GF311","go first","mumbai","delhi","05:00","08:00"};
    struct flights f46={46,"VS409","vistara","mumbai","delhi","07:00","10:00"};
    struct flights f47={47,"VS410","vistara","mumbai","delhi","20:30","23:30"};
    struct flights f48={48,"VS411","vistara","mumbai","delhi","14:00","17:00"};

    struct flights f49={49,"IN112","indigo","delhi","mumbai","09:00","11:00"};
    struct flights f50={50,"IN113","indigo","delhi","mumbai","14:00","16:00"};
    struct flights f51={51,"IN114","indigo","delhi","mumbai","20:00","22:00"};
    struct flights f52={52,"AI212","air india","delhi","mumbai","12:00","14:00"};
    struct flights f53={53,"AI213","air india","delhi","mumbai","09:00","11:00"};
    struct flights f54={54,"AI214","air india","delhi","mumbai","06:00","08:00"};
    struct flights f55={55,"GF312","go first","delhi","mumbai","18:00","20:00"};
    struct flights f56={56,"GF313","go first","delhi","mumbai","10:00","12:00"};
    struct flights f57={57,"GF314","go first","delhi","mumbai","11:00","13:00"};
    struct flights f58={58,"VS412","vistara","delhi","mumbai","19:00","21:00"};
    struct flights f59={59,"VS413","vistara","delhi","mumbai","21:00","23:00"};
    struct flights f60={60,"VS414","vistara","delhi","mumbai","15:00","17:00"};
    struct flights f61={61,"IN115","indigo","delhi","bangalore","06:30","09:30"};
    struct flights f62={62,"IN116","indigo","delhi","bangalore","16:30","19:30"};
    struct flights f63={63,"IN117","indigo","delhi","bangalore","17:00","20:00"};
    struct flights f64={64,"AI215","air india","delhi","bangalore","06:00","09:00"};
    struct flights f65={65,"AI216","air india","delhi","bangalore","09:30","12:30"};
    struct flights f66={66,"AI217","air india","delhi","bangalore","16:00","19:00"};
    struct flights f67={67,"GF315","go first","delhi","bangalore","13:00","16:00"};
    struct flights f68={68,"GF316","go first","delhi","bangalore","10:30","13:30"};
    struct flights f69={69,"GF317","go first","delhi","bangalore","05:00","08:00"};
    struct flights f70={70,"VS415","vistara","delhi","bangalore","07:00","10:00"};
    struct flights f71={71,"VS416","vistara","delhi","bangalore","20:30","23:30"};
    struct flights f72={72,"VS417","vistara","delhi","bangalore","14:00","17:00"};
   


   
    struct flights f[]={f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17,f18,f19,f20,f21,f22,f23,f24,
                        f25,f26,f27,f28,f29,f30,f31,f32,f33,f34,f35,f36,f37,f38,f39,f40,f41,f42,f43,f44,f45,f46,f47,f48,
                        f49,f50,f51,f52,f53,f54,f55,f56,f57,f58,f59,f60,f61,f62,f63,f64,f65,f66,f67,f68,f69,f70,f71,f72};


    for(int i = 0; i < (sizeof(f)/sizeof(f[0])); i++)
    {
        if(strcmp(from, f[i].origin)==0)

        {
        if(strcmp(to, f[i].destn)==0)
       
       
        {

        //printf("test");
         printf("%-10d\t",f[i].sl_no);
         printf("%-10s\t",f[i].flt_no);
         printf("%-10s\t",f[i].airline);
         printf("%-10s\t",f[i].origin);
         printf("%-10s\t",f[i].destn);
         printf("%-10s\t",f[i].tdep);
         printf("%-10s\n",f[i].tlan);
        }
        }
    }
    printf("\n");
   
   
   
    void book()
    {
        printf("enter sl_no of flight to book   \n");
        scanf("%d",&sl);
        //printf("%d",f[sl-1].sl_no);
        printf("\n");
       
       
        time_t t;
        t = time(NULL);
        struct tm tm = *localtime(&t);
        d1=tm.tm_mday;
        m1=tm.tm_mon+1;
        y1=tm.tm_year+1900;
        //printf("%d %d %d\n", d1,m1,y1);
        days=(y*365)+(m*30)+d;
        days1=(y1*365)+(m1*30)+d1;
        nd=days-days1;
        //printf("%d %d %d\n",days,days1,nd);
       
         
       
        void price()
        {
       
           
           
           
            if(((f[sl-1].sl_no)>=1 && (f[sl-1].sl_no)<=12) || ((f[sl-1].sl_no)>=25 && (f[sl-1].sl_no)<=36))
            {
                p=2000;
            }
            else if(((f[sl-1].sl_no)>=37 && (f[sl-1].sl_no)<=60))
            {
                p=2250;
            }
            else if(((f[sl-1].sl_no)>=13 && (f[sl-1].sl_no)<=24) || ((f[sl-1].sl_no)>=61 && (f[sl-1].sl_no)<=72))
            {
                p=2500;
            }
           
            if(nd>45 && nd<60)
            {
                p=p + (30*(nd-45));
            }
            else if(nd>30 && nd<=45)
            {
                p= p + (15*30) + (60*(nd-30));
            }
            else if(nd>15 && nd<=30)
            {
                p= p + (30*15)+(60*15)+(100*(nd-15));

            }
            else if(nd>5 && nd<=15)
            {
                p= p +(30*15) + (60*15)+(100*15)+(140*(nd-5));
            }
            else if(nd>=2 && nd<=5)
            {
                p= p +(30*15)+(60*15)+(100*15)+(140*10)+((nd-2)*180);
            }
            else if(nd==1)
            {
                p=p + 6000;
            }
           
            printf("cost per ticket is %d INR\n",p);
           
           
           
            void pref()
            {
                printf("select class: enter 1 for economy (+0 INR) ,"
                "enter 2 for premium (+2000 INR , meal included) ,"
                "enter 3 for business (+5000 INR , meal and lounge included)\n");
                //printf("test");
                scanf("%d",&cls);

                if(cls==2)
                {
                    p=p + 2000;
                    printf("cost is %d INR\n",p);
                    printf("enter 1 for lounge access(+500 INR) , else enter 2\n");
                    scanf("%d",&l);
                    if(l==1)
                    {
                        p=p + 500;
                        printf("new amt per ticket is %d INR\n",p);
                    }
                    printf("enter 1 for baggage insurance(+150 INR) , else enter 2\n");
                    scanf("%d",&b);
                    if(b==1)
                    {
                        p=p + 150;
                        printf("new amt per ticket is %d INR\n",p);
                    }
                }
                else if(cls==3)
                {
                    p=p + 5000;
                    printf("new amt per ticket is %d INR\n",p);
                    printf("enter 1 for baggage insurance(+150 INR) , else enter 2\n");
                    scanf("%d",&b);
                    if(b==1)
                    {
                        p=p + 150;
                        printf("new amt per ticket is %d INR\n",p);
                    }
                }
                else if(cls==1)
                {
                    printf("enter 1 for meal(+200 INR) , else enter 2\n");
                    scanf("%d",&m);
                    if(m==1)
                    {
                        p=p + 200;
                        printf("new amt per ticket is %d INR\n",p);
                    }
                    printf("enter 1 for lounge access(+500 INR) , else enter 2\n");
                    scanf("%d",&l);
                    if(l==1)
                    {
                        p=p + 500;
                        printf("new amt per ticket is %d INR\n",p);
                    }
                    printf("enter 1 for baggage insurance(+150 INR) , else enter 2\n");
                    scanf("%d",&b);
                    if(b==1)
                    {
                        p=p + 150;
                        printf("new amt per ticket is %d INR\n",p);
                    }
                }
               
               
                void amt()
                {
                    printf("enter the number of tickets to be booked\n");
                    scanf("%d",&n);
                    p=p * n;
                    //printf("%d",p);
                    printf("final amount to be paid is %d INR\n",p);
                    printf("\n");
                   
                    printf("CONFIRMATION\n");
                    printf("tickets booked successfully\n");
                    printf("flight number %s flying from\n", f[sl-1].flt_no);
                    printf("%s to %s on %d-%d-%d\n",f[sl-1].origin , f[sl-1].destn , d , m , y);
                    printf("at %s via %s\n", f[sl-1].tdep , f[sl-1].airline);
                    printf("PRNs are  ");
                    for (int j = 1; j <= n; j++)  
                    {  
                        num = rand() % 100000 + 1;
                        printf (" %d ", num);  
                    }
                    printf("\n");
                    printf("passengers are to check-in minimum 90 mins before take-off\n");
                    printf("thank you\n");
                   
                }
                amt();
               
               
               
            }
            pref();
            //printf("cost is %d INR\n",p);
        }
        price();
    }
    book();
   
}





int main() {
    printf("\t\tWELCOME TO FLIGHT RESERVATIONS \n \n");
    login();
    if(loginres)
    {
        fromto();
        printf("\n\n");
        date();
        printf("available flights are:");
        printf("\n\n");
        printf("sl_no       flight_no           airline         origin          destn        takeoff_time     landing_time\n");
        printf("\n");
    //printf("%d",loginres);
    //printf("%s %s", from,to);
   
    flt_list();
   
   
   
    //printf("test1");

    }
    /*else
    {
        login();
    }*/
    //ticket price
    /*
    int v,k,q;
    printf("for adding meal package enter 1 else enter 2 ");
    scanf("%d",&v); //add 200 to price
    printf("for lounge access press 1 else press 2");
    scanf("%d",&k); //add 500 to price
    printf("for luxury seat press 1 else press 2");
    scanf("%d",&q);   //add 1000 to price
   

    */

   
   
    return 0;
}
