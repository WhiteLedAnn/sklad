# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define MAX 100
# define NAME 15
# define NAMEOFFILE file.myfilE

struct addsklad {
    char name[NAME];
    float price;
    char date[9];
    int postupilo;
    int lost;
} adds_list[MAX];


int menu_select(void);
void init_list(void),flower(void);
int enter();
void printfcount(void);
void list(void);
int Search();
int Lost();
int How_much_product_inthis_day_you_have();
int loadsavedlist();
int Remove();
int save();
int open();
void count(void);
int find_name(void);
int name(), Price(),Date(), newtovar();
int n=0;

int main(void){
    int n=0;
    int key=0;
    char choice;
    init_list();
    flower();
    for(;;) {

        choice = menu_select();

        switch(choice) {
        case 1: key=enter(key);
        break;
        case 2: printfcount();
        break;
        case 3: list();
        break;
        case 4:Search();
        break;
        case 5:Lost();
        break;
        case 6:How_much_product_inthis_day_you_have();
        break;
        case 7: loadsavedlist();
        break;
        case 8: save();
        break;
        case 9: exit(0);

    }
  }

  return 0;
}


void init_list(void){
    int t;
    for(t=0; t<MAX; ++t) adds_list[t].name[0] = '\0';
}

void flower(void){
    printf("   _..+.+.._");
    printf(" \n");
    printf("  /_/ |_| \\_\\");
    printf(" \n");
    printf("       |> ");
    printf(" \n");
    printf("       | ");
    printf(" \n");
    printf("      <| ");
    printf(" \n");
    printf("       | ");
    printf(" \n");
    printf("       | ");
    printf(" \n");
    printf("     .:::.");
    printf(" \n");
    printf(" Welcome! ^__^\n");
    printf("\n");


}

