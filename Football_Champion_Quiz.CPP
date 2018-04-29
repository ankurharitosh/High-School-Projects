#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<dos.h>
void main()
{
clrscr();
int i=0;
int a;
cout<<"                              THE FOOTBALL CHAMPION QUIZ ";
cout<<"\n                              ---------------------------";
cout<<"\n\nChoose a Football Quiz category -";
cout<<"\n1. World Cup                 2.UEFA Champions League ";
cout<<"\n3. Barclays Premier League   4. Spanish La Liga ";
cout<<"\nCategory = ";
cin>>a;
switch(a)
{
case 1:cout<<"\n\n                                    World Cup Quiz";
       cout<<"\n                                    -----------------";
       delay(1500);
       cout<<"\nQ1 Where will the 2022 WORLD CUP be held ?";
       cout<<"\n1. Brasil              2. Qatar";
       cout<<"\n3. Russia              4. United States of America";
       cout<<"\nYour answer is ";
       cin>>a;
       if(a==2)
       {
	  i++;
	  cout<<"\nYour answer is";
	  delay(630);
	  cout<<" correct!!!";
       }
       else
       {
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";
       }
       delay(700);
       cout<<"\n\nAnswer : Qatar";
       delay(400);
       cout<<"\n\nQ2 Which player has played in the WORLD CUP the most no. of times ?";
       cout<<"\n1. Pele                2. Gerd Muller";
       cout<<"\n3.Franz Beckenbaeur    4. Lothar Matthaus";
       cout<<"\nYour answer is ";
       cin>>a;
       if(a==4)
       {
       i++;
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"correct!!!";
       }
       if(a!=4)
       {
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";
       }
       delay(700);
       cout<<"\n\nAnswer : Lothar Matthaus";
       delay(400);
       cout<<"\n\nQ3 In which country was the 2002 WORLD CUP held ?";
       cout<<"\n1. South Korea/Japan      2. Italy";
       cout<<"\n3. Uruguay                4. Chile";
       cout<<"\nYour answer is ";
       cin>>a;
       if(a==1)
       {
	 i++;
	 cout<<"\nYour answer is ";
	 delay(630);
	 cout<<"correct!!!";
       }
       if(a!=1)
       {
	cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";
       }
       delay(700);
       cout<<"\n\nAnswer : South Korea/Japan";
       delay(400);
       cout<<"\n\nQ4 Mexico goalkeeper Guillermo Ochoa frustrated as many strikers as he thrilled fans but which club he play for at the time of the 2014 WORLD CUP ?";
       cout<<"\n1. LA GALAXY              2. He was a FREE AGENT";
       cout<<"\n3. Club America           4. Almeria FC";
       cout<<"\nYour answer is ";
       cin>>a;
       if(a==2)
       i++;
       if(a==2)
       {cout<<"\nYour answer is ";
       delay(630);
       cout<<"correct!!!"; }
       if(a!=2)
       {cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";   }
       delay(700);
       cout<<"\n\nAnswer : He was a FREE AGENT";
       delay(400);
       cout<<"\n\nQ5 Mario Gotze scored the winning goal for Germany in the World Cup Final. But  who made the assist ?";
       cout<<"\n1. Lukas Podolski          2. Thomus Muller";
       cout<<"\n3. Andre Schhurle          4. Mesut Ozil ";
       cout<<"\nYour answer is ";
       cin>>a;
       if(a==3)
       {
       i++;
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"correct!!! ";
       }
       if(a!=3)
       {cout<<"Your answer is ";
       delay(630);
       cout<<"wrong!!!";}
       delay(700);
       cout<<"\n\nAnswer : Andre Schhurle";
       delay(400);
       cout<<"\n\nQ6 Which player broke the record for being the fastest footballer on the planet in the World cup ?";
       cout<<"\n1. Diego Maradona          2. Theo Wallcott";
       cout<<"\n3. Arjen Robben            4. Lionel Messi";
       cout<<"\nYour answer is ";
       cin>>a;
       if(a==3)
       {
       i++;
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"correct!!!";
       }
       if(a!=3)
       {cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";}
       delay(700);
       cout<<"\n\nAnswer : Arjen Robben";
       delay(400);
       cout<<"\n\nQ7 Italy met Uruguay in Group D of the FIFA World Cup.In the 80th minute, Luis  Suarez bit Italian Defender Giorgio Chiellini. What Happened just one minute     after ?";
       cout<<"\n1. Claudio Marchisio was sent off           2. Uruguay scored";
       cout<<"\n3. The Referee Slipped                      4. Mario Balotelli pulled ";
       cout<<"\n                                               Alvaro Pereira's hair";
       cout<<"\nYour answer is = ";
       cin>>a;
       if(a==2)
       {
       i++;
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"correct!!!";
       }
       if(a!=2)
       {cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";}
       delay(700);
       cout<<"\n\nAnswer : Uruguay scored";
       delay(400);
       cout<<"\n\nQ8 An incredible 30 goals were scored in the opening games of the group stage . But which match was the first 0-0 ?";
       cout<<"\n1. Iran vs Nigeria                        2. Greece vs Ivory Coast";
       cout<<"\n3. England vs Costa Rica                  4. France vs Ecuador";
       cout<<"\nYour answer is = ";
       cin>>a;
       if(a==1)
       {
       i++;
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"correct!!!";
       }
       if(a!=1)
       {cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";}
       delay(700);
       cout<<"\n\nAnswer : Iran vs Nigeria";
       delay(400);
       cout<<"\n\nQ9 Thomus Muller scored a hat-trick in the match between Germany and Portugal . But which other German also scored ?";
       cout<<"\n1. Per Mertesacker                        2. Mario Goetze";
       cout<<"\n3. Mesut Ozil                             4. Mats Hummels";
       cout<<"\nYour answer is = ";
       cin>>a;
       if(a==4)
       {
       i++;
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"correct!!!";
       }
       if(a!=4)
       {cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";}
       delay(700);
       cout<<"\n\nAnswer : Mats Hummels";
       delay(400);
       cout<<"\n\nQ10 Argentina and Netherland faced off in the semifinal of the 2014 World Cup.  Which two Dutch Players Missed their penalties in the penalty shootout in which Argentina won ?";
       cout<<"\n1. Arjen Robben and Robin Van Persie      2. Vlaar and Sneijder";
       cout<<"\n3. De Guzman and Janmaat                  4. Vlaar and Janmaat";
       cout<<"\nYour answer is = ";
       cin>>a;
       if(a==2)
       {
       i++;
       cout<<"\nYour answer is ";
       delay(630);
       cout<<"correct!!!";
       }
       if(a!=2)
       {cout<<"\nYour answer is ";
       delay(630);
       cout<<"wrong!!!";}
       delay(700);
       cout<<"\n\nAnswer : Vlaar and Sneijder";
       delay(450);
       cout<<"\n\n\nYour total score = "<<i<<" out of 10.";
       cout<<"\nYour percentage is "<<i*100/10<<" %";
       cout<<"\n\n\n                                 THE END";
       cout<<"\n                      --------------------------------";
       break;
       case 2:cout<<"                          THE UEFA CHAMPIONS LEAGUE QUIZ";
	      cout<<"\n                          ------------------------------";
	      delay(1500);
	      cout<<"\n\nQ1 In which stadium did the 2013-14 UEFA CHAMPIONS LEAGUE FINAL took place ?";
	      cout<<"\n1. Estadio do Dragao        2. Estadio da Luz ";
	      cout<<"\n3. Stade de France          4. Stadio Olimpico";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==2)
	      {
	      cout<<"\nYour answer is ";
	      delay(630);
	      cout<<"correct!!!";
	      i=i++;
	      }
	      if(a!=2)
	      {cout<<"\nYour answer is wrong!!!";   }
	      delay(700);
	      cout<<"\n\nAnswer : Estadio da Luz";
	      delay(400);
	      cout<<"\n\nQ2 How many English teams have won the Champions League/European Cup so far ?";
	      cout<<"\n1. Three                    2. Four ";
	      cout<<"\n3. Five                     4. Six";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==3)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=3)
	      {cout<<"\nYour answer is wrong!!!";     }
	      delay(700);
	      cout<<"\n\nAnswer : Five";
	      delay(400);
	      cout<<"\n\nQ3 Which team did Luiz Suarez play for before his move to Liverpool ?";
	      cout<<"\n1. Santos FC                         2. Barcelona";
	      cout<<"\n3. PSV Eindhoven	             4. Ajax";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==4)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=4)
	      {cout<<"\nYour answer is wrong!!!";  }
	      delay(700);
	      cout<<"\n\nAnswer : Ajax";
	      delay(400);
	      cout<<"\n\nQ4 How many goals has Raul Gonzalves scored in the Champions League ?";
	      cout<<"\n1. 71                       2. 68";
	      cout<<"\n3. 67                       4. 73";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==1)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=1)
	     { cout<<"\nYour answer is wrong!!!";    }
	      delay(700);
	      cout<<"\n\nAnswer : 71";
	      delay(400);
	      cout<<"\n\nQ5 Who was the Manager of the team that led Fulham to the Europa League Final ?";
	      cout<<"\n1. Brendan Rodgers             2. Harry Redknap";
	      cout<<"\n3. Roy Hudson                  4. Micheal Landraup";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==3)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=3)
	      {cout<<"\nYour answer is wrong!!!";}
	      delay(700);
	      cout<<"\n\nAnswer : Roy Hudson";
	      delay(400);
	      cout<<"\n\nQ6 3 of 4 the teams in Group F consisting of Arsenal, Borrusia Dortmund , Napoli & Marseille of the Champions League in the season 2013-14 finished with  same  points . How many points they had ?";
	      cout<<"\n1. 10                          2. 9";
	      cout<<"\n3. 11                          4. 12";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==4)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!! ";
	      }
	      if(a!=4)
	      cout<<"\nYour answer is wrong!!! ";
	      delay(700);
	      cout<<"\n\nAnswer : 12";
	      delay(400);
	      cout<<"\n\nQ7 Which team has lost the most no. of European Finals ?";
	      cout<<"\n1. FC Porto                   2. AC Milan";
	      cout<<"\n3. Benefica FC                4. Arsenal";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==3)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=3)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Benfica FC";
	      delay(400);
	      cout<<"\n\nQ8 In 2011-12 Man City became the 10th different team to be in the Champions      League from England. Of those 10 teams  , one failed to qualify for the group stage . Name the team ?";
	      cout<<"\n1. Leeds United               2. Blackburn Rovers ";
	      cout<<"\n3. Newcastle united           4. Everton";
	      cout<<"\nYour answer is = ";
	      cin>>a;
	      if(a==4)
	      {
	      i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=4)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Everton";
	      delay(400);
	      cout<<"\n\nQ9 Which team has participated the most no. of times in the UEFA Champions League/European Cup ?";
	      cout<<"\n1. Manchester United           2. Barcelona";
	      cout<<"\n3. Real Madrid                 4. Arsenal";
	      cout<<"\nYour answer is = ";
	      cin>>a;
	      if(a==1)
	      {
	      i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=1)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Manchester United";
	      delay(400);
	      cout<<"\n\nQ10 The Team from which country has had the most no. of European Cup finalist ?";
	      cout<<"\n1.Spain                         2. England";
	      cout<<"\n3.Italy                         4. Germany";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==3)
	      {
	      i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=3)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Italy";
	      delay(450);
	      cout<<"\n\n\nYour total score is "<<i<<" out of 10.";
	      cout<<"\nYour percentage "<<i*100/10<<" %";
	      cout<<"\n\n\n                                     THE END";
	      cout<<"\n                     ------------------------------------";
	      break;
       case 3:cout<<"                   BARCLAYS PREMIER LEAGUE";
	      cout<<"\n                   -----------------------";
	      delay(1500);
	      cout<<"\n\nQ1 Who scored the first ever Premier League goal ?";
	      cout<<"\n1. Brian Deane                2. Ryan Giggs ";
	      cout<<"\n3. Bobby Charlton             4. Ian Wright";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==1)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=1)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Brian Deane";
	      delay(400);
	      cout<<"\n\nQ2 From which team did Dimetar Berbatov join  Manchster United ?";
	      cout<<"\n1. Borrusia Dortmund                         2. Fulham ";
	      cout<<"\n3. West Ham United                           4. Tottenham Hotspurs";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==4)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=4)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Tottenham Hotspurs";
	      delay(400);
	      cout<<"\n\nQ3 From which team did Carlos Tevez join Manchester City ?";
	      cout<<"\n1. Newcastle United                          2. Tottenham Hotspurs";
	      cout<<"\n3. West Ham United                           4. Manchester United";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==4)
	      {
	      i=i++;
	      cout<<"\nYour answer is corect!!!";
	      }
	      if(a!=4)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnwser : Manchester United";
	      delay(400);
	      cout<<"\n\nQ4 Which team in the MLS do the Group of owners of Man city own  ?";
	      cout<<"\n1. Chicago  Titans                           2. New York FC";
	      cout<<"\n3. LA Galaxy                                 4. Bostan Wanderres";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==2)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!! ";
	      }
	      if(a!=2)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : New York FC";
	      delay(400);
	      cout<<"\n\nQ5 Which team did Manchester City starlet James Milner start his carrer with ?";
	      cout<<"\n1. West Ham United                           2. Everton";
	      cout<<"\n3. Newcastle United                          4. Aston Villa";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==1)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=1)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : West Ham United";
	      delay(400);
	      cout<<"\n\nQ6 Who is the Top scorer for Manchester United in the Premier League ?";
	      cout<<"\n1. Wayne Rooney                                 2. Bobby Charlton ";
	      cout<<"\n3. Paul Scholes                                 4. Cristiano Ronaldo";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==2)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=2)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Bobby Charlton";
	      cout<<"\n\nQ7 Which English club has a nickname ' VILLIAN '  ?";
	      cout<<"\n1. Aston Villa                2. Irpswitch Town ";
	      cout<<"\n3. Hull City                  4. Millwall United";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==1)
	      {
	      cout<<"\nYour answer is correct!!!";
	      i=i++;
	      }
	      if(a!=1)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Aston Villa";
	      delay(400);
	      cout<<"\n\nQ8 What is Everton's official nickname ?";
	      cout<<"\n1. Cottagers                  2. Magpies";
	      cout<<"\n3. Toffees                    4. Blue Birds";
	      cout<<"\nYour answer is = ";
	      cin>>a;
	      if(a==3)
	      {
	      i++;
	      cout<<"\nYour answer is correct !!!";
	      }
	      if(a!=3)
	      cout<<"\nYour answer is wrong !!!";
	      delay(700);
	      cout<<"\n\nAnswer : Toffees ";
	      delay(400);
	      cout<<"\n\nQ9 Which animal is the logo of the English Premier League ?";
	      cout<<"\n1. Tiger                      2. Lion";
	      cout<<"\n3. Panda                      4. Black Cat";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==2)
	      {
	      i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=2)
	      cout<<"\nYour answer is wrong !!!";
	      delay(700);
	      cout<<"\n\nAnswer : Lion";
	      delay(400);
	      cout<<"\n\nQ10 ' STANDARD CHARTERED ' is the sponser of which  Premier League team ?";
	      cout<<"\n1. Tottenham                   2. Newcastle United";
	      cout<<"\n3. Liverpool                   4. Hull City";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==3)
	      {
	      i++;
	      cout<<"\nYour answer is correct !!!";
	      }
	      if(a!=3)
	      cout<<"\nYour answer is wrong !!!";
	      delay(700);
	      cout<<"\n\nAnswer : Liverpool";
	      delay(450);
	      cout<<"\n\nTotal score ="<<i<<" out of 10.";
	      cout<<"\nPercentage ="<<i*100/10<<" %";
	      cout<<"\n\n\n                              THE END ";
	      cout<<"\n                    ---------------------------------------------";
	      break;
       case 4:cout<<"                           Liga BBVA     ";
	      cout<<"\n                           ---------";
	      cout<<"\n\nQ1 Which player scored the goal for Atletico Madrid which won them the Spanish  League? ";
	      cout<<"\n1. Diego                      2. Diego Costa";
	      cout<<"\n3. Diego Godin                4. David Villa";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==1)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=1)
	      cout<<"\nYour answer is wrong !!!";
	      delay(700);
	      cout<<"\n\nAnswer : Diego ";
	      delay(400);
	      cout<<"\n\nQ2 Which team did Real Madrid Left-back Fabio Coentrao start his carrer with ?";
	      cout<<"\n1. AS Monaco               2. Benfica FC";
	      cout<<"\n3. FC Porto                4. Sporting Lisbon";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==2)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=2)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Benfica FC";
	      delay(400);
	      cout<<"\n\nQ3 Who among these players have won the La Liga with both Real Madrid and       Barcelona ?";
	      cout<<"\n1. Samuel Eto'o                2. Javier Saviola";
	      cout<<"\n3. Robert Prosinecki           4. Albert Celades";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==4)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=4)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Albert Celades";
	      cout<<"\n\nQ4 How many times has Real Madrid won the EL CLASSICO ?";
	      cout<<"\n1. 88                         2. 96";
	      cout<<"\n3. 0                          4. 59";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==1)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=1)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : 88";
	      delay(400);
	      cout<<"\n\nQ5 From which team did Angel Di Maria came to Real Madrid ?";
	      cout<<"\n1. AC Milan                        2. FC Porto";
	      cout<<"\n3. Sevilla FC                      4. Benefica FC";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==4)
	      {
	      i=++i;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=4)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Benfica FC";
	      delay(400);
	      cout<<"\n\nQ6 Which team did Diego Lopez play for before he arrival to Real Madrid ?";
	      cout<<"\n1. Elche FC                       2. Villareal FC ";
	      cout<<"\n3. Sevilla FC                     4. Benefica FC";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==2)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=2)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Villareal FC ";
	      delay(400);
	      cout<<"\n\nQ7 Who is the all-time top scorer in La Liga history ?";
	      cout<<"\n1. Raul                           2. David Villa";
	      cout<<"\n3. Samuel Eto'o                   4. Lionel Messi";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==4)
	      {
	      i=i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=4)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Lionel Messi";
	      delay(400);
	      cout<<"\n\nQ8 How many times have both Real Madrid and Barcelona failed to finish in the   top 2 ? ";
	      cout<<"\n1. 6                              2. 9";
	      cout<<"\n3. 11                             4. 0";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==3)
	      {
	      i++;
	      cout<<"\nYour answer is correct !!! ";
	      }
	      if(a!=3)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : 11";
	      delay(400);
	      cout<<"\n\nQ9 Other than Real Madrid and Barcelona , which team has never been relegated in the Liga BBVA ?";
	      cout<<"\n1. Deportivo La Coruna            2. Sevilla";
	      cout<<"\n3. Valencia FC                    4. Athletic Bilbao";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==4)
	      {
	      i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=4)
	      cout<<"\nYour answer is wrong!!!";
	      delay(700);
	      cout<<"\n\nAnswer : Athletic Bilbao";
	      delay(400);
	      cout<<"\n\nQ10 Which team in La Liga has finished runners up the most no. of times ?";
	      cout<<"\n1. Real Madrid                    2. Barcelona";
	      cout<<"\n3. Valencia                       4. Atletico Madrid";
	      cout<<"\nYour answer is ";
	      cin>>a;
	      if(a==2)
	      {
	      i++;
	      cout<<"\nYour answer is correct!!!";
	      }
	      if(a!=2)
	      cout<<"\nYour answer is wrong !!!";
	      delay(700);
	      cout<<"\n\nAnswer : Barcelona";
	      delay(700);
	      cout<<"\n\n\nTotal score = "<<i<<" out of 10.";
	      cout<<"\nPercentage = "<<i*100/10<<" %";
	      cout<<"\n\n\n                            THE END";
	      cout<<"\n                 ----------------------------------------";
	      }



	      getch();
	      }
































