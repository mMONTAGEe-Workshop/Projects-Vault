#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int score = 0;
    int userChoiceNum;
    int userChoiceNum1;
    int userChoiceNum2;
    string userChoiceString;


    cout<<"Welcome to Distant Worlds universe quiz."<<endl;
    cout<<"Quiz Consists of 7 questions"<<endl;
    cout<<"Visit the Wikipage for guidance! https://mmontagee-workshop.github.io/Distant-Worlds/index.html"<<endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout<<" "<<endl;
    cout<<"<==========[Question 1]==========>"<<endl;
    cout<<" "<<endl;


    cout<<"Which MegaFaction produces most amount of Interstellar Ships"<<endl;
    cout<<"1. Martian Technate"<<endl;
    cout<<"2. Settled Exoplanets Defence Treaty"<<endl;
    cout<<"3. Cetus Federal Republic"<<endl;
    cout<<"4. United LunaTerra"<<endl;
    cout<<" > ";
    cin>>userChoiceNum;

    cout<<" "<<endl;
    if(userChoiceNum == 4){
        cout<<"Correct!, The United LunaTerran Kepler-Class and Astralis-Class Megaships are most powerful and spread FTL Vessels in entire Milky Way Galaxy."<<endl;
        score += 25;
    } else {
        cout<<"Wrong, The United LunaTerran Kepler-Class and Astralis-Class Megaships are most powerful and spread FTL Vessels in entire Milky Way Galaxy.";
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));
    cout<<" "<<endl;
    cout<<"<==========[Question 2]==========>"<<endl;
    cout<<" "<<endl;

    cout<<"Why Settled Exoplanets Defence Treaty was formed?"<<endl;
    cout<<"1. Oppresion from Solar System to ExoSolar Colonies"<<endl;
    cout<<"2. Compete with Solar System in Corporate Greed"<<endl;
    cout<<"3. Cooperation between Solar System and Independant Stars in Space Exploration"<<endl;
    cout<<"4. "<<endl;
    cout<<" > ";
    cin>>userChoiceNum;

    cout<<" "<<endl;
    if(userChoiceNum == 1){
        cout<<"Correct!, Settled Exoplanets Defence Treaty was formed to fight Solar System Factions exploiting and oppresing their colonies in their interests."<<endl;
        score += 25;
    } else {
        cout<<"Wrong!, Settled Exoplanets Defence Treaty was formed to fight Solar System Factions exploiting and oppresing their colonies in their interests. "<<endl;
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));
    cout<<" "<<endl;
    cout<<"==========[Question 3]=========="<<endl;
    cout<<" "<<endl;

    cout<<"On Planet DSEP=ARTDIS-023 002 01, Which crab has killed Astralis-Class expedition crew member?"<<endl;
    cout<<" > ";
    cin>>userChoiceString;

    cout<<" "<<endl;
    if(userChoiceString == "skullcrusher" || userChoiceString == "SKULLCRUSHER"){
        cout<<"Correct!, on Planet 002 01, Crew member Anthony Ponyakov was killed by a local wilflife specimen nicknamed Skullcrusher for its very strong frontal arm which pierces through bones"<<endl;
        score += 25;
    } else {
        cout<<"Wrong!, on Planet 002 01, Crew member Anthony Ponyakov was killed by a local wilflife specimen nicknames Skullcrusher for its very strong frontal arm which pierces through bones "<<endl;
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));
    cout<<" "<<endl;
    cout<<"<==========[Question 4]==========>"<<endl;
    cout<<" "<<endl;

    cout<<"Which Transportation Methods were used by Stellar Empire to attempt invade Milky Way (Multiple Choices)"<<endl;
    cout<<"1. Faster Than Light"<<endl;
    cout<<"2. Alcubierre Engine"<<endl;
    cout<<"3. Quantum Drive"<<endl;
    cout<<"4. Wormhole Manifestation and Frequency Manipulation Mechanism (Bridge)"<<endl;
    cout<<" > ";
    cin>>userChoiceNum1;
    cout<<" > ";
    cin>>userChoiceNum2;

    cout<<" "<<endl;
    if(userChoiceNum1 == 1 && userChoiceNum2 == 4){
        cout<<"Correct!, Stellar Empire had Bridge in dwarf moon galaxy of Milky Way to invade then by using FTL engines, Deus Sentis had disarmed all Bridges in Milky Way except for one secured"<<endl;
        score += 25;
    } else{
        cout<<"Wrong! Stellar Empire had Bridge in dwarf moon galaxy of Milky Way to invade then by using FTL engines, Deus Sentis had disarmed all Bridges in Milky Way except for one secured"<<endl;
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));
    cout<<" "<<endl;
    cout<<"<==========[Question 5]==========>"<<endl;
    cout<<" "<<endl;

    cout<<"Cetus Federal Republic created own galactic time based on PSR J0108−1431 in hatred towards Terra not to use their time system,"<<endl;
    cout<<"True or False?"<<endl;
    cout<<" > ";
    cin>>userChoiceString;

    cout<<" "<<endl;
    if(userChoiceString == "true" || userChoiceString == "TRUE"){
        cout<<"Correct!, It still makes no sense becouse everyone in Milky Way uses Terran as PoI for MOL (Milky Way Galactic Standart Time)"<<endl;
        score += 25;
    } else {
        cout<<"Wrong!, Cetus Federal Republic indeed uses PSR J0108−1431 as their PoI of Galactic Time, which still makes no sense becouse everyone in Milky Way uses Terran as PoI for MOL (Milky Way Galactic Standart Time)"<<endl;
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(3));
    cout<<" "<<endl;
    cout<<"<==========[Question 6]==========>"<<endl;
    cout<<" "<<endl;

    cout<<"How many Planets United LunaTerra has under it's control?"<<endl;
    cout<<" > ";
    cin>>userChoiceNum;

    cout<<" "<<endl;
    if(userChoiceNum == 7){
        cout<<"Correct!, United LunaTerra controls 7 planets in Solar System and Stellar Neighborhood"<<endl;
        score += 25;
    } else {
        cout<<"Wrong!, United LunaTerra has 7 planets under it's control during Astralis Expedition timeframe"<<endl;
        score -= 25;
    }

    this_thread::sleep_for(chrono::seconds(1));
    cout<<" "<<endl;

    cout<<"Which of these Planets belong to United LunaTerra (Multiple choices)"<<endl;
    cout<<"1. 2MASS J23062928-0502285 e"<<endl;
    cout<<"2. Kepler-1649 b, Novrutara"<<endl;
    cout<<"3. Ross 128, Dyson Terra"<<endl;
    cout<<"4. Teegarden's Star C, Jackson's Rest"<<endl;
    cout<<"5. Triton, Neptune"<<endl;
    cout<<" > ";
    cin>>userChoiceNum1;
    cout<<" > ";
    cin>>userChoiceNum2;

    cout<<" "<<endl;
    if(userChoiceNum1 == 3 && userChoiceNum2 == 4){
        cout<<"Correct!, Dyson Terra is  Virgo Autonomous Province, United LunaTerra protectorate, and Jackson's Rest is Aries Autonomous Province, United LunaTerra Protectorate"<<endl;
        score += 25;
    } else{
        cout<<"Wrong!, Under United LunaTerra protectorate are Dyson Terra Virgo Autonomous Province and Jackson's Rest Aries Autonomous Province"<<endl;
        score -= 25;
    }

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout<<"Thank you for playing Distant Worlds Quiz, Your Final Score is: "<< " "<< score <<endl;
    cout<<"Wiki page is still in works so be sure to come back for new articles"<<endl;
    cout<<"mMONTAGEe's Workshop"<<endl;
    this_thread::sleep_for(chrono::seconds(60));
    return 0;
}
