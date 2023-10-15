#include <stdio.h>
#include <string.h>
#define SIZE 366
#define SIZE2 365

//Q1
double avg(double avg[]){
    double average=0;
    for(int i=0;i<SIZE;i++){
        average+=avg[i];
    }
    average=average/SIZE;
    return average;
}
//Q9(Q1 Revamped)
double avgnine(double avgnine[]){
    double averagenine=0;
    for(int i=0;i<SIZE2;i++){
        averagenine+=avgnine[i];
    }
    averagenine=averagenine/SIZE2;
    return averagenine;
}

//Q3
double warm(double warm[]){
    
    double t;
    t =warm[0];
    
    for (int i=0; i <SIZE; i++){
        if (warm[i] > t){
            t = warm[i];
        }
    
    }
    return t;
}

double cold(double cold[]){
    
    double t;
    t =cold[0];
    
    for (int i=0; i <SIZE; i++){
        if (cold[i] < t){
            t = cold[i];
        }
    
    }
    return t;
}

//Q5
double summer(double summer[]){
    double sume = 0;
    
    for (int j=171; j<265; j++){
    sume += summer[j];
    }
        sume = sume / 94;
    return (sume);
}

//Q6
double winter(double winter[]){
    
    double win = 0;
    
    for (int k =0; k < 79 ; k++){
        win += winter [k];
    }
    for (int l = 354; l < 366; l++){
        
        win += winter [l];
    }
    win = win/91;
    return(win);
}
//Q7
double swimDays(double array[]) {
    double totalDays = 0;
    for (int i = 0; i < SIZE; i++) {
        if (array[i] > 20) totalDays++;
    }
    return totalDays;
}
//Q8
    double lakesFreeze(double array[]) {
        double totalDaysInYear = 0;
        for (int i = 0; i < SIZE; i++) {
            if (array[i] < 0) totalDaysInYear++;
        }
        return totalDaysInYear;
}

void date(int day)
{
    int d, m;

    if (day >= 1 && day <= 31)
    {
        m = 1;
        d = day;
    }
    if (day >= 32 && day <= 59)
    {
        m = 2;
        d = day - 31;
    }
    if (day >= 60 && day <= 90)
    {
        m = 3;
        d = day - 59;
    }
    if (day >= 91 && day <= 120)
    {
        m = 4;
        d = day - 90;
    }
    if (day >= 121 && day <= 151)
    {
        m = 5;
        d = day - 120;
    }
    if (day >= 152 && day <= 181)
    {
        m = 6;
        d = day - 151;
    }
    if (day >= 182 && day <= 212)
    {
        m = 7;
        d = day - 181;
    }
    if (day >= 213 && day <= 243)
    {
        m = 8;
        d = day - 212;
    }
    if (day >= 244 && day <= 273)
    {
        m = 9;
        d = day - 243;
    }
    if (day >= 274 && day <= 304)
    {
        m = 10;
        d = day - 273;
    }
    if (day >= 305 && day <= 334)
    {
        m = 11;
        d = day - 304;
    }
    if (day >= 335 && day <= 365)
    {
        m = 12;
        d = day - 334;
    }

    printf("%d/%d", d, m);
}

