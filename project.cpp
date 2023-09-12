#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

const float men_100m_wr = 9.58;
const float women_200m_wr = 21.34;
const float men_400m_wr = 43.03;
const float wommen_100mhurdles_wr = 12.12;
const float men_400mhurdles_wr = 45.94;
const float men_highjump_wr = 2.45;
const float men_discus_wr = 74.08;
const float men_longjump_wr = 8.95;
const float men_shotput_wr = 23.56;
const float women_highjump_wr = 2.09;
const float women_discus_wr = 76.80;
const float women_longjump_wr = 7.52;
const float women_shotput_wr = 22.63;



using namespace std;

class Athlete
{
    public:
        Athlete(int x)
        {   
            if(x == 1)
            {
                cout << "New athelete object initailized" << endl;

                setfname();
                setlname();
                setgender();
                settrn();
                setdiscipline();
                setpersonalb();
                setseasonalb();
                settargetb(); 
                distancefrom();
                storeathlete();
            }


        }

        void setfname()
        {
            string fname;

            cout << "Please enter first name"<<  endl;
            cin >> fname;
            athlete_firstname = fname;
        }
        string getfname()
        {
            return athlete_firstname;
        }


        void setlname()
        {
            string lname;

            cout << "Please enter last name"<<  endl;
            cin >> lname;
            athlete_lastname = lname;
        }
        string getlname()
        {
            return athlete_lastname;
        }


         void setgender()
        {
            string gender;

            cout << "Please enter if your MALE or FEMALE"<<  endl;
            cin >> gender;
            athlete_gender = gender;

        }
        string getgender()
        {
            return athlete_gender;
        }


        void settrn()
        {
            string trn;

            cout << "Please enter TRN"<<  endl;
            cin >> trn;
            athlete_trn= trn;

        }
        string gettrn()
        {
            return athlete_trn;
        }
        
        void setdiscipline()
        {
            int discipline;

            cout << "1-Men100m          "  << "2-Women 200m           " << "3-Men 400m          " << "4-Women 100m Hurdles" <<endl;

            cout << "5-Men 400m hurdles     "  << "6-Men highjump      " << "7-Men discuss     " << "8- Men Shotput" <<endl;

            cout << "9-Men LongJump        "  << "10-Women highjump      " << "11-Women discuss     " << "12- Women Shotput" <<endl;

            cout << "13-Women long Jump"<< endl;

            cout << "Please enter code that coressponds with Discipline" << endl;

            cin >> discipline;

            athlete_discipline = discipline;

        }
        string getdiscipline()
        {
            switch(athlete_discipline) 
            {
                case 1:
                return "Men's 100m";
                break;

                case 2:
                return "Women's 200m";
                break;

                case 3:
                return "Men's 400m";
                break;
                
                case 4:
                return "Women's 100m hurdles";
                break;

                case 5:
                return "Men's 400m hurdles";
                break;

                case 6:
                return "Men's high jump";
                break;

                case 7:
                return "Men's discus";
                break;

                case 8:
                return "Men's shotput";
                break;
            
                case 9:
                return "Men's Longjump";
                break;

                case 10:
                return "Women's Highjump";
                break;

                case 11:
                return "Women's Discuss";
                break;

                case 12:
                 return "Women's Shotput";
                break;

                case 13:
                return "Women's Longjump";
                break;
            }
        }


        void setpersonalb()
        {
            float pb;
            
            cout << "Please enter Personal Best"<<  endl;
            cin >> pb;
            athlete_personalb= pb;
        }
        float getpersonalb()
        {
            return athlete_personalb;
        }


        void setseasonalb()
        {
            float sb;
            
            cout << "Please enter seasonal Best"<<  endl;
            cin >> sb;
            athlete_seasonalb= sb;
        }
        float getseasonalb()
        {
            return athlete_seasonalb;
        }

        void settargetb()
        {
            float tg;

            cout << "Please enter Target Goal"<<  endl;
            cin >> tg;
            athlete_targetg= tg;
        }
        float gettargetb()
        {
            return athlete_targetg;

        }

        float getdifftargetg()
        {
            return athelete_dftargetg;
        }

        float getdiffworldr()
        {
            return ahtlete_dfworldr;
        }

        void printinfo()
        {
            printf("The Athelete's name is:%s   %s", athlete_firstname.c_str(), athlete_lastname.c_str()); cout << endl <<endl;

            printf("The athelete discipline is: %s", getdiscipline().c_str()); cout<< endl;
            printf("The Athlete person best is: %.2f", getpersonalb()); cout<< endl;
            printf("The Athelete sseasonal best is: %.2f", getseasonalb()); cout<< endl;
            printf("The Athlete target goal is: %.2f", gettargetb()); cout<< endl <<endl;

            printf("This is the distance from target goaL: %.2f", getdifftargetg()); cout<< endl;
            printf("This is the distance from world record: %.2f", getdiffworldr()); cout<< endl << endl;

        }

