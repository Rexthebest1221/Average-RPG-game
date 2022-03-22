#include <iostream>
#include <string> //String
#include <ctime> // using for like chance and stuffs
#include <cstdlib> //std lib

using namespace std;

int main()
{
    string userName;
    string yN;
    string monsters;
    int maxHp = 20;
    int hp = maxHp;
    int userDamage = 10;
    int alligatorDamage = 10;
    int alligatorHealth = 40;
    int bigfrogDamage = 2;
    int bigfrogHealth = 20;
    int cobraDamage = 5;
    int shrekHealth = 150;
    int shrekDamage = 20;
    int healPower;
    int dice;
    int choice;
    int xp;
    int i;
    
    srand(time(NULL));
    //start of game
    cout<<"---Welcome to the average RPG game---";
    cout<<endl;
    cout<<"             by Me     ";
    cout<<endl<<endl;
    while(true){
    cout<<"What is your name?"<<endl;
    getline(cin, userName);
    cout<<"Your name is "<<userName<<" correct?"<<endl;
    cin>>yN;
    if(yN == "Yes" || yN == "y" || yN == "yes" || yN == "Y"){
        break;
       //end of if for name 
    }else{
        cout<<"What is your name?"<<endl;
        cin>> userName;
        cout<<"Your name is "<<userName<<" correct?"<<endl;
        cin>>yN;
        if(yN == "No" || yN == "no" || yN == "n" || yN == "N"){
            cout<<"I hate you";
            return 0;
        }else{
            break;
        }
        
    }//end of else for name
    }//End of while for name
    cout<<"Let's get onto the game!";
    cout<<endl<<endl;
    cout<<"You're journey starts on you getting kicked out of your village due to you becoming too cool for school";
    cout<<endl<<"You wander into a swamp and find a body that had basic armor and a sword";
    cout<<endl<<"You put on the armor and the sword and gain 5 HP and 5 damage";
    userDamage = userDamage + 5;
    maxHp = maxHp + 5;
    healPower = 5;
    hp = maxHp;
    cout<<endl<<endl;
    while(true){
        string monsters [3] = {"Big Frog", "Cobra", "Alligator"};
        cout<<"What would you like to do?";
        cout<<endl<<endl<<"1. Explore the swamp (Fight monsters :) )";
        cout<<endl<<"2. Check your stats (Current stats in the game are heal power, hp, and damage)";
        cout<<endl<<"3. Fight the boss (Recommend damage is ~50 and health is ~ 75)";
        cout<<endl<<"4. Rest (Heal)";
        cout<<endl<<"5. Leave game"<<endl<<endl;
        cin>>choice;
        if(choice == 1){
            dice = rand()%1 + 1;
            if(dice == 1){
                
                for (int i = 0; bigfrogHealth >= 0; i = i + 1 ){
                cout<<"A wild "<<monsters[0]<<" appears!";
                cout<<endl<<"The "<<monsters[0]<<" has the following stats";
                cout<<endl<<bigfrogHealth<<" HP and "<<bigfrogDamage<<" damage";
                cout<<endl;
                cout<<"Will you"<<endl<<"1. Attack (Current damage is "<<userDamage<<" )";
                cout<<endl<<"2. Heal "<<healPower<<" HP";
                cout<<endl<<"3. Run away"<<endl;
                cin>>choice;
                if(choice == 1){
                    cout<<endl<<endl<<"You attack the Frog";
                    bigfrogHealth = bigfrogHealth - userDamage;
                    cout<<endl<<"The frog attacks back! "<<endl<<"He deals "<<bigfrogDamage<<" damage";
                    hp = hp - bigfrogDamage;
                    cout<<endl<<endl<<"Would you like to"<<endl<<endl<<"1. Attack again"<<endl<<"2. Heal"<<endl<<"3. Run away";
                    cin>>choice;
                    if(choice == 1){
                        cout<<"You attack the frog";
                        if(bigfrogHealth < 0){
                            cout<<endl<<"You have killed the frog";
                            cout<<endl<<"The frog has given you 45 xp";
                            xp = xp + 45;
                            cout<<"You now have "<<xp<<" xp";
                            break;
                            //end of frog death
                        }else{
                            cout<<endl<<"The frog has "<<bigfrogHealth<<" left";
                            //end of somehow not killing the frog when attacking
                        }
                        //end of choice 1
                    }
                    //end of choice 1 for swamp frog combat
                }else if(choice == 2){
                    if(hp < maxHp){
                        cout<<"You heal for "<<healPower<<" HP";
                        hp = hp + healPower;
                        if(hp > maxHp){
                            hp = maxHp;
                        }
                    }else{
                        cout<<"You can't heal BOZO"<<endl<<endl;
                    }
                    //end of choice 2
                }else if(choice == 3){
                    cout<<"You run away";
                    //end of choice 3
                }
                }break;
                //end of while for dice 1
                
                //end of dice 1 for swamp
            }else if (dice == 2){
                cout<<"A wild "<<monsters[1]<<" appears!";
                //end of dice 2 for swamp
            }else if (dice == 3){
                cout<<"A wild "<<monsters[2]<<" appears!";
                //end of dice 3 for swamp
            }
            //end of swamp choice 1
        }else if(choice == 2){
            cout<<endl<<"Your max HP is "<<maxHp<<endl<<"Your damage is "<<userDamage<<endl<<"Your heal power is "<<healPower<<endl;
            cout<<endl<<endl;
            
            //end of swamp choice 2
        }else if(choice == 3){
            cout<<endl<<endl<<"Shrek Appears!";
            cout<<endl<<"Get out of my Swamp!";
            cout<<endl<<"Shreks stats are: "<<shrekHealth<<" HP and "<<shrekDamage<<" damage";
            cout<<endl<<endl;
            cout<<"Would you like to:";
            cout<<endl<<"1. Attack"<<endl<<"2. Heal (Current heal power is "<<healPower<<" )";
            cout<<endl<<"3. Leave game (No running allowed)";
            cin>>choice;
            if(choice == 1);
            //Finish this :|
        }else if(choice == 4){
        cout<<endl<<"You have healed"<<endl;
        hp = maxHp;
        cout<<"Your HP is now "<<hp<<endl<<endl;
        //end of choice 4
    }
    }//swamp area end
    
    
    return 0;
}
