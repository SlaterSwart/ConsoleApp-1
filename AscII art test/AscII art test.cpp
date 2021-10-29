/*
	Name:  Slater Swart
	partner:Brookes sammorco0or 
	Problem: display art 
	Pseudocode:
	lets the user choose art after letting them put a name in
	prints the art
	coin flip thing 
	dice thing 
	done
	Notes: N/A
	Maintenance log:
		Date:10/10		Done:10/14
		10/2: 1 started the program and used the Bus Charter(my last project) to help me as a reference.
*/


#include <iostream>
#include <conio.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
using namespace std;
int main()
{
	srand(0);
	srand((unsigned)time(NULL));
	int flip;
	flip = rand() % 2 + 1;
	string name;
	int answer;
	int test;
	int minimum = 1;
	int maximum = 6;
	int SixSidedDie;

	printf("What is your name?(with no spaces)\n");
	cin >> name;
	system("CLS");

	LOOP:while (1 < 10) //Me messing around with Goto
	{


	printf("I would like to show you some art! what art would you like to see?\n");
	printf("1: City\t2:Coke\t3:Calvin n' hobs\t4:Dice\n");
	cin >> answer;
	switch (answer)
	{


	case 1:


		printf("                  ________            _______\n");
		printf("         /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________\n");
		printf("        /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __\n");
		printf("       /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //\n");
		printf("      /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___\n");
		printf("_____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____\n");
		printf("         \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /\n");
		printf("          \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____\n");
		printf("\\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::\n");
		printf("\\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::\n");
		printf("//__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::\n");
		printf("///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:\n");
		printf("///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\\n");
		printf("//:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/\n");
		printf("/:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ // :/\\:\\ \\_____________/\\  /\\  / /\n");
		printf(":/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\\n");
		printf("/:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\\n");
		printf(":/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /\n");
		printf("/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/\n");
		printf(":///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\\n");
		printf("///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\\n");
		printf("\nHere is a City! Piece name: I s o m e t r i c   C i t i e s  -  M e t r o p o l i a\n");
		printf("Press 1 to choose another art piece Press 2 to exit\n");
		cin >> test;
		if (test == 1) {

			goto LOOP; //goes back too line 25
		}
		if (test == 2) {
			return 0;
		}

		break;
		
		// new

	case 2:

		printf("      $$$$$.$$\n");
		printf("	 $$$$$$$$$$$\n");
		printf("	$$$$$$**$$$$             eeeeer\n");
		printf("  $$$$$%    '$$$             $$$$$F\n");
		printf(" 4$$$$P      *$$             *$$$$F\n");
		printf(" $$$$$       '$$    .ee.     ^$$$F            ..e.\n");
		printf(" $$$$$           .$$$$$$b     $$$F 4$$$$$$   $$$$$$c\n");
		printf("4$$$$F          4$$$  $$$$    $$$F '*$$$$*  $$$P $$$L\n");
		printf("4$$$$F         .$$$F  ^$$$b   $$$F  J$$$   $$$$ ^ $$$.\n");
		printf("4$$$$F         d$$$    $$$$   $$$F J$$P   .$$$F   $$$$\n");
		printf("4$$$$F         $$$$    3$$$F  $$$FJ$$P    4$$$   $$$$\n");
		printf("4$$$$F        4$$$$    4$$$$  $$$$$$$r    $$$$$$$$$$$$\n");
		printf("4$$$$$        4$$$$    4$$$$  $$$$$$$$    $$$$********\n");
		printf(" $$$$$        4$$$$    4$$$F  $$$F4$$$b   *$$$r\n");
		printf(" 3$$$$F       d$$$$    $$$$   $$$F *$$$F  4$$$L     .\n");
		printf("  $$$$$.     d$$$$$.   $$$$   $$$F  $$$$.  $$$$     $P\n");
		printf("   $$$$$e..d$$$ $$$b  4$$$   J$$$L  $$$$    $$$b..d$$\n");
		printf("    *$$$$$$$$$  ^$$$be$$$   $$$$$$$  3$$$$F $$$$$$$\n");
		printf("     ^*$$$$P     *$$$$*     $$$$$$$   $$$$F  ^*$$$\n");

		printf("Press 1 to choose another art piece Press 2 to exit\n");
		cin >> test;
		if (test == 1) {

			goto LOOP; //goes back too line 25
		}
		if (test == 2) {
			return 0;
		}

		break;

	case 3:
		if (flip == 1) {


			printf("	                               o                                               \n");
			printf("                         o$$      oo							   \n");
			printf("                 $o         o$ $     o$							   \n");
			printf("               $  $         $  $    o$    ooo					   \n");
			printf("               $o  $       o   $    $    o$  					   \n");
			printf("               $    o     o$   $   o    o 						   \n");
			printf("               $    $     $$   $   $   o 						   \n");
			printf("               $$    $   $$     $ $   $        oo  				   \n");
			printf("       $   o   $$     oo $            $o oooo      ooo			   \n");
			printf("        $    o $$         oo       oo          oo   			   \n");
			printf("         $    $$$       o                   o  					   \n");
			printf("         $$                                  ooooo				   \n");
			printf(" o        $                         ooo              oooo		   \n");
			printf("   o      $           ooo   o    o       						   \n");
			printf("o    oo             o         o           o     oooo	   \n");
			printf("  o               o           $            						   \n");
			printf("    oo           o            $$           $     $$$$  			   \n");
			printf(" oooo            $         oo $  oo        $           			   \n");
			printf(" ooooo           $        $ $ $ o $$       $   ooooooo	   \n");
			printf("      $          $         $  $ $$             $$    			   \n");
			printf("   oo $           o          o$           o    $$ooo			   \n");
			printf(" o$                o           o         o          $			   \n");
			printf(" $$                   ooooo$     o     o            $			   \n");
			printf("  $                      $      $o                  $                 \n");
			printf("    o    o                 o   o$                   			   \n");
			printf("       oo$o                                  $ooo 				   \n");
			printf("           oo                               o$ 					   \n");
			printf("             oo                           oo 					   \n");
			printf("                oo                     oo  						   \n");
			printf("                     oo            o    						   \n");
			printf("                      o $  oooo    								   \n");
			printf("                     o    $      o								   \n");
			printf("                     $o   o$     $o						   \n");
			printf("                    o$ooo  $ooooo$ 								   \n");
			printf("                    $      $        							   \n");
			printf("                    $      $      $								   \n");
			printf("                     o$$  $$oooooo$o$							   \n");
			printf("                     o $  $        $							   \n");
			printf("                     $o$  $        $$							   \n");
			printf("                o         $         $							   \n");
			printf("                $oo       $ooooooo  $							   \n");
			printf("                 $    o  o           $							   \n");
			printf("                 $$  $$$$$$$$$$$$$o$$$							   \n");
			printf("                    o$$$$$$$$$$$$$$$$$  o						   \n");
			printf("                ooo$  $$$$$       $$        o					   \n");
			printf("               $  $oooo$$$         $         $o					   \n");
			printf("               $o                 o         o   \n");
			printf("                 $$oooooooooooooo    ooo$$   \n");
			printf("Look It's Calvin! (I did not make this piece\n");
			printf("Press 1 to choose another art piece Press 2 to exit\n");
			cin >> test;
			if (test == 1) {

				goto LOOP; //goes back too line 25
			}
			if (test == 2) {
				return 0;
			}
		}
		else
		{
			printf("                                            ooooo$oo                   \n");
			printf("                                         oo$$$$$$$$$$$o						   \n");
			printf("                               oooo    $$$$$$$$$$$$$$$$						   \n");
			printf("                                    $$$$$o$$$$$  $$$$$ 						   \n");
			printf("               ooo o      ooooo          o$$$   o$$$$$						   \n");
			printf("                 ooo $oo$$$$$$$$$$$oo          o$$$$ 						   \n");
			printf("        ooooooo$   $$$             $$$o     $$$$$$$							   \n");
			printf("    oo$$$$$    ooo$                           o$$$$							   \n");
			printf("   $$$$$$$$  oo$$$        ooo$ooo          o$$$$$$$							   \n");
			printf("     $$$$oo             o$$$$$$$$$$ooo   o$        $						   \n");
			printf("                       $$$$                        $$						   \n");
			printf("       o$$           o$$$                o o  o    $$$  o$ 					   \n");
			printf("        o$         $$$$               ooo  o$ $$oo$$$$$  o$ 				   \n");
			printf("        $ oooo$o$$$$$$         oo$$$$$$$$$$oo$$$$$$o$  o$ 					   \n");
			printf("        $$$                   $$$$    $$$  $$$        $  ooo$$$    			   \n");
			printf("       o$                   o$$        $                   $ 				   \n");
			printf("        $$   oo       o    $$  oo                              oooo			   \n");
			printf("         $oo$$$$oo       o$$$$$o   o                             o$$$o		   \n");
			printf("          $$$$    $$$$$$                                      $o			   \n");
			printf("         $$$         $$o oo                 $                    $o			   \n");
			printf("     ooo   $ $o oo$ o$$$       $$o         $$$o              $o    $$o		   \n");
			printf("           $$   $ o$$     oooo  $$o                            o			   \n");
			printf("       oooo      $$  ooo$$$$$$oo$$$       o        ooooo   oo    oo			   \n");
			printf("    oo$          $$o$$$$$$$$$$$$$        $        $$$$$$$$o$  $o   			   \n");
			printf("ooo$oooooo        $$$$$$$$$$$$$        o       oo$$        $o   			   \n");
			printf("       $$$          $$$$$$$$$         o         $$        o$$o				   \n");
			printf("     oo   o o    oo               o           o o$o    o$$$$$$$				   \n");
			printf("   o$$o    $       $ooo       o$             o$$$    o$$$$$$$$$o			   \n");
			printf("         oo                                o $$$   o$$$        $$o			   \n");
			printf("        o$o$   o                         o$  $$o  o$$           $$			   \n");
			printf("              $  oo  o o o          oooo$$     $  $           oo$$$			   \n");
			printf("             o$o$$$oo oo   $$$o$$$$$$$$        $           o$$$$$$$$o		   \n");
			printf("             $$$$$$$$$$ooo                     $o$o     oo$$$$$$$$ $$o		   \n");
			printf("              $$$$$$$$$$$                     $ o$$   o$$$$$$$$     $$o		   \n");
			printf("              $      $ $$o$ooo$$$$o             $$    $$$$           $$		   \n");
			printf("             $     oo$o$$$          $$o          oo$   $              $		   \n");
			printf("             $    o     $o            $o         $ $oo$$$             $$	   \n");
			printf("            o$$$$$       $$              $o        $    $$o$$$$$$$$$$$$$$o	   \n");
			printf("            $$$$$$       $o                $o      $oo  $$$$$$  $  $ $ $$$$	   \n");
			printf("            $$$  $$oooo$$                   $$$o      ooo$$            $$$	   \n");
			printf("            $   $$   $$                    oo  $$$ooo$$$$$$$$$$$$$oo    $$	   \n");
			printf("            $   $    $       o          $$$    $$$$  $$$$$$$$oo    $$$$o$$$	   \n");
			printf("           $$  $$   $$      $$         $$  $o  $$$$   $$$  $$$$o    $$$$$$$	   \n");
			printf("           $$$$$$$$ $$     o$$       $$     $$  $      $$$     $$      $$$$	   \n");
			printf("           $$     $$$$o     $$       $      $$ $$      $$$$     $$     $$$$	   \n");
			printf("               oo$$$  $    o$$o      $      $$ o$      $$$$       $     $$$	   \n");
			printf("          $    $$$$$o  $o o$  $o    $$     o   $$oo    $$$$       $      $$    \n");
			printf("          $   o$   $$oo         $oo$        oo       o$$$$o        o           \n");
			printf("          $   $$    $$$$oo$o            o o$$          $  $$$oo    $      $	   \n");
			printf("         o$    $o        $$   $                        $$$       oo    oo$ 	   \n");
			printf("         $$ o  $$o     o$$    $                                      $ $$$	   \n");
			printf("           $$$o$$$$oooo      o$                         $o $            $$o	   \n");
			printf("             $o$  $          $$$                           ooo$oo$$$$$$$$$$	   \n");
			printf("                                                                   $$$$$$$$	   \n");
			printf("                              o                           o              $$	   \n");
			printf("This is Hobbes! I didn't make this but i thought it was cool!(no artist was credited)\n");
			printf("Press 1 to choose another art piece Press 2 to exit\n");
			cin >> test;
			if (test == 1) {

				goto LOOP; //goes back too line 25
			}
			if (test == 2) {
				return 0;
			}
		}
		break;
		case 4:
		printf("				Art by Joan G. Stark\n");
		printf("	       .-------.    ______		\n");
		printf("	      /   o   /|   /\\     \\		\n");
		printf("	     /_______/o|  /o \\  o  \\	\n");
		printf("	     | o     | | /   o\\_____\\	\n");
		printf("	     |   o   |o/ \\o   /o    /	\n");
		printf("	     |     o |/   \\ o/  o  /	\n");
		printf("	jgs  '-------'     \\/____o/		\n");

		SixSidedDie = (minimum)+rand() % (maximum - minimum + 1); // random 6 sided dice
		printf("The dice landed on %d\n", SixSidedDie);
		printf("Press 1 to choose another art piece Press 2 to exit\n");
		cin >> test;
		if (test == 1) {

			goto LOOP; //goes back too line 25
		}
		if (test == 2) {
			return 0;
		}

	}
	
	}	

_getch();
return 0;

}