int main(void) {
    printf("Welcome to The CPS-188 Term Project! Written by:\nMuhammad Paracha, #501084991\nHasan Zouberi, #501111126\nAnsar Yonis, #501089549\n\n"); //Outputs Title of program
    double sup[366], mich[366], huron[366], erie[366], ont[366], stC[366], d[366],y[366];
    int i;

    FILE *tempdata;

    tempdata = fopen("tempdata.txt", "r");
    for (i = 0; i < SIZE; i++)
        fscanf(tempdata, "%lf %lf %lf %lf %lf %lf %lf %lf", &y[i], &d[i], &sup[i], &mich[i], &huron[i], &erie[i], &ont[i], &stC[i]);
    fclose(tempdata);

    printf("----Q1(PT1)-----\n");
    double superior=avg(sup);
    printf("The average temperature for Lake Superior is %0.2f degrees celsius\n",superior);
    double michigan=avg(mich);
    printf("The average temperature for Lake Michigan is %0.2f degrees celsius\n",michigan);
    double huron_=avg(huron);
    printf("The average temperature for Lake Huron is %0.2f degrees celsius\n",huron_);
    double erie_=avg(erie);
    printf("The average temperature for Lake Erie is %0.2f degrees celsius\n",erie_);
    double ontario=avg(ont);
    printf("The average temperature for Lake Ontario is %0.2f degrees celsius\n",ontario);
    double st_clr=avg(stC);
    printf("The average temperature for Lake Saint Clair is %0.2f degrees celsius\n",st_clr);
    
//Q1 Part 2
    printf("\n----Q1(PT2)-----\n");
    double averagetemp;
    averagetemp = (superior + michigan + huron_ + erie_ + ontario + st_clr)/6;
    printf("The Average Temp of all 6 lakes is : %0.2lf degrees celsius\n\n", averagetemp);
    
// Q2 Part 1
    printf("\n----Q2(PT1)-----");

    double ColdestAndWarmestLakes(double avg[]); {

        // For coldest lake//
        if (avg(sup) < avg(mich) && avg(sup) < avg(huron) && avg(sup) < avg(erie) && avg(sup) < avg(ont) && avg(sup) < avg(stC))
            printf("\nThe coldest lake is Lake Superior");

        else if (avg(mich) < avg(huron) && avg(mich) < avg(erie) && avg(mich) < avg(ont) && avg(mich) < avg(stC))
            printf("\nThe coldest lake is Lake Michigan");

        else if (avg(huron) < avg(erie) && avg(huron) < avg(ont) && avg(huron) < avg(stC))
            printf("\nThe coldest lake is Lake Huron");

        else if (avg(erie) < avg(ont) && avg(erie) < avg(stC))
            printf("\nThe coldest lake is Lake Erie");

        else if (avg(ont) < avg(stC))
            printf("\nThe coldest lake is Lake Ontario");

        else
            printf("\nThe coldest lake is Lake Saint Clair");

        //For warmest lake//
        if (avg(sup) > avg(mich) && avg(sup) > avg(huron) && avg(sup) > avg(erie) && avg(sup) > avg(ont) && avg(sup) > avg(stC))
            printf("\nThe warmest lake is Lake Superior");

        else if (avg(mich) > avg(huron) && avg(mich) > avg(erie) && avg(mich) > avg(ont) && avg(mich) > avg(stC))
            printf("\nThe warmest lake is Lake Michigan");

        else if (avg(huron) > avg(erie) && avg(huron) > avg(ont) && avg(huron) > avg(stC))
            printf("\nThe warmest lake is Lake Huron");

        else if (avg(erie) > avg(ont) && avg(erie) > avg(stC))
            printf("\nThe warmest lake is Lake Erie");

        else if (avg(ont) > avg(stC))
            printf("\nThe warmest lake is Lake Ontario");

        else
            printf("\nThe warmest lake is Lake Saint Clair");
    }
    
//Q2 Part 2
    printf("\n\n----Q2(PT2)-----\n");
    if (superior>averagetemp){
        printf("Lake Superior's average temperature is greater than the average of all 6 temperatures\n");
    }
    else printf("Lake Superior's average temperature is lower than the average of all 6 temperatures\n");
    
    if (michigan>averagetemp){
        printf("Lake Michigan's average temperature is greater than the average of all 6 temperatures\n");
    }
    else printf("Lake Michigan's average temperature is lower than the average of all 6 temperatures\n");
    
    if (huron_>averagetemp){
        printf("Lake Huron's average temperature is greater than the average of all 6 temperatures\n");
    }
    else printf("Lake Huron's average temperature is lower than the average of all 6 temperatures\n");
    
    if (erie_>averagetemp){
        printf("Lake Erie's average temperature is greater than the average of all 6 temperatures\n");
    }
    else printf("Lake Erie's average temperature is lower than the average of all 6 temperatures\n");
    
    if (ontario>averagetemp){
        printf("Lake Ontario's average temperature is greater than the average of all 6 temperatures\n");
    }
    else printf("Lake Ontario's average temperature is lower than the average of all 6 temperatures\n");
    
    if (st_clr>averagetemp){
        printf("Lake St.Clair's average temperature is greater than the average of all 6 temperatures\n");
    }
    else printf("Lake St.Clair's average temperature is lower than the average of all 6 temperatures\n");

//Q3
    printf("\n----Q3----\n");
    double superiort = warm(sup);
    double superiorc = cold(sup);
    double micht = warm(mich);
    double michc = cold(mich);
    double huront = warm(huron);
    double huronc = cold(huron);
    double eriet = warm(erie);
    double eriec = cold(erie);
    double ontt = warm(ont);
    double ontc = cold(ont);
    double Stc = warm(stC);
    double Stcc = cold(stC);
    
    printf("The Warmest temperature for Lake Superior is %0.2f degrees celsius\n",superiort);
    printf("\nDate: ");
    date(superiort);
    printf("The Coldest temperature for Lake Superior is %0.2f degrees celsius\n",superiorc);
      
    printf("\nThe Warmest temperature for Lake Michigan is %0.2f degrees celsius\n",micht);
    printf("The Coldest temperature for Lake Michigan is %0.2f degrees celsius\n",michc);
    
    printf("\nThe Warmest temperature for Lake Huron is %0.2f degrees celsius\n",huront);
    printf("The Coldest temperature for Lake Huron is %0.2f degrees celsius\n",huronc);

    printf("\nThe Warmest temperature for Lake Erie is %0.2f degrees celsius\n",eriet);
    printf("The Coldest temperature for Lake Erie is %0.2f degrees celsius\n",eriec);

    printf("\nThe Warmest temperature for Lake Ontario is %0.2f degrees celsius\n",ontt);
    printf("The Coldest temperature for Lake Ontario is %0.2f degrees celsius\n",ontc);

    printf("\nThe Warmest temperature for Lake St.Clair is %0.2f degrees celsius\n",Stc);
    printf("The Coldest temperature for Lake St.Clair is %0.2f degrees celsius\n",Stcc);

//Q4
    printf("\n----Q4----\n");
        if (superiort > micht && superiort > huront && superiort > eriet && superiort > ontt && superiort > Stc)
        printf ("Superior is the warmest temperature of all the lakes combined with %0.2lf\n", superiort);
        else if (micht > superiort && micht > huront && micht > eriet && micht > ontt && micht > Stc)
        printf ("Michigan is the warmest temperature of all the lakes combined with %0.2lf\n", micht);
        else if (huront > superiort && huront > micht && huront > eriet && huront > ontt && huront > Stc)
        printf ("Huron is the warmest temperature of all the lakes combined with %0.2lf\n", huront);
        else if (eriet > superiort && eriet > micht && eriet > huront && eriet > ontt && eriet > Stc)
        printf ("Erie is the warmest temperature of all the lakes combined with %0.2lf\n", eriet);
        else if (ontt > superiort && ontt > micht && ontt > huront && ontt > eriet && ontt > Stc)
        printf ("Ontario is the warmest temperature of all the lakes combined with %0.2lf\n", ontt);
        else
        printf("St. Clair is the warmest temperature of all the lakes combined with %0.2lf\n", Stc);
        
        printf("\n----Q4 PT 2----\n");
        if (superiorc < michc && superiorc < huronc && superiorc < eriec && superiorc < ontc && superiorc < Stcc)
        printf ("Superior is the coldest temperature of all the lakes combined with %0.2lf", superiorc);
        else if (michc < superiorc && michc < huronc && michc < eriec && michc < ontc && michc < Stcc)
        printf ("Michigan is the coldest temperature of all the lakes combined with %0.2lf", michc);
        else if (huronc < superiorc && huronc < micht && huront < eriet && huront < ontt && huront < Stcc)
        printf ("Huron is the coldest temperature of all the lakes combined with %0.2lf", huronc);
        else if (eriec < superiorc && eriec < michc && eriec < huronc && eriec < ontc && eriec < Stcc)
        printf ("Erie is the coldest temperature of all the lakes combined with %0.2lf", eriet);
        else if (ontc < superiorc && ontc < michc && ontc < huronc && ontc < eriec && ontc < Stcc)
        printf ("Ontario is the coldest temperature of all the lakes combined with %0.2lf", ontc);
        else
        printf("St. Clair is the coldest temperature of all the lakes combined with %0.2lf\n", Stcc);
    
//Q5
    printf("\n----Q5-----\n");
    double superiorf=summer(sup);
    printf("The average Summer temperature for Lake Superior is %0.2f degrees celsius\n",superiorf);
    double michiganf=summer(mich);
    printf("The average Summer temperature for Lake Michigan is %0.2f degrees celsius\n",michiganf);
    double huron_f=summer(huron);
    printf("The average Summer temperature for Lake Huron is %0.2f degrees celsius\n",huron_f);
    double erie_f=summer(erie);
    printf("The average Summer temperature for Lake Erie is %0.2f degrees celsius\n",erie_f);
    double ontariof=summer(ont);
    printf("The average Summer temperature for Lake Ontario is %0.2f degrees celsius\n",ontariof);
    double st_clrf=summer(stC);
    printf("The average Summer temperature for Lake Saint Clair is %0.2f degrees celsius\n",st_clrf);

    double a;
    int n = 6;
    double sumofsumm [6] = {superiorf, michiganf, huron_f, erie_f, ontariof, st_clrf};
    int b, x;
    char naminglake[6][30] = {"Lake Superior", "Lake Michigan", "Lake Huron", "Lake Erie", "Lake Ontario", "Lake St.Clair"};
    char tempslake [50];
    
            for (b = 0; b < n; b++)
            //sorts
            for (b = 0; b < n; b++){
                for (x = b + 1; x < n; x++){
                    if (sumofsumm[b] < sumofsumm[x]){
                        a = sumofsumm[b];
                        sumofsumm[b] = sumofsumm[x];
                        sumofsumm[x] = a;
                        strcpy(tempslake, naminglake[b]);
                        strcpy(naminglake[b], naminglake[x]);
                        strcpy(naminglake[x], tempslake);
                    }
                }
            }
            printf("\nThe Temperatures in Descending Order are:\n");
            for (b = 0; b < n; b++){
                printf("%s %0.2lf degrees celsius\n", naminglake[b], sumofsumm[b]);
            }
    
//Q6
    printf("\n----Q6-----\n");
    double superiorw=winter(sup);
    printf("The average winter temperature for Lake Superior is %0.2f degrees celsius\n",superiorw);
    double michiganw=winter(mich);
    printf("The average winter temperature for Lake Michigan is %0.2f degrees celsius\n",michiganw);
    double huron_w=winter(huron);
    printf("The average  winter temperature for Lake Huron is %0.2f degrees celsius\n",huron_w);
    double erie_w=winter(erie);
    printf("The average winter temperature for Lake Erie is %0.2f degrees celsius\n",erie_w);
    double ontariow=winter(ont);
    printf("The average winter temperature for Lake Ontario is %0.2f degrees celscius\n",ontariow);
    double st_clrw=winter(stC);
    printf("The average winter temperature for Lake Saint Clair is %0.2f degrees celsius\n",st_clrw);
    
    double f;
    int h = 6;
    double sumofwinn [6] = {superiorw, michiganw, huron_w, erie_w, ontariow, st_clrw};
    int g, k;
    char naminglake2 [6][30] = {"Lake Superior", "Lake Michigan", "Lake Huron", "Lake Erie", "Lake Ontario", "Lake St.Clair"};
    char tempslake2 [50];

            for (g = 0; g < h; g++)
            //sorts
            for (g = 0; g < h; g++){
                for (k = g + 1; k < h; k++){
                    if (sumofwinn[g] < sumofwinn[k]){
                        f = sumofwinn[g];
                        sumofwinn[g] = sumofwinn[k];
                        sumofwinn[k] = f;
                        strcpy(tempslake2, naminglake2[g]);
                        strcpy(naminglake2[g], naminglake2[k]);
                        strcpy(naminglake2[k], tempslake2);
                    }
                }
            }
            printf("\nThe Temperatures in Descending Order are:\n");
            for (g = 0; g < h; g++){
                printf("%s %0.2lf degrees celsius\n", naminglake2[g], sumofwinn[g]);
            }

//Q7
    printf("\n----Q7-----\n");
    int superiorTotalDays = swimDays(sup);
    printf("The total number of days I can swim for Lake Superior is: %d days", superiorTotalDays);

    int michiganTotalDays = swimDays(mich);
    printf("\nThe total number of days I can swim for Lake Michigan is: %d days", michiganTotalDays);

    int huron__TotalDays = swimDays(huron);
    printf("\nThe total number of days I can swim for Lake Huron is: %d days", huron__TotalDays);

    int erie__TotalDays = swimDays(erie);
    printf("\nThe total number of days I can swim for Lake Erie is: %d days", erie__TotalDays);

    int ontarioTotalDays = swimDays(ont);
    printf("\nThe total number of days I can swim for Lake Ontatio is: %d days", ontarioTotalDays);

    int saintClaireTotalDays = swimDays(stC);
    printf("\nThe total number of days I can swim for Lake St.Clair is: %d days\n", saintClaireTotalDays);
    
//Q8
    printf("\n----Q8-----\n");
    int superiorTotalDays_ = lakesFreeze(sup);
    printf("The total number of days in the year the lake is frozen for Lake Superior is: %d days",
           superiorTotalDays_);

    int michiganTotalDays_ = lakesFreeze(mich);
    printf("\nThe total number of days in the year the lake is frozen for Lake Michigan is: %d days",
           michiganTotalDays_);

    int huron___TotalDays_ = lakesFreeze(huron);
    printf("\nThe total number of days in the year the lake is frozen for Lake Huron is: %d days", huron___TotalDays_);

    int erie___TotalDays_ = lakesFreeze(erie);
    printf("\nThe total number of days in the year the lake is frozen for Lake Erie is: %d days", erie___TotalDays_);

    int ontarioTotalDays_ = lakesFreeze(ont);
    printf("\nThe total number of days in the year the lake is frozen for Lake Ontario is: %d days", ontarioTotalDays_);

    int saintClairTotalDays_ = lakesFreeze(stC);
    printf("\nThe total number of days in the year the lake is frozen for Lake St.Clair is: %d days\n",
           saintClairTotalDays_);

//Q9 (Redo Q1 2019 data)
    double supnine[365], michnine[365], huronnine[365], erienine[365], ontnine[365], stCnine[365], e[365], z[365];
        int j;

        FILE *tempdata2;

        tempdata2 = fopen("tempdata2.txt", "r");
    for (j = 0; j < SIZE; j++)
        fscanf(tempdata2, "%lf %lf %lf %lf %lf %lf %lf %lf", &z[j], &e[j], &supnine[j], &michnine[j], &huronnine[j], &erienine[j], &ontnine[j], &stCnine[j]);
    fclose(tempdata2);
    
    printf("\n----Q9(PT1)-----\n");
    double superiornine=avgnine(supnine);
    printf("The average temperature for Lake Superior in 2019 is %0.2f degrees celsius\n",superiornine);
    double michigannine=avgnine(michnine);
    printf("The average temperature for Lake Michigan in 2019 is %0.2f degrees celsius\n",michigannine);
    double huron_nine=avgnine(huronnine);
    printf("The average temperature for Lake Huron in 2019 is %0.2f degrees celsius\n",huron_nine);
    double erie_nine=avgnine(erienine);
    printf("The average temperature for Lake Erie in 2019 is %0.2f degrees celsius\n",erie_nine);
    double ontarionine=avgnine(ontnine);
    printf("The average temperature for Lake Ontario in 2019 is %0.2f degrees celsius\n",ontarionine);
    double st_clrnine=avgnine(stCnine);
    printf("The average temperature for Lake Saint Clair in 2019 is %0.2f degrees celsius\n",st_clrnine);
    
//Q9(PT2)
    printf("\n----Q9(PT2)-----\n");
    double averagetwotemp;
    averagetwotemp = (superiornine + michigannine + huron_nine + erie_nine + ontarionine + st_clrnine)/6;
    printf("The Average Temp of all 6 lakes in 2019 is: %0.2lf degrees celsius\n\n", averagetwotemp);
    return 0;
}
