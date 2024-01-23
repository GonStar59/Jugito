// Juego.cpp    
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <windows.h>
#include <fstream>
#include <thread>
#include <chrono>

     void printWithDelay(const std::string& text)
   { int skip=0; 
    for (char c : text) {
        
         std::cout << c << std::flush;
         std::this_thread::sleep_for(std::chrono::milliseconds(25));
         

        
    }
}

    void LevelUP( int &bdamage, int &blife, int &bmana, int &agi, int &bint)
    {
        int secre;
        std::cout << "Boost one stat \n1) Health \n2) Damage\n3) Mana \n4) Intelligence\n5) Agility" << std::endl;
          std::cin >> secre;
          switch (secre) {
            case '1' :
                blife += 1;
               
                break;

            case '2' :
                
                bdamage += 1;
                
                break;

            case '3' :
                
               
                bmana += 1;
                
                break;

            case '4' :
                
                bint += 1;
                break;

            case '5' :
                
                agi += 1;
                break;
            default:
             break;
             return ;
          } 
    }

    void ClassSelect( int &bdamage, int &blife, int &bmana, int &agi, int &bint)
    {
        float clase;
        int secre,clase1;
        std::cout << "Choose a class (1-10):" << std::endl;
        std::cout << "1. Warrior\n2. Mage\n3. Rogue\n4. Paladin\n5. Sorcerer\n";
        std::cout << "6. Berserker\n7. Assassin\n8. Knight\n9. Witch Doctor\n10. Archer\n11. Deprived\n";
        std::cin >> clase;
        clase=clase1;
        clase=clase-clase1;
        if(clase != 0)
        {
         printWithDelay("That its a strange choice, what were you hoping to happen get an easter egg, a see that you semm special so especial that you would enjoy playing the game with zero on all your stats, Aplying changes in 3..2..1..Just joiking you actually got a prizer for opting to take yur own option you will be the all migthy dragon killer with some of the best stats but one of them will fall down \n\n1) Health \n2) Damage \n3) Mana\n 4) Intelligence\n  ");
         std::cin >> secre;
         switch (secre) {
            case '1' :
                blife += -4;
               
                break;

            case '2' :
                
                bdamage += -4;
                
                break;

            case '3' :
                
               
                bmana += -4;
                
                break;

            case '4' :
                
                bint += -4;
                break;

            default:
             std::cout << "learn when to stop" << std::endl;
                blife += -2;
                bdamage += -2;
                bint += -2;
                bmana += -2;
                agi=0;
             return ;
          }   

          std::cout << "Sacrifice Agillity 1) Yes " << std::endl;
          std::cin >> secre;
          if(secre==1){
                agi=0;
                blife += 1;
                bdamage += 1;
                bint += 1;
                bmana += 1;
            }
          std::cout << "Boost first stat \n1) Health \n2) Damage\n3) Mana \n4)Intelligence\n" << std::endl;
          std::cin >> secre;
          switch (secre) {
            case '1' :
                blife += 4;
               
                break;

            case '2' :
                
                bdamage += 4;
                
                break;

            case '3' :
                
               
                bmana += 4;
                
                break;

            case '4' :
                
                bint += 4;
                break;

            default:
             std::cout << "learn when to stop" << std::endl;
                blife += -2;
                bdamage += -2;
                bint += -2;
                bmana += -2;
                agi=0;
             return ;
          } 

          std::cout << "Boost Second stat \n1) Health \n2) Damage\n3) Mana \n4)Intelligence\n" << std::endl;
          std::cin >> secre;
          switch (secre) {
            case '1' :
                blife += 4;
               
                break;

            case '2' :
                
                bdamage += 4;
                
                break;

            case '3' :
                
               
                bmana += 4;
                
                break;

            case '4' :
                
                bint += 4;
                break;

            default:
             std::cout << "learn when to stop" << std::endl;
                blife += -2;
                bdamage += -2;
                bint += -2;
                bmana += -2;
                agi=0;
             return ;
          }         

        }else{
            
         switch (clase1) {
            case '1': // Warrior
                blife += 2;
                bdamage += 2;
                bint += -1;
                break;

            case '2': // Mage
                blife += -1;
                bdamage += -2;
                bint += 2;
                bmana += 2;
                break;

            case '3': // Rogue
                agi += 2;
                break;

            case '4': // Paladin
                blife += 1;
                bdamage += 1;
                bmana += 1;
                agi += -1;
                break;

            case '5': // Sorcerer
                blife += -2;
                bdamage += -1;
                bint += 2;
                bmana += 2;
                break;

            case '6': // Berserker
                blife += 2;
                bdamage += 4;
                bint += -3;
                bmana += -2;
                agi += -2;
                break;

            case '7': // Assassin
                agi += 2;
                blife += -2;
                bdamage += 2;
                break;

            case '8': // Knight
                blife += 4;
                bdamage += -1;
                agi += -2;
                break;

            case '9': // Witch Doctor
                blife += 2;
                bdamage += -2;
                bint += 2;
                break;

            case '10': // Archer
                bdamage += 2;
                agi += 1;
                break;

            case '11': // Deprived
                break;    

            default:
                std::cout << "Invalid class identifier!" << std::endl;
                ClassSelect(bdamage, blife, bmana, agi, bint);
                
            }    
        }
    }

   

    void GuardarProgreso(int Money, int weaponD, int weaponI, int weaponH, int weaponM, int lifes, int weakener, int level,
                    int blife, int bdamage, int bmana, int agi, int bint, int bossfigt,int cabeza,int cuello,int cuerpo,int manos,int anillos,int UP) 
                    {
    std::ofstream archivo("progreso.txt");

    // Guarda las variables en el archivo
    archivo << Money << " " << weaponD << " " << weaponI << " " << weaponH << " " << weaponM << " "
            << lifes << " " << weakener << " " << level << " " << blife << " " << bdamage << " "
            << bmana << " " << agi << " " << bint << " " << bossfigt<< " " << cabeza<< " " << cuello<< " " << cuerpo<< " " << manos<< " " << anillos<<" "<<UP ;

    archivo.close();
}

    void CargarProgreso(int &Money, int &weaponD, int &weaponI, int &weaponH, int &weaponM, int &lifes, int &weakener, int &level,
                    int &blife, int &bdamage, int &bmana, int &agi, int &bint, int &bossfigt,int &cabeza,int &cuello, int &cuerpo, int &manos, int &anillos,int &UP  ) {
    std::ifstream archivo("progreso.txt");

    // Verifica si el archivo se pudo abrir
    if (archivo.is_open()) {
        // Carga las variables desde el archivo
        archivo >> Money >> weaponD >> weaponI >> weaponH >> weaponM >> lifes >> weakener >> level
                >> blife >> bdamage >> bmana >> agi >> bint >> bossfigt >> cabeza >> cuello >> cuerpo >> manos >> anillos >> UP;

        archivo.close();
    } else {
        // Si el archivo no se pudo abrir, asigna valores predeterminados
        Money = 0;
        weaponD = 0;
        weaponI = 0;
        weaponH = 0;
        weaponM = 0;
        lifes = 0;
        weakener = 0;
        level = 0;
        blife = 0;
        bdamage = 0;
        bmana = 0;
        agi = 0;
        bint = 0;
    }
}


    void Buy(int &Money,int &weaponD,int &weaponI,int &cabeza,int &cuello,int &cuerpo,int &manos,int &anillos,int &weaponH,int &weaponM)
    {   
        int action,Comprando,action2;
        Comprando=0;
        action=0;
       
        while(Comprando==0){
        std::cout <<"You have: "<<Money<<" Gold coins\n";    
        std::cout <<"press 1 to buy a weapon,\n 2 to rings,\n 3 to buy necklace,\n 4 to buy Armor,\n 5 to go to the Magic shop,\n 6 to stop buying"<< std::endl;
        std::cin >>action;
            if (action==1)
            {
                std::cout <<"press 1 to buy a dagger(20) ,\n 2 to buy the an axe(50),\n 3 to buy the elven bow (100),\n 4 to buy Gungnirs spear(300),\n 5 to buy the Hero's Sword(500)"<< std::endl;
                std::cin >>action2;
                     if (action2==1 && Money>=20 && manos<1)
                     {
                            manos=1;    
                     } 
                     else if (action2==2 && Money>=50 && manos<2)
                     {
                            manos=2;      
                                
                     }   
                     else if (action2==3 && Money>=100 && manos<3)
                     {
                            manos=3;     
                                
                     }   
                     else if (action2==4 && Money>=300 && manos<4)
                     {
                                
                            manos=4;      
                     }  
                     else if (action2==5 && Money>=500 && manos<5)
                     {
                            manos=5;    
                     }
                     else
                     {
                      std::cout <<"Non existent or you don't have enough money"<< std::endl; 
                      
                     }          
            } 
            if (action==2)
            {
                std::cout <<"press 1 to buy the minor intelligence (20) ,\n 2 to buy the minor mana ring (50),\n 3 to buy the Health ring (100),\n 4 to buy Rage of H. (300),\n 5 to buy the  double ring of Arcane and Necromancy(500)"<< std::endl;
                std::cin >>action2;
                 if (action2==1 && Money>=20 && anillos<1)
                     {
                            anillos=1;    
                     } 
                     else if (action2==2 && Money>=50 && anillos<2)
                     {
                            anillos=2;      
                                
                     }   
                     else if (action2==3 && Money>=100 && anillos<3)
                     {
                            anillos=3;     
                                
                     }   
                     else if (action2==4 && Money>=300 && anillos<4)
                     {
                                
                            anillos=4;      
                     }  
                     else if (action2==5 && Money>=500 && anillos<5)
                     {
                            anillos=5;    
                     }
                     else
                     {
                      std::cout <<"Non existent or you don't have enough money"<< std::endl; 
                      
                     }          
                
            }   
            if (action==3)
            {
                std::cout <<"press 1 to buy a a silver chain(20) ,\n 2 to buy the intelligence locket(50),\n 3 to buy the Anger Chain (100),\n 4 to buy the Health Necklace(200),\n 5 to buy the Flilosophers pendant(400)"<< std::endl;
                std::cin >>action2;
                 if (action2==1 && Money>=20 && cuello<1)
                     {
                            cuello=1;    
                     } 
                     else if (action2==2 && Money>=50 && cuello<2)
                     {
                            cuello=2;      
                                
                     }   
                     else if (action2==3 && Money>=100 && cuello<3)
                     {
                            cuello=3;     
                                
                     }   
                     else if (action2==4 && Money>=200 && cuello<4)
                     {
                                
                            cuello=4;      
                     }  
                     else if (action2==5 && Money>=400 && cuello<5)
                     {
                            cuello=5;    
                     }
                     else
                     {
                      std::cout <<"Non existent or you don't have enough money"<< std::endl; 
                      
                     }          
                
            }   
            if (action==4)
            {
                std::cout <<"press 1 to buy a chainmail(20) ,\n 2 to buy a Full armour (50),\n 3 to buy a dwarf armour (100),\n 4 to buy Achilles Armour copy(300),\n 5 to buy the Dragon scale armour(500)"<< std::endl;
                std::cin >>action2;
                 if (action2==1 && Money>=20 && cuerpo<1)
                     {
                            cuerpo=1;    
                     } 
                     else if (action2==2 && Money>=50 && cuerpo<2)
                     {
                            cuerpo=2;      
                                
                     }   
                     else if (action2==3 && Money>=100 && cuerpo<3)
                     {
                            cuerpo=3;     
                                
                     }   
                     else if (action2==4 && Money>=300 && cuerpo<4)
                     {
                                
                            cuerpo=4;      
                     }  
                     else if (action2==5 && Money>=500 && cuerpo<5)
                     {
                            cuerpo=5;    
                     }
                     else
                     {
                      std::cout <<"Non existent or you don't have enough money"<< std::endl; 
                      
                     }          
                
            }  
            if (action==5)
            {
                std::cout <<"press 1 to buy a wand(20),\n 2 to buy a grimoire(50),\n 3 to buy the Scepter of thunther (80),\n 4 to buy the staff of life(200),\n 5 to buy the Necronomicon(600)"<< std::endl;
                std::cin >>action2; 
                 if (action2==1 && Money>=20 && cabeza<1)
                     {
                            cabeza=1;    
                     } 
                     else if (action2==2 && Money>=50 && cabeza<2)
                     {
                            cabeza=2;      
                                
                     }   
                     else if (action2==3 && Money>=80 && cabeza<3)
                     {
                            cabeza=3;     
                                
                     }   
                     else if (action2==4 && Money>=200 && cabeza<4)
                     {
                                
                            cabeza=4;      
                     }  
                     else if (action2==5 && Money>=600 && cabeza<5)
                     {
                            cabeza=5;    
                     }
                     else
                     {
                      std::cout <<"Non existent or you don't have enough money"<< std::endl; 
                      
                     }          
            } 
            if (action==6)
            {
              std::cout <<"You left the shoping center"<< std::endl;
              Comprando=1;  
            }
        }
        weaponD=0;
        weaponH=0;
        weaponI=0;
        weaponM=0;
        switch (manos)
        {
        case 1:
            weaponD=weaponD+20;
            break;
         case 2:
            weaponD=weaponD+50;
            break;
         case 3:
            weaponD=weaponD+200;
            break;
         case 4:
            weaponD=weaponD+600; 
            break;
         case 5:
            weaponD=weaponD+1000;
            weaponH=weaponH+1000;
            break;
        
        default:
            break;
        }

        switch (anillos)
        {
         case 1:
            weaponI=weaponI+20;
            break;
         case 2:
            weaponM=weaponM+50;
            break;
         case 3:
            weaponH=weaponH+400;
            break;
         case 4:
            weaponD=weaponD+600; 
            break;
         case 5:
            weaponI=weaponI+1200;
            weaponM=weaponM+500;
            break;
        
        default:
            break;
        } 

        switch (cuello)
        {
         case 1:
            weaponD=weaponD+20;
            break;
         case 2:
            weaponI=weaponI+50;
            break;
         case 3:
            weaponD=weaponD+200;
            break;
         case 4:
            weaponH=weaponH+1200; 
            break;
         case 5:
            weaponM=weaponM+1500;
           
            break;
        
        default:
            break;
        } 

        switch (cuerpo)
        {
         case 1:
            weaponH=weaponH+40;
            break;
         case 2:
            weaponH=weaponH+100;
            break;
         case 3:
            weaponH=weaponH+400;
            break;
         case 4:
            weaponH=weaponH+1200; 
            break;
         case 5:
            weaponD=weaponD+100;
            weaponH=weaponH+2000;
            break;
        
        default:
            break;
        } 

        switch (cabeza)
        {
         case 1:
            weaponI=weaponI+20;
            break;
         case 2:
            weaponI=weaponI+50;
            break;
         case 3:
            weaponI=weaponI+200;
            break;
         case 4:
            weaponI=weaponI+500; 
            weaponH=weaponH+200;
            break;
         case 5:
            weaponI=weaponI+1700;
            
            break;
        
        default:
            break;
        } 
        std::cout <<"Your weapon damage is "<<weaponD<<"Your armour health is "<<weaponH<<"your artifacs mana is "<<weaponM<<" mana"<<"your weapon intelligence is "<<weaponI<<std::endl;                      
    }
    void Magic(int &inteligence, int &mana, int &health, int &ehealth,int &stun,int &damage,int &conti)
    {
        int action,turn;
        turn=0;    
        std::cout <<"press 1 to use a thunder(25 mana), 2 to heal(100 mana), 3 to vines(250 mana) , 4 to use fire punch/slash(1500 mana), 5 to use weak magic (0 mana)\n"<< std::endl;
        std::cin >>action;
        while(turn=0){ 
        if (action==1 && mana>=20)
        {
            srand(time(0));
            int roll = std::rand() % (4 - 1) + 1;
            ehealth=ehealth-inteligence*roll; 
            mana=mana-20;
            turn=1;
            break;

        }   else if (action==1){std::cout <<"No mana try another one"<< std::endl;}

        if (action==2 && mana>=100)
        {
            srand(time(0));
            int roll = std::rand() % (5 - 1) + 1; 
            health=health+inteligence*roll;
            mana=mana-100;
             turn=1;
            break;
              
        }   else if (action==2){std::cout <<"No mana try another one"<< std::endl;}

        if (action==3 && mana>=250)
        {   
           srand(time(0));
            int roll = std::rand() % (4 - 2) + 1; 
            stun=roll;
            mana=mana-250;
             turn=1;
            break;

        }   else if (action==3){std::cout <<"No mana try another one"<< std::endl;}

        if (action==4 && mana>=1500)
        {
            srand(time(0));
            int roll = std::rand() % (3 - 2) + 1;
            ehealth=ehealth-(inteligence+damage)*roll;
            srand(time(0));
            roll = std::rand() % (5 - 2) + 1;
            roll=conti;
            mana=mana-1500;
             turn=1;
            break;
        }   else if (action==4){std::cout <<"No mana try another one"<< std::endl;}

        if (action==5)
        {
          ehealth=ehealth-inteligence;
           turn=1;
          break;
        } 


    }}
    void pelear(int &blife, int &bdamage, int &elife, int &edamage, int &level, int &elevel, int &lifes, int &health, int &ehealth, int &action, int &weakener, int &bmana, int &agi, int &bint, int &bossfigt, int &weaponD, int &weaponI,int &weaponH, int &weaponM, int &escape){
    int mana,inteligence,stun,damage,contid,conti,agiLevel;    
    ehealth=elife*elevel;
    health=blife*level*2+weaponH;
    mana=bmana*level+weaponM;
    agiLevel=agi*level;
    inteligence=bint*level+weaponI;
    damage=bdamage*level+weaponD;
    escape = 0;
    stun=0;
    conti=0;
    contid=inteligence;
    while (health > 0 && ehealth > 0 && escape != 1 ) {
        if (stun<0)
        {
            stun=0;
        }
        if (conti<0)
        {
            conti=0;
        }
        
        std::cout <<"Your level is : "<<level<<", your damage is "<<damage<<" , your life is "<<health<<" , you have remaining "<<mana<<" mana "<<" your intelligence is "<<inteligence<<std::endl;
        std::cout <<"The enemy level is : "<<elevel<<" , the enemy damage is "<<edamage*elevel<<" , the enemys life is "<<ehealth<< std::endl;
        std::cout <<"You have: "<<lifes<<"lifes remaining\n";
        std::cout <<"The enemy is stuned for "<<stun<<" turns\n";
        std::cout <<"The enemy is burnt for "<<conti<<" turns\n";
        std::cout <<"press 1 to attack, 2 to defend, 3 to run, 4 to use magic"<< std::endl;
        std::cin >>action;
        if (action==1)
        {
            if(stun<=0){health=health-edamage*elevel+weaponH/2;}
            ehealth=ehealth-damage;
            conti=conti-1;
            if( health <= 0 ) {std::cout <<"You Died"<< std::endl;
            lifes=lifes-1;
            }
            if( ehealth <= 0 ) {std::cout <<"You Won"<< std::endl;
    
             weakener= weakener-1;
             } 
             stun=stun-1;   
        }
        if (action==2)
        {
            ehealth=ehealth-contid;
            conti=conti-1;
            srand(time(0));
         int defense = rand() % (16 - 1) + 1;
            if(defense*level>edamage*elevel) {std::cout <<"Your great defense let you rest and healed you"<< std::endl; }

            if(stun<=0){health=health-edamage*elevel+defense*level;}else{health=health+defense*level;}

            if( health <= 0 ) {std::cout <<"You Died"<< std::endl;
            lifes=lifes-1;
            }
             stun=stun-1; 
        }
        if ( action == 3 && bossfigt != 1)
        {   
            ehealth=ehealth-contid;
            conti=conti-1;
            std::srand(std::time(0));
             int evasion = std::rand() % 10; 
             std::srand(std::time(0));
             int Eevasion = std::rand() % 21; 
            if( evasion + level +agiLevel >= elevel+Eevasion ) {std::cout <<"you run succesfully"<<std::endl;
            escape=1;
            }
            else
            {
                if(stun<=0){health=health-edamage*elevel+weaponH/2;}
                if( health <= 0 ) {std::cout <<"You Died"<< std::endl;
                lifes=lifes-1;
            }
            }
            stun=stun-1;
        }else if (action==3){std::cout <<"No runing from bossfigth's coward"<<std::endl;}
        if (action==4)
        {
          Magic(inteligence,mana,health,ehealth,stun,damage,conti); 
            if(stun<=0){health=health-edamage*elevel+weaponH/2;}
            ehealth=ehealth-contid;
            conti=conti-1;
            if( health <= 0 ) {std::cout <<"You Died"<< std::endl;
            lifes=lifes-1;
            }
            if( ehealth <= 0 ) {std::cout <<"You Won"<< std::endl;
    
             weakener= weakener-1;
             } 
             stun=stun-1;     
        }
    }
    


    }
    
    int main () 
    {
     int UP;
     int  blife,bdamage,elife,edamage,roll,spin1,e,run,level,elevel,disaster,health,ehealth,evasion,action,defense,escape,lifes,weakener,boss,ilev,bmana,agi,bint,bossfigt,shop,weaponD,weaponI,Money,cabeza,cuello,cuerpo,manos,anillos,weaponH,weaponM;
        elife=15;
        edamage=10; 
        level=1;
        elevel=1;
        lifes=3;
        bdamage=0;
        blife=0;
        weakener=0;
        boss=0;
        bmana=0;
        agi=0;
        bint=0;
        bossfigt=0;
        shop=5;
        weaponD=0;
        weaponH=0;
        weaponI=0;
        weaponM=0;
        Money=0;
        UP,cuello,cuerpo,manos,anillos=0;
        std::cout <<"Press 1 to load your progress\n";
        std::cin >>spin1;
        if(spin1==1){
          CargarProgreso(Money, weaponD, weaponI, weaponH,  weaponM,  lifes,  weakener, level, blife,  bdamage,  bmana,  agi,  bint, bossfigt, cabeza,cuello,cuerpo,manos,anillos,UP);
            
        }
        do{

          if(bdamage==0 && blife==0 && bmana==0 && agi==0 && bint==0)  {
    do{
     std::cout <<"Press 0 to spin Health\n";
     std::cin >>spin1;
     if(spin1==0) {
        srand(time(0));
        int roll = std::rand() % (21 - 5) + 5;
        blife=roll;
         std::cout <<"Your base health is: "<<blife;
     }
    }while(blife==0);
    do{
      std::cout <<"Press 9 to spin Damage\n";
      std::cin >>spin1;
     if(spin1==9) {
        srand(time(0));
        int roll = rand() % (21 - 4) + 4;
        bdamage=roll;
         std::cout <<"Your base damage is: "<<bdamage<<std::endl;
     }
     }while(bdamage==0);
     do{
      std::cout <<"Press 0 to spin Mana\n";
     std::cin >>spin1;
     if(spin1==0) {
        srand(time(0));
        int roll = std::rand() % (21 - 4) + 4;
        bmana=roll;
         std::cout <<"Your base mana is: "<<bmana;
     }
     }while(bmana==0);
     do{
      std::cout <<"Press 9 to spin Evasion\n";
      std::cin >>spin1;
     if(spin1==9) {
        srand(time(0));
        int roll = rand() % (21 - 4) + 4;
        agi=roll;
         std::cout <<"Your base Evasion is: "<<agi<<std::endl;
      }
     }while(agi==0);
     do{
     std::cout <<"Press 0 to spin Intelligence\n";
     std::cin >>spin1;
     if(spin1==0) {
        srand(time(0));
        int roll = std::rand() % (21 - 4) + 4;
        bint=roll;
         std::cout <<"Your base inteligence is: "<<bint<<std::endl;
     }
     }while(bint==0);
        ClassSelect(bdamage, blife, bmana, agi, bint);
        Sleep(2000);
        printWithDelay("In a peaceful and prosperous kingdom, a sinister threat loomed in the shadows.\n The Demon King, accompanied by his seven generals, launched a devastating attack on the land, plunging everything into chaos and despair.\nFaced with imminent destruction, the King of the realm, knowing that an epic battle was on the horizon, summoned his bravest subjects.\n Among the crowd, his gaze fell upon you, a courageous and determined young individual.\n You were chosen as the hero destined to confront the evil that threatened to engulf your home.\nDespite the uncertainty and fear, you accepted your role with determination.\n The king bestowed upon you a legendary sword and ancestral armor, trusting that you could lead the resistance against the dark forces.\nWith a heavy heart, you bid farewell to your family, promising to return and preserve the peace they had always known.\n The journey ahead was perilous, but the fate of the kingdom rested on your shoulders as you set out to face the malevolent onslaught of the Demon King and his seven generals.\nYour adventure was just starting.\n");
        }
    
    do
    {
     GuardarProgreso(Money, weaponD, weaponI, weaponH,  weaponM,  lifes,  weakener, level, blife,  bdamage,  bmana,  agi,  bint, bossfigt,cabeza,cuello,cuerpo,manos,anillos,UP);   
     std::mt19937 rng(static_cast<unsigned int>(std::time(0))); // Seed the random number generator
     std::uniform_int_distribution<int> distribution(1, 10);

     int e;

     // Generate a number between 1 and 10 with custom probabilities
     int randomNumber = distribution(rng);

     if (randomNumber == 1 || randomNumber == 10) {
        // 1 and 10 are less probable, occur with 1/20 chance each
        e = distribution(rng);
    } else {
        // Other numbers are more probable, occur with 2/20 chance each
        std::uniform_int_distribution<int> otherDistribution(2, 8);
        e = otherDistribution(rng);
    }

    std::cout << "You got: " << e << std::endl;

        escape=0;
        if (lifes<=0)
        {
            std::cout <<"Restarting\n";
            elife=10;
         edamage=5; 
         level=1;
         elevel=1;
         lifes=3;
         bdamage=0;
         blife=0;
         weakener=0;
            break;
        }
        if (level>=UP)
        {
         LevelUP(bdamage, blife, bmana, agi, bint);
         UP +=100;  
        }
        
        if (e==shop)
        {
            std::cout <<"You entered a shop to buy items \n";
            Buy(Money,weaponD,weaponI,cabeza,cuello,cuerpo,manos,anillos,weaponH,weaponM);
            srand(time(0));
            int shop = std::rand() % (11 - 1) +1;
        }
        
        if(level>100&&boss==0){
        std::cout <<"The General of the Pride makes its apereance \n";
        elevel=2*level-weakener-e;
        ilev=lifes;
        bossfigt=1;
        pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
        if(lifes==ilev && escape!=1){level=level+60;
        boss=boss+1;
        Money=Money+120;
        }bossfigt=0;}

        if(level>180&&boss==1){
        std::cout <<"The General of the Sloth makes its apereance \n";
        elevel=3*level-weakener-e;
        ilev=lifes;
        bossfigt=1;
        pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
        if(lifes==ilev && escape!=1){level=level+80;
        boss=boss+1;
        Money=Money+180;}bossfigt=0;}

        if(level>270&&boss==2){
        std::cout <<"The General of the Envy makes its apereance \n";
        elevel=3*level-weakener-e;
        ilev=lifes;
         bossfigt=1;
        pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
        if(lifes==ilev && escape!=1){level=level+80;
        boss=boss+1;
        Money=Money+180;}bossfigt=0;}

        if(level>390&&boss==3){
        std::cout <<"The General of the Greed makes its apereance \n";
        elevel=3*level-weakener-e;
        ilev=lifes;
         bossfigt=1;
        pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
        if(lifes==ilev && escape!=1){level=level+90;
        boss=boss+1;
        Money=Money+290;}bossfigt=0;}

        if(level>490&&boss==4){
        std::cout <<"The General of the Gluttony makes its apereance \n";
        elevel=3*level-weakener-e;
        ilev=lifes;
         bossfigt=1;
        pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
        if(lifes==ilev && escape!=1){level=level+100;
        boss=boss+1;
        Money=Money+400;}bossfigt=0;}

        if(level>610&&boss==5){
        std::cout <<"The General of the Lust makes its apereance \n";
        elevel=4*level-weakener-e;
        ilev=lifes;
         bossfigt=1;
        pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
        if(lifes==ilev && escape!=1){level=level+150;
        boss=boss+1;
        Money=Money+500;}bossfigt=0;}

        if(level>780&&boss==6){
        std::cout <<"The General of the Wrath makes its apereance \n";
        elevel=4*level-weakener-e;
        ilev=lifes;
         bossfigt=1;
        pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
        if(lifes==ilev && escape!=1){level=level+200;
        boss=boss+1;
        Money=Money+1000;}bossfigt=0;}

        if(level>1000&&boss==7){
        std::cout <<"The Demon King makes its apereance \n";
        elevel=5*level-weakener-e;
        ilev=lifes;
        bossfigt=1;
        pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
        if(lifes==ilev && escape!=1){level=level+1000;
        boss=boss+1;}bossfigt=0;}
        if(boss==8){
        
         if(e==1){std::cout <<"When you return to the kingdom every one greats you as their savior,\n sadly the king kills you afraid you try to take control the kingdom while he takes your family as prisioner so they dont speak  \n";}
         if(e==2){std::cout <<"When you return to the kingdom every one greats you as their savior,\n despite your efforts, the kingdom does not thrive and descends into despair.\n";}
         if(e==3){std::cout <<"When you return to the kingdom every one greats you as their savior,\n although the kingdom is saved, irreparable losses occur, and not all problems are resolved. Bringing lot of poverty \n";}
         if(e==4){std::cout <<"When you return to the kingdom every one greats you as their savior,\n despite saving the kingdom, you endure significant personal sacrifices, losing loved ones or suffering profound consequences. Victory comes at a price, but the realm recovers.\n";}
         if(e==5){std::cout <<"Upon your return to the kingdom, everyone welcomes you as their savior.\n Your heroic efforts not only save the kingdom but also lead to diplomatic successes, forging alliances with neighboring realms and creating a peaceful, interconnected region. \n";}
         if(e==6){std::cout <<"Back in the kingdom, you are warmly welcomed by all as their hero.\n Triumphant, you bring the kingdom together, fostering unity among its people, and your leadership inspires a new era of cooperation and prosperity. \n";}
         if(e==7){std::cout <<" Joyously, you successfully save the kingdom, restore peace, and are hailed as a hero, establishing a just government and finding personal happiness. Ascening your family as dukes\n";}
         if(e==8){std::cout <<"As you come back to the realm, you are greeted by all as the one who saved them. Though facing challenges, you establish a lasting legacy as a hero, with the kingdom flourishing under the principles and values you instilled during your quest. \n";}
         if(e==9){std::cout <<"At your arrival, the people of the kingdom, grateful for your sacrifices, immortalize your deeds, establishing traditions and celebrations that honor your role in saving the realm.\n";}
         if(e==10){std::cout <<"The entire kingdom greets you as their savior upon your return.Marring the Princes and becoming the king. Your wise governance ensures a period of prosperity for the kingdom, with economic growth, social harmony, and cultural richness becoming hallmarks of your reign.\n";}
         break;  
        }

        if (e==1)
        {
         std::cout <<"You encountered a dragon \n";   
         elevel=level+20-weakener;
         ilev=lifes;
         pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
         if(lifes==ilev && escape!=1){level=level+20;
         Money=Money+20;}
        }
         if (e==2)
        {
         std::cout <<"You found a Hord of Wyverns\n";   /* code */
         elevel=level+6-weakener;
         ilev=lifes;
         pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
         if(lifes==ilev && escape!=1){level=level+6;
         Money=Money+10;}
        }
         if (e==3)
        {
         std::cout <<"A natural diaster occur you may not survive\n";   /* code */
         srand(time(0));
         int disaster = rand() % (101 - 1) + 1;
         if(disaster==1){ std::cout <<"You died\n";
         lifes=lifes-2;}
         else
         {
            Sleep(2000);
            std::cout <<"You survived\n";
            weakener=weakener-2;
         }
         
        }
         if (e==4)
        {
         std::cout <<"You ara attacked by a bear\n";   /* code */
         elevel=level+3-weakener;
         ilev=lifes;
         pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
         if(lifes==ilev && escape!=1){ level=level+3;
         Money=Money+10;
        }}
         if (e==5)
        {
         std::cout <<"You lay down and relax for a while weakening enemys level\n";   /* code */
            weakener=weakener+1;
        }
         if (e==6)
        {
         std::cout <<"you are ambushed by a group of bandits\n";   /* code */
         elevel=level+1-weakener;
         ilev=lifes;
         pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
          if(lifes==ilev && escape!=1){level=level+2;
          Money=Money+10;
        }}
         if (e==7)
        {
         std::cout <<"you found a goblin\n";   /* code */
         elevel=level-weakener ;
         ilev=lifes;
         pelear(blife, bdamage, elife, edamage, level, elevel, lifes, ehealth, health, action,weakener,bmana,agi,bint,bossfigt,weaponD,weaponI,weaponH,weaponM,escape);
          if(lifes==ilev && escape!=1){level=level+2;
          Money=Money+10;
        }}
         if (e==8)
        {
         std::cout <<"A magic shrine increase your level by 2\n";   /* code */
         level=level+2 ;
         Money=Money+10;
         std::cout <<"Your level is : "<<level<<", your damage is "<<bdamage*level<<", your life is "<<blife*level*2<< std::endl;
        }
         if (e==9)
        {
         std::cout <<"You found a heavily injured dragon a you en his lives increasing your level by 5\n";   /* code */
         level=level+6 ;
         Money=Money+20;
         std::cout <<"Your level is : "<<level<<", your damage is "<<bdamage*level<<", your life is "<<blife*level*2<< std::endl;
        }
         if (e==10)
        {
         std::cout <<"A divine gift increase all your stats by 2 and gave you an extra life \n";  
         blife += 2;
         bdamage += 2;
         bint += -2;
         bmana += 2;
         agi +=2;

         lifes=lifes+1;
         Money=Money+100;
         std::cout <<"Your level is : "<<level<<", your damage is "<<bdamage*level<<", your life is "<<blife*level*2<< std::endl;
         std::cout <<"You have: "<<lifes<<" lifes remaining\n";
        }
        std::cout <<"Press 0 to continue your journey\n";
        std::cin >>run;
    } while (run==0);
   
    
     

        } while (lifes > 0);
        return 0;
    }