        void storeathlete()
        {
            ofstream athleteinfo;
            athleteinfo.open("athleteinfo.txt", ofstream::app);

            athleteinfo << athlete_firstname << " " << athlete_lastname << " " << athlete_gender << " "  << athlete_trn << " "  << athlete_discipline << " "  << athlete_personalb << " " << athlete_seasonalb << " "  << athlete_targetg << " "  << athelete_dftargetg << " " << ahtlete_dfworldr << endl;

            athleteinfo.close();

        }


        float distancefrom()
        {
    
            switch(athlete_discipline) 
            {
                case 1:
                athelete_dftargetg =  athlete_personalb -athlete_targetg;
                ahtlete_dfworldr = athlete_personalb - men_100m_wr;
                break;

                case 2:
                athelete_dftargetg =  athlete_personalb - athlete_targetg;
                ahtlete_dfworldr =  athlete_personalb - women_200m_wr;
                break;

                case 3:
                athelete_dftargetg = athlete_personalb -athlete_targetg;
                ahtlete_dfworldr = athlete_personalb - men_400m_wr;
                break;
                
                case 4:
                athelete_dftargetg = athlete_personalb -men_400m_wr;
                ahtlete_dfworldr =  athlete_personalb - wommen_100mhurdles_wr;
                break;

                case 5:
                athelete_dftargetg =  athlete_targetg - athlete_personalb ;
                ahtlete_dfworldr =  athlete_personalb - men_400mhurdles_wr;
                break;

                case 6:
                athelete_dftargetg = athlete_targetg - athlete_personalb;
                ahtlete_dfworldr = men_highjump_wr - athlete_personalb;
                break;

                case 7:
                athelete_dftargetg = athlete_targetg - athlete_personalb;
                ahtlete_dfworldr = men_discus_wr - athlete_personalb;
                break;

                case 8:
                athelete_dftargetg = athlete_targetg - athlete_personalb;
                ahtlete_dfworldr = men_shotput_wr - athlete_personalb;
                break;
            
                case 9:
                athelete_dftargetg = athlete_targetg - athlete_personalb;
                ahtlete_dfworldr = men_longjump_wr - athlete_personalb;
                break;

                case 10:
                athelete_dftargetg = athlete_targetg - athlete_personalb;
                ahtlete_dfworldr = women_highjump_wr- athlete_personalb;
                break;

                case 11:
                athelete_dftargetg = athlete_targetg - athlete_personalb;
                ahtlete_dfworldr = women_discus_wr- athlete_personalb;
                break;

                case 12:
                athelete_dftargetg = athlete_targetg - athlete_personalb;
                ahtlete_dfworldr = women_shotput_wr- athlete_personalb;
                break;

                case 13:
                athelete_dftargetg = athlete_targetg - athlete_personalb;
                ahtlete_dfworldr = women_longjump_wr - athlete_personalb;
                break;
            }



        }
  

    private:
        string athlete_firstname;
        string athlete_lastname;
        string athlete_gender;
        string athlete_trn;
        int athlete_discipline;
        float athlete_personalb;
        float athlete_seasonalb;
        float athlete_targetg;
        float ahtlete_dfworldr;
        float athelete_dftargetg;

};

string Finder(int discipline)
{
    
    switch(discipline) 
    {
                case 1:
                return "Men100m";
                break;

                case 2:
                return "Women200m";
                break;

                case 3:
                return "Men400m";
                break;
                
                case 4:
                return "Women100mHurdles";              
                break;

                case 5:
                return "Men400mHurdles";
                break;

                case 6:
                return "MenHighJump"; 
                break;

                case 7:
                return "MenDiscuss";
                break;

                case 8:
                return "MenShotput";
                break;
            
                case 9:
                return "MenLongJump";
                break;

                case 10:
                return "WomenHighJump";
                break;

                case 11:
                return "Womendiscuss";
                break;

                case 12:
                return "WomenShotput";
                break;

                case 13:
                return "WomenLongJump";
                break;
    }
}