int menu_select(){
    char punkt[MAX];
    int gotonumb=0;
    printf("1. Enter the name, date, price and number (Reception of goods) \n");
    printf("2. Output the number of records in the database for this session of the program\n");
    printf("3. Look at the list (This list may don't saved yet)\n");
    printf("4. Product Search\n");
    printf("5. Remove product (name, price,how many)\n");
    printf("6. Enter the date, to see how much products remove\n");
    printf("7. Load the saved list\n");
    printf("8. Save list\n");
    printf("9. Exit\n");
    printf("\n\nAttention! If you entered something and suddenly found themselves on the menu, you have entered it wrong! Try again.\n");
    do{
        printf("\n ");
        printf("Enter the number of the desired item: ");
        fgets(punkt,sizeof(gotonumb),stdin);
        punkt[2]='\0';
        gotonumb=atoi(punkt);
    }
    while((gotonumb<0)||(gotonumb>9));
    return gotonumb;


}
int enter(int key){
    int f=0,less=0;
    int s=0;
    printf("\nEnter the title(name):");
    less=name(key);
    s++;
    if(less!=-12){
    printf("\nEnter the price: ");
    f=Price(key);
    if(f!=1){
    s++;
    printf("\nEnter how much new product you have: ");
    f=newtovar(key);
    if(f==1){
        printf("Try again later.I send you to menu (because you enter sm-thing wrong)\n");
        f=0;
        return 1;
    }
    else{
    s++;
    printf("\nEnter the day: ");
    Date(key);
    s++;
    if(s==4){
        count();
        printf("\n");
        s=0;
    }
    key++;
    return key;
    }
    }

    else{
       printf("\nYou enter sm-thing wrong. Try again later");
    }
    }
    else{
        adds_list[key].name[0] = '\0';
        printf("\nYou enter sm-thing wrong. Try again later\n");
    }

}
int How_much_product_inthis_day_you_have(){
    int hehe=0,hey=1,i2=0;
    int wou=0,wwa=0;
    int k=0,rr=0,zed=0;
    int dd=0,mm=0,yy=0;
    char V[4];
    int a=0;
    char d[4];
    char l[4];
    char w[MAX],ert[9];
    int l1=0,blend=0;
    char p[MAX],i[MAX];
    int D[MAX],l2=0;
    int k2=0,t=0,n=0;
    char y[MAX],yut[MAX],add1[MAX];
    printf("Enter day:");
    while ('\n'!=(a=getchar())){
         w[l1]=a;
         l1++;
    }
    w[l1]='\0';
    while(l1>3){
        w[l1]='\0';
        l1--;
    }
    add1[l1]='\0';
    w[l1]='\0';
    printf("Month is:");
    dd=atoi(w);
    l1=0,a=0;
    while(l1<=3){
        w[l1]='\0';
        l1++;
    }


    l1=0;
    while ('\n'!=(a=getchar())){
         w[l1]=a;
         l1++;
    }
    w[l1]='\0';
    while(l1>3){
        w[l1]='\0';
        l1--;
    }
    w[l1]='\0';
    printf("Year is:");
    mm=atoi(w);
    l1=0,a=0;
    while(l1<=3){
        w[l1]='\0';
        l1++;
    }
    l1=0;
    while ('\n'!=(a=getchar())){
         w[l1]=a;
         l1++;
    }
    w[l1]='\0';

    while(l1>3){
        w[l1]='\0';
        l1--;
    }
    w[l1]='\0';
    printf("Year is:");
    yy=atoi(w);
    printf("%d",yy);
    if(mm>12){
        printf("\nYou entered the wrong character We have 12 months in year");
        hehe=1;
    }
    if(dd>31){
        printf("\nYou entered the wrong character In mounth can't be more then 31 day");
        hehe=1;
    }
    if(mm==3||mm==5||mm==7||mm==8||mm==10||mm==12){
        if(dd>31){
            printf("\nYou entered the wrong character");
            hehe=1;
        }
    }
    if(mm==0&&yy==0&&dd==0){
            printf("\nYou entered the wrong character");
            hehe=1;
    }
    if(mm!=3&&mm!=5&&mm!=7&&mm==8&&mm==10&&mm==12&&mm!=2){
        if(dd>30){
            printf("\nYou entered the wrong character");
            hehe=1;
        }
    }
    wou=yy;
    if(wou==((yy/4)*4)&&wou!=((yy/100)*100)){
        if(mm==2){
            if(dd>29){
                printf("\nIn a leap year, you have maximum 29 days");
                hehe=1;
            }
        }
    }
    else{
        if(mm==2){
            if(dd>28){
                printf("\nIt isn't a leap year, you have maximum 28 days");
                hehe=1;
            }
        }
    }
         yy=wou;

    if(yy>99){
    printf("We have year like this %d ?You are wrong!",yy);
    hehe=1;
    }
    if(mm<0||dd<0||yy<0){
    printf("Minus? You are wrong!");
    hehe=1;
    }
    w[0]='.';
    w[1]='\0';
        //функция обратная от атой sprintf
        printf("The date is:");

    FILE *f;

    if(hehe!=1){
         sprintf(ert, "%d.%d.%d", dd,mm,yy);
         printf("%s\n",ert);
         ert[9]='\0';
         if((f=fopen("NAMEOFFILE","a"))==NULL){
        printf("File can't open\n");
        }
    rewind(f);
    fclose(f);
    f=fopen("NAMEOFFILE","r");
    a=0;

    init_list();
    for(i2=0;;i2++){
        if(!(feof(f))){
            fscanf(f,"%d",&blend);
            fscanf(f,"%s",adds_list[i2].name);

            fscanf(f,"%f",&adds_list[i2].price);
            fscanf(f,"%d",&adds_list[i2].lost);
            fscanf(f,"%d",&adds_list[i2].postupilo);
            fscanf(f,"%s",adds_list[i2].date);
            adds_list[i2].date[9]='\0';
        if (1!=strcmp(adds_list[i2].date,ert)) {
            printf("\n%s\n%f\n%d\n%d\n%s\n",adds_list[i2].name,adds_list[i2].price, adds_list[i2].lost, adds_list[i2].postupilo,adds_list[i2].date);
        }
        else{
            printf("In file there is no date like this((\n");
            break;
        }
    fclose(f);
    }
    else printf("Sorry, you enter sm-thing wrong");
    break;
    }
    }
    else printf("Sorry, you enter sm-thing wrong");
}
int Search(){
    int hehe=0,hey=1,i2=0;
    int wou=0,wwa=0;
    int k=0,rr=0,zed=0;
    int dd=0,mm=0,yy=0;
    char V[4];
    int a=0,blend=0;
    char d[4];
    char l[4];
    char w[MAX],ert[9];
    int l1=0;
    char p[MAX],i[MAX];
    int D[MAX],l2=0;
    int k2=0,t=0,n=0;
    char y[MAX],yut[MAX],add1[MAX];
    init_list();
    printf("Enter name(title):");
    while ('\n'!=(a=getchar())){
         w[l1]=a;
         l1++;
    }
    w[l1]='\0';
    while(l1>NAME){
        w[l1]='\0';
        l1--;
    }
    add1[l1]='\0';
    w[l1]='\0';
    printf("The name is:%s",w);
    FILE *f;
    if(hehe!=1){
         if((f=fopen("NAMEOFFILE","a"))==NULL){
        printf("File can't open\n");
        }
    rewind(f);
    fclose(f);
    f=fopen("NAMEOFFILE","r");
    a=0;

    init_list();
    for(i2=0;;i2++){
        if(!(feof(f))){
            fscanf(f,"%d",&blend);
            fscanf(f,"%s",adds_list[i2].name);

            fscanf(f,"%f",&adds_list[i2].price);
            fscanf(f,"%d",&adds_list[i2].lost);
            fscanf(f,"%d",&adds_list[i2].postupilo);
            fscanf(f,"%s",adds_list[i2].date);
            adds_list[i2].name[NAME]='\0';
        if (0==strcmp(adds_list[i2].name,w)) {
            printf("\n\nFinded");
            printf("\n%s\n%f\n%d\n%d\n%s\n",adds_list[i2].name,adds_list[i2].price, adds_list[i2].lost, adds_list[i2].postupilo,adds_list[i2].date);
        }
        else if(NULL!=strstr(adds_list[i2].name,w)){
            printf("\nOh, I can search only %s",adds_list[i2].name);
        //printf("\n%s\n%f\n%d\n%d\n%s\n",adds_list[i2].name,adds_list[i2].price, adds_list[i2].lost, adds_list[i2].postupilo,adds_list[i2].date);
        }
        else{
           printf("In file there is no name like this((\n");
           break;
    }
    fclose(f);
    }
    else printf("Sorry, you enter sm-thing wrong");
    break;
    }
    }
    else printf("Sorry, you enter sm-thing wrong");
}
void list(void){
    int t1;
    for(t1=0; t1<MAX; ++t1) {
        if(adds_list[t1].name[0]) {
            printf("Name of product:  ");
            printf("%s\n", adds_list[t1].name);
            printf("Price:  ");
            printf("%f\n\n", adds_list[t1].price);
            printf("When received (date):");
            printf("%s\n\n", adds_list[t1].date);
            printf("How many goods received:");
            printf("%d\n\n", adds_list[t1].postupilo);
            printf("How much product is left:  ");
            printf("%d\n\n", adds_list[t1].lost);
         }
      }
printf("\n\n");
}
void count(void){
    n++;

}
void printfcount(void){
    printf("At the basis of all the data in a session of the program:" );
    printf("%d",n);
    printf("\n");
    printf("\n");

}
int name(int key){// ода
    int l=0,a=0,a22=21,i2=0;
    char name[MAX];
    char u[MAX];
    while ('\n'!=(a=getchar())){
         u[l]=a;
         if(a==209){
             u[l--]=0;
             printf("\nYou enter sm-thing like russian language!\n");
             return -12;
         }
         l++;
    }
    u[l]='\0';
    while(l>NAME){
        u[l]='\0';
        l--;
    }
    adds_list[key].name[l]='\0';
    u[l]='\0';
    if(u[0]=='\0'){
        printf("\nYou enter sm-thing wrong!\n");
        return -12;
    }
    else{
        FILE *f;
        f=fopen("NAMEOFFILE","a");
        fclose(f);
        f=fopen("NAMEOFFILE","r");
        for(i2=0;;i2++){
        if(!(feof(f))){
            fscanf(f,"%s",name);
            name[NAME]='\0';
        if (0==strcmp(name,u)){
            a22++;
        }
        }
        else break;
        }
fclose(f);
        if(a22==21){
        strcpy(adds_list[key].name,u);

        printf("Name is:");
        printf("%s",adds_list[key].name);
        }
        else{
             printf("This name was used. Try another.\n");
             return -12;
        }

    }


}
int Price(int key){
    char y[MAX];
    int l1=0;
    int w=0,a=0;
    float yy=0.0;
    while(w==0){
        while ('\n'!=(a=getchar())){
            y[l1]=a;
            l1++;
        }
        y[l1]='\0';
        while(l1>8){
        y[l1]='\0';
        l1--;
        }
        yy=atof(y);
        if(yy<=0.0){
            w=0;
            printf("You enter sm-thing wrong!\n");
            adds_list[key].name[0]='\0';
            return 1;
            break;
        }
        else{
            w=1;
            adds_list[key].price=yy;
            printf("How much money you have to add--->");
        }
    }
    printf("Price is:");
    printf("%5.3f",adds_list[key].price);
}

