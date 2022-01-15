/*	
Name:  Slater Swart
Problem: make animated art
Pseudocode :


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
#include <Windows.h>
using namespace std;

int main()
{
	bool loop = true;
	while (loop)
	{
		int input;
		int i = 0;
		int artchoice;

		printf("choose your art piece!\n");
		printf("1:campfire Animated | 2:SpaceShip Animated | 3: fire works\n if you want to quit press 4\n");
		cin >> artchoice;
	
		switch (artchoice)
		{
		case 1:
			while (i < 10)
			{
				system("CLS");
				printf("           (                 ,&&&.	\n");
				printf("            )                .,.&&	\n");
				printf("           (  (              \\=__/	\n");
				printf("               )             ,'-'.	\n");
				printf("         (    (  ,,      _.__|/ /|	\n");
				printf("          ) /\\ -((------((_|___/ |	\n");
				printf("        (  // | (`'      ((  `'--|	\n");
				printf("      _ -.;_/ \\\\--._      \\\\ \\-._/.	\n");
				printf("     (_;-// | \\ \\-'.\\    <_,\\_\\`--'|\n");
				printf("     ( `.__ _  ___,')      <_,-'__,'\n");
				printf("jrei  `'(_ )_)(_)_)')				\n");
				Sleep(100);
				system("CLS");

				printf("  o            )     *       ,&&&.	\n");
				printf("             (     )     o   .,.&&	\n");
				printf("        o  ( *  )            \\=__/	\n");
				printf("     o    (    )     )       ,'-'.	\n");
				printf("         )   (  ,,      _.__|/ /|	\n");
				printf("          ) /\\ -((------((_|___/ |	\n");
				printf("        *  // | (`')     ((  `'--|	\n");
				printf("      _ -.;_/ \\\\--._      \\\\ \\-._/.	\n");
				printf("     (_;-// | \\ \\-'.\\    <_,\\_\\`--'|\n");
				printf("     ( `.__ _  ___,')      <_,-'__,'\n");
				printf("jrei  `'(_ )_)(_)_)')				\n");
				Sleep(300);
				i++;

				if (i == 9)
				{
					system("CLS");
					printf(" would you like to see it again?\n 1 for yes 2 for no\n");
					cin >> input;
					if (input == 1)
					{
						i = 0;
						continue;
					}
					else if (input == 2)
					{

						break;
					}

				}
			}
			break;
		case 2:
			while (1 < 10)
			{
				system("CLS");
				printf("		                    `. ___							  \n");
				printf("                    __,' __`.                _..----....____  \n");
				printf("        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-' \n");
				printf("  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,'	  \n");
				printf(",'________________                          \\`-._`-','		  \n");
				printf(" `._              ```````````------...___   '-.._'-:		  \n");
				printf("    ```--.._      ,.                     ````--...__\\-.		  \n");
				printf("            `.--. `-`                       ____    |  |`	  \n");
				printf("              `. `.                       ,'`````.  ;  ;`	  \n");
				printf("                `._`.        __________   `.      \\'__/`	  \n");
				printf("                   `-:._____/______/___/____`.     \\  `		  \n");
				printf("                               |       `._    `.    \\		  \n");
				printf("                               `._________`-.   `.   `.___	  \n");
				printf("                                             SSt  `------'`	  \n");
				Sleep(300);
				system("CLS");

				printf("		                    `. ___		---		  \n");
				printf("                    __,' __`.       ----     _..----....____  \n");
				printf("        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-'------ \n");
				printf("  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,'	-----  \n");
				printf(",'________________                          \\`-._`-','	-----	  \n");
				printf(" `._              ```````````------...___   '-.._'-:		  \n");
				printf("    ```--.._      ,.                     ````--...__\\-.		  \n");
				printf("            `.--. `-`                       ____    |  |`-------	---  \n");
				printf("              `. `.                       ,'`````.  ;  ;`----	---  ---\n");
				printf("                `._`.        __________   `.      \\'__/`------	  ------\n");
				printf("                   `-:._____/______/___/____`.     \\  `	-----  \n");
				printf("                               |       `._    `.    \\	---	  \n");
				printf("                               `._________`-.   `.   `.___	------  \n");
				printf("                                             SSt  `------'`	  \n");
				printf("Zooom!!\n");
				Sleep(300);
				i++;
				if (i == 9)
				{
					system("CLS");
					printf(" would you like to see it again?\n 1 for yes 2 for no\n");
					cin >> input;
					if (input == 1)
					{
						i = 0;
						continue;
					}
					else if (input == 2)
					{

						break;
					}

				}
			}
			break;
		case 3:
			printf("		                                .''.			  \n");
			printf("       .''.             *''*    :_\\/_:     . 			  \n");
			printf("      :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'.			  \n");
			printf("  .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-			  \n");
			printf(" :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'			  \n");
			printf(" : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *			  \n");
			printf("  '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____			  \n");
			printf("      *        __*..* |  |     :      |.   |' .---^|	  \n");
			printf("       _*   .-'   '-. |  |     .--'|  ||   | _|    |	  \n");
			printf("    .-'|  _.|  |    ||   '-__  |   |  |    ||      |	  \n");
			printf("    |' | |.    |    ||       | |   |  |    ||      |	  \n");
			printf(" ___|  '-'     '    ""       '-'   '-.'    '`      |____  \n");
			printf("jgs~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  \n");
			Sleep(1000);

			system("CLS");
			printf(" would you like to go back?\n 1 for yes 2 for no\n");
			cin >> input;
			if (input == 1)
			{
				continue;
			}
			else if (input == 2)
			{

				break;
			}
			break;

		case 4:
			printf("thank you for playing\n");
			loop = false;
			break;
		}
		
	}
	return 0; 
}