float wrFinder(int discipline)
{
    
    switch(discipline) 
    {
                case 1:
                return men_100m_wr;
                break;

                case 2:
                return women_200m_wr;
                break;

                case 3:
                return men_400m_wr;
                break;
                
                case 4:
                return wommen_100mhurdles_wr;              
                break;

                case 5:
                return men_400mhurdles_wr;
                break;

                case 6:
                return men_highjump_wr; 
                break;

                case 7:
                return men_discus_wr;
                break;

                case 8:
                return men_shotput_wr;
                break;
            
                case 9:
                return men_longjump_wr;
                break;

                case 10:
                return women_highjump_wr;
                break;

                case 11:
                return women_discus_wr;
                break;

                case 12:
                return women_shotput_wr;
                break;

                case 13:
                return women_longjump_wr;
                break;
    }
}

int login(int x)
{
    string username = "TOPG";
    string password = "NOBUGATTI";
    string usertry;
    string passtry;

    
    for(int i=0; i<3 ; i++)
    {
        cout << "Please enter login" <<endl;
        cin >> usertry;
        cout << "Please enter password"<<endl;
        cin >> passtry;

        if(usertry == username && passtry == password)
        {
            return 1;
        }

    }

    return 0;
    

}

void enterplayer()
{
    string answer;
    int x = 0;

    cout << "Do you want input Athelete say yes, if not enter 'NO' "<< endl;

    cin >> answer;

    while(answer != "NO")
    {
        cout << "How many players do you want to enter?";
        cin >> x;

        Athlete ath[x] = (1);

        cout << "Do you want input Athelete say yes, if not enter 'NO' "<< endl;
        cin >> answer;
    }
}

int linesinfile()
{
    
    int numLines = 0;
    ifstream in("athleteinfo.txt");
    std::string unused;
    while ( std::getline(in, unused) )
        ++numLines;

    return numLines;
}

void distancefromrecord()
{   


    cout << "distance initailize" << endl; 

    string usertrn;


    cout << "What athlete are you looking for " <<endl;
    cin >> usertrn;

    ifstream athfile("athleteinfo.txt");
    
    string mystring;
    string firstname;
    string lastname;
    string gender;
    string trn;
    int discipline;
    float personalb;
    float seasonalb;
    float targetg;
    float dfworldr;
    float dftargetg;


    if (athfile.is_open()) {
    


        while(athfile >> firstname >> lastname >> gender >> trn >> discipline >> personalb >> seasonalb >> targetg >> dftargetg >> dfworldr)
        {
            if(usertrn == trn){

                cout << "TRN: " << trn << endl;
                cout << "Athletename: " << firstname << ' ' << lastname << endl;
                cout << "Discipline: " << Finder(discipline) << endl;
                cout << "Personal Best: " << personalb << endl;
                cout << "World Record: " << wrFinder(discipline) <<endl;
                cout << "Distance from World RecorD: " << dfworldr <<endl <<endl;   
            }
        }
    }
 

}

void athletereport()
{
    
    
    string mystring;
    string firstname;
    string lastname;
    string gender;
    string trn;
    int discipline;
    float personalb;
    float seasonalb;
    float targetg;
    float dfworldr;
    float dftargetg;

    cout << "Report Initailize " << endl;

    int amountath = linesinfile();

    ifstream athfile("athleteinfo.txt");

    cout << "There are " << amountath << " Athletes." << endl;

    while(athfile >> firstname >> lastname >> gender >> trn >> discipline >> personalb >> seasonalb >> targetg >> dftargetg >> dfworldr)
        {
            cout << " Athletename: " << firstname << ' ' << lastname << " "<< "TRN: " << trn << " "<< "Discipline: " << Finder(discipline)<< endl;
        }

    cout << endl;
}


int main()
{
    int verified = 0;
    int decision = 0;
    

    
    verified = login(verified);
    
    if(verified == 0)
    {
        cout << "User is not verified" << endl;
        abort();
    }

    cout << "You are verified!!" <<endl;

    cout << "Pick which task you would like to complete" << endl;
    cout << "1 ---------> Enter Athlete Information" << endl;
    cout << "2 ---------> Determine Distance to Reach World Record" << endl;
    cout << "3 ---------> Display Athlete Management Report" << endl;
    cout << "4 ---------> Exit" << endl << endl;

    cin >> decision;

    while(decision != 4)
    {

        switch(decision){
            case 1:
            enterplayer();
            break;

            case 2:
            distancefromrecord();
            break;

            case 3:
            athletereport();
            break;   
        }

        cout << "Pick which task you would like to complete" << endl;
        cout << "1 ---------> Enter Athlete Information" << endl;
        cout << "2 ---------> Determine Distance to Reach World Record" << endl;
        cout << "3 ---------> Display Athlete Management Report" << endl;
        cout << "4 ---------> Exit" << endl;

        cin >> decision;    

    }
    

    
   

    
}   