int Date(int key){
    int hehe=0,hey=1;
    int wou=0,wwa=0;
    int k=0,rr=0,zed=0;
    int dd=0,mm=0,yy=0;
    char V[4];
    int a=0,t=0;
    char d[4];
    char l[4];
    char w[MAX];
    int l1=0;
    while ('\n'!=(a=getchar())){
         w[l1]=a;
         l1++;
    }
    w[l1]='\0';
    while(l1>NAME){
        w[l1]='\0';
        l1--;
    }
    adds_list[key].date[l1]='\0';
    w[l1]='\0';
    printf("Month is:");
    dd=atoi(w);
    l1=0,a=0;
    while(l1<=NAME){
        w[l1]='\0';
        l1++;
    }


    l1=0;
    while ('\n'!=(a=getchar())){
         w[l1]=a;
         l1++;
    }
    w[l1]='\0';
    while(l1>NAME){
        w[l1]='\0';
        l1--;
    }
    w[l1]='\0';
    printf("Year is:");
    mm=atoi(w);
    l1=0,a=0;
    while(l1<=NAME){
        w[l1]='\0';
        l1++;
    }
    l1=0;
    while ('\n'!=(a=getchar())){
         w[l1]=a;
         l1++;
    }
    w[l1]='\0';

    while(l1>NAME){
        w[l1]='\0';
        l1--;
    }
    w[l1]='\0';
    printf("Year is:");
    yy=atoi(w);
    printf("%d",yy);
    if(mm>12){
        printf("\nYou entered the wrong character We have 12 months in year");
        hehe=1;
    }
    if(dd>31){
        printf("\nYou entered the wrong character In mounth can't be more then 31 day");
        hehe=1;
    }
    if(mm==3||mm==5||mm==7||mm==8||mm==10||mm==12){
        if(dd>31){
            printf("\nYou entered the wrong character");
            hehe=1;
        }
    }
    if(mm==0&&yy==0&&dd==0){
            printf("\nYou entered the wrong character");
            hehe=1;
    }
    if(mm!=3&&mm!=5&&mm!=7&&mm==8&&mm==10&&mm==12&&mm!=2){
        if(dd>30){
            printf("\nYou entered the wrong character");
            hehe=1;
        }
    }
    wou=yy;
    if(wou==((yy/4)*4)&&wou!=((yy/100)*100)){
        if(mm==2){
            if(dd>29){
                printf("\nIn a leap year, you have maximum 29 days");
                hehe=1;
            }
        }
    }
    else{
        if(mm==2){
            if(dd>28){
                printf("\nIt isn't a leap year, you have maximum 28 days");
                hehe=1;
            }
        }
    }
         yy=wou;

    if(yy>99){
    printf("We have year like this %d ?You are wrong!",yy);
    hehe=1;
    }
    if(mm<0||dd<0||yy<0){
    printf("Minus? You are wrong!");
    hehe=1;
    }
    w[0]='.';
    w[1]='\0';
        //функция обратная от атой sprintf
        printf("The date is:");



    if(hehe!=1){
         sprintf(adds_list[key].date, "%d.%d.%d", dd,mm,yy);
         printf("%s",adds_list[key].date);
    }
    else{
        printf("Sorry, you enter sm-thing wrong\n");
        adds_list[key].name[0] = '\0';

    }
}
int newtovar(int key){
    char y[MAX];
    int l1=0;
    int w=0,a=0,yy=0;
    while(w==0){
        while ('\n'!=(a=getchar())){
            y[l1]=a;
            l1++;
        }
        y[l1]='\0';
        yy=atoi(y);
        if(yy<=0){
            w=0;
            printf("You enter sm-thing wrong!\n");
            adds_list[key].name[0] = '\0';
            return 1;
            break;
        }
        else{
            w=1;
            adds_list[key].postupilo=yy;
            printf("How much you have to add:");
            adds_list[key].lost=adds_list[key].postupilo;
            printf("%d",adds_list[key].postupilo);
            return 0;
        }
    }

}
int Lost(){
    int l=0,a=0,i2=0;
    char u[MAX];
     char y[MAX];
    char ert[MAX];
    int l1=0,t=0;
    int w=0,mm,team=0,blend=0;
    float yy=0.0;
    printf("Enter name:");
    while ('\n'!=(a=getchar())){
         u[l]=a;
         l++;
    }
    u[l]='\0';
    while(l>NAME){
        u[l]='\0';
        l--;
    }
    u[l]='\0';
    printf("Name is:");
    printf("%s",u);
    printf("Enter price:");
    while(w==0){
        while ('\n'!=(a=getchar())){
            y[l1]=a;
            l1++;
        }
        y[l1]='\0';
        yy=atof(y);
        if(yy<=0){
            w=0;
            printf("You enter sm-thing wrong!\n");
            return 1;
            break;
        }
        else{
            w=1;
            printf("\nHow much money you have to add--->");
        }
    }
    printf("\nPrice is:");
    printf("%10.3f",yy);
    l1=0;
    a=0;
    w=0;
    printf("\nEnter how many products you want to remove:");
    while(w==0){
        while ('\n'!=(a=getchar())){
            y[l1]=a;
            l1++;
        }
        y[l1]='\0';
        mm=atoi(y);
        if(mm<=0){
            w=0;
            printf("\nYou enter sm-thing wrong!\n");
            return 1;
            break;
        }
        else{
            w=1;
            printf("\nHow much money you have to add--->");
        }
    }
    printf("\nNumber is:");
    printf("%d",mm);
    FILE *f;
    if((f=fopen("NAMEOFFILE","a"))==NULL){
        printf("File can't open\n");
    }
    rewind(f);
    fclose(f);
    f=fopen("NAMEOFFILE","r");
    a=0;
    init_list();
    for(i2=0;;i2++){
        if(!(feof(f))){
            fscanf(f,"%d",&blend);
            fscanf(f,"%s",adds_list[i2].name);
            fscanf(f,"%f",&adds_list[i2].price);
            fscanf(f,"%d",&adds_list[i2].lost);
            fscanf(f,"%d",&adds_list[i2].postupilo);
            fscanf(f,"%s",adds_list[i2].date);
            adds_list[i2].name[NAME]='\0';
        if ((0==strcmp(adds_list[i2].name,u))&&(adds_list[i2].price==yy)&&(adds_list[i2].postupilo>=mm)) {
            printf("\n%s\n%f\n%d\n%d\n%s\n",adds_list[i2].name,adds_list[i2].price, adds_list[i2].lost, adds_list[i2].postupilo,adds_list[i2].date);
        adds_list[i2].lost=adds_list[i2].postupilo-mm;
        fclose(f);
        f=fopen("NAMEOFFILE","w");
        fclose(f);
        f=fopen("NAMEOFFILE","a");
        fscanf(f,"%d",&team);
        blend=team;
            for(t=0; t<MAX; ++t){
        if(adds_list[t].name[0]== '\0'){
            break;
            t=MAX;
        }

            fprintf(f,"%d",blend);
            fprintf(f,"\n");
        fprintf(f,"%s",adds_list[t].name);
            printf("\nname saved");
            fprintf(f,'\0');
            fprintf(f,"\n");
            fprintf(f,"%f",adds_list[t].price);
            printf("\nprice saved");
            fprintf(f,"\n");
            fprintf(f,"%d",adds_list[t].postupilo);
            printf("\npostupilo saved");
            fprintf(f,"\n");
            fprintf(f,"%d",adds_list[t].lost);
            printf("\nlost saved");
            fprintf(f,"\n");
            fprintf(f,'\0');
            printf("\nYour data %s saved",adds_list[t].date);
            fprintf(f,"%s",adds_list[t].date);
            fprintf(f,'\0');
            fprintf(f,"\n\n");
            }
        break;
        }
        else if((NULL!=strstr(adds_list[i2].name,u))&&(adds_list[i2].price==yy)&&(adds_list[i2].postupilo>=mm)){
            printf("\nOh, I can search only %s",adds_list[i2].name);
            printf("If you want to pay for what you need enter name correct, please! (>.<)\n");
            printf("\n%s\n%f\n%d\n%d\n%s\n",adds_list[i2].name,adds_list[i2].price, adds_list[i2].lost, adds_list[i2].postupilo,adds_list[i2].date);

        }
        else{
            printf("In file there is no information like this((\n");
            break;
        }
    }
    }
    fclose(f);
}
int save(){
    char name[NAME];
    float price;
    char date[9];
    int postupilo;
    int lost;
    int i=0,retro=MAX,blend=0;
    int k=0,t=0,i2=0,team=0;
    FILE *f;
    if((f=fopen("NAMEOFFILE","a"))==NULL){
        printf("File can't open\n");

    }


    else{
        fscanf(f,"%d",&team);
        blend=team;

    for(t=0; t<MAX; ++t,blend++){
        if(adds_list[t].name[0]== '\0'){
            break;
            t=MAX;
        }

       // if ((0!=strcmp(adds_list2[i2].name,adds_list[t].name))&&(adds_list[t].price==adds_list2[i2].price)&&(adds_list[t].postupilo>=0)){
         //   t=retro;
           // adds_list2[i2].postupilo=adds_list[t].postupilo+adds_list2[i2].postupilo;
            //adds_list2[i2].lost=adds_list[t].lost+adds_list2[i2].postupilo;
            //t++;
       // }
            fprintf(f,"%d",blend);
            fprintf(f,"\n");
            fprintf(f,"%s",adds_list[t].name);
            printf("\nname saved");
            fprintf(f,'\0');
            fprintf(f,"\n");
            fprintf(f,"%f",adds_list[t].price);
            printf("\nprice saved");
            fprintf(f,"\n");
            fprintf(f,"%d",adds_list[t].postupilo);
            printf("\npostupilo saved");
            fprintf(f,"\n");
            fprintf(f,"%d",adds_list[t].lost);
            printf("\nlost saved");
            fprintf(f,"\n");
            fprintf(f,'\0');
            printf("\nYour data %s saved",adds_list[t].date);
            fprintf(f,"%s",adds_list[t].date);
            fprintf(f,'\0');
            fprintf(f,"\n\n");
    }
    printf("\nI safe your base\n");

    }
    fclose(f);


        printf("\n\n");
}


int loadsavedlist(){
    int b=0;
    char y[MAX];
    int l1=0;
    int w=0,a=0,yy=0;
    FILE  *f;
    int i,dsa=8;
    if((f=fopen("NAMEOFFILE", "r"))==NULL) {
        printf("I can't open file.\n");
        return;
        exit(1);
    }
    if(dsa==8){
        printf("If you want to load list save your information.Do you want to load list?Enter No if you wanr to exit Enter 8 if you want to continue");
    while ('\n'!=(a=getchar())){
            y[l1]=a;
            l1++;
     }
     y[l1]='\0';
     dsa=atoi(y);
     fclose(f);
  }
     if(dsa==8){
        init_list();
        f=fopen("NAMEOFFILE","r");
    while(!(feof(f))){
        a=fgetc(f);
        printf("%c",a);
    }
    printf("\n\n");
    rewind(f);
    fclose(f);
    }

}
