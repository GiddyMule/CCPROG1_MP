/* Machine Project Functions */

/* This is the functions file of my project. Most of these are unused because I have struggled to effectively implement them into main while having the desired outputs. */

/* The title function ======================================================================*/
void gilTitle()
{
	printf("**********************************\n");
	
	printf("GILGAMESH'S MEGA GIL ADVENTURES\n");
	
	printf("**********************************\n");
}
/*==========================================================================================*/

/* The gil, debt, and days function ========================================================*/
int gilDisplay(int nA, int nB, int nC)
{
	printf("Days remaining: %d\n", nA);
	printf("Gil: %d\n", nB);
	printf("Debt: %d\n", nC);
	
}

/* The Main Menu function ==================================================================*/
void gilMainMenu()
{

	int menuChoice;	
	
	printf("\nGilgamesh: Where should my travels take me to?\n\n");
	
	printf("[1] Tycoon Meteor's Minerals\n");
	printf("[2] Pulsian Restoratives\n");
	printf("[3] Archadian Luxuries\n");
	printf("[4] Cid's Magical Escapades\n");
	printf("[5] Gaian Gratitudes\n");
	printf("[6] Riches and Minerals of Spira\n");
	printf("[7] Go see the Merchant of the Rift\n");
	
	printf("\nYour choice: ");
    scanf(" %d", &menuChoice);
    
    
	    		    	
}
/*==========================================================================================*/

/* end of the game function ================================================================*/
int endOfTheGame (int num1, int num2)
{
	printf("END OF THE GAME!\n");
	printf("Total Gil earned: %d G\n", num1);
	printf("Debt remaining: %d G\n", num2);	
}

/* Day passes function =====================================================================*/
int dayPassAfterLeave(int num)
{
	num = num + 1;
	
	return num;
}
/*==========================================================================================*/

/* Debt increases function =================================================================*/
int debtIncreaseAfterLeave(int num)
{
	num = num + num * 0.15;
	
	printf("Debt: %d\n", num);
}
/*==========================================================================================*/

/* Deposit increases function ==============================================================*/
void depositIncreaseAfterLeave(int num)
{
	num = num + num * 10;
	
}
/*==========================================================================================*/


/* Tycoon Meteor's Minerals function =======================================================*/
void tycoonMeteorsMinerals()
{
    char shopChoice1;
    int dayCurrent, gilCurrency, gilDebt;
    
	printf("\n************************");
	
	printf("\nTycoon Meteor's Minerals\n");
	
	printf("************************\n");
	
	printf("\nShopkeeper: Welcome! How may I be of service?\n");
	printf("\nItem                    On hand                    Price\n");
	printf("\nPhoenix Down               0                        756 G\n");
	printf("Elixir Essence             0                        1750 G\n");
	printf("Platinum Ingot             0                        6123 G\n");
	printf("Golden Materia             0                        4250 G\n");
	printf("Scarletite                 0                        Sold Out\n");
	printf("Adamantite                 0                        29234 G\n");
	printf("Darkmatter                 0                        42387 G\n");
	printf("Trapezohedron              0                        61323 G\n");

	printf("\n[B]uy  [S]ell  [L]eave\n");
	
	printf("\nOption: ");	
	scanf(" %c", &shopChoice1);
	
	do
	{
        while (shopChoice1 == 'B')
	    {
	        /* buy */
		
	    }
	    while (shopChoice1 == 'S')
	    {
	        /* sell */	
	    }
	    while (shopChoice1 == 'L')
	    {
            printf("Day #%d\n", dayCurrent+1);
            printf("Gil: %d\n", gilCurrency);
            printf("Debt: %d\n", gilDebt);
	        gilMainMenu(dayCurrent, gilCurrency, gilDebt);	
	    }
	} while (shopChoice1 == 'B' || shopChoice1 == 'S' || shopChoice1 == 'L');
		
}

/* Pulsian Restoratives function ===========================================================*/
void pulsianRestoratives()
{
    char shopChoice2;
    int dayCurrent, gilCurrency, gilDebt;
    
    printf("Day #%d\n", dayCurrent);
    printf("Gil: %d\n", gilCurrency);
    printf("Debt: %d\n", gilDebt);
			
	printf("\n********************");
	
	printf("\nPulsian Restoratives\n");
	
	printf("********************\n");
	
	printf("\nShopkeeper: Welcome! How may I be of service?\n");
	printf("\nItem                    On hand                    Price\n");
	printf("\nPhoenix Down               0                        756 G\n");
	printf("Elixir Essence             0                        1750 G\n");
	printf("Platinum Ingot             0                        6123 G\n");
	printf("Golden Materia             0                        4250 G\n");
	printf("Scarletite                 0                        Sold Out\n");
	printf("Adamantite                 0                        29234 G\n");
	printf("Darkmatter                 0                        42387 G\n");
	printf("Trapezohedron              0                        61323 G\n");

	printf("\n[B]uy  [S]ell  [L]eave\n");
	
    printf("\nOption: ");	
	scanf(" %c", &shopChoice2);
	
	do
	{
        if (shopChoice2 == 'B')
	    {
	        /* buy */
		
	    }
	    if (shopChoice2 == 'S')
	    {
	        /* sell */	
	    }
	    if (shopChoice2 == 'L')
	    {
            printf("Day #%d\n", dayCurrent);
            printf("Gil: %d\n", gilCurrency);
            printf("Debt: %d\n", gilDebt);
	        gilMainMenu(dayCurrent, gilCurrency, gilDebt);	
	    }
	} while (shopChoice2 == 'B' || shopChoice2 == 'S' || shopChoice2 == 'L');
}
/*==========================================================================================*/

/* Archadian Luxuries function =============================================================*/
void archadianLuxuries()
{
    char shopChoice3;
    int dayCurrent, gilCurrency, gilDebt;
    
    printf("Days #%d\n", dayCurrent);
    printf("Gil: %d\n", gilCurrency);
    printf("Debt: %d\n", gilDebt);		
	
	printf("\n******************");
	
	printf("\nArchadian Luxuries\n");
	
	printf("******************\n");
	
	printf("\nShopkeeper: Welcome! How may I be of service?\n");
	printf("\nItem                    On hand                    Price\n");
	printf("\nPhoenix Down               0                        756 G\n");
	printf("Elixir Essence             0                        1750 G\n");
	printf("Platinum Ingot             0                        6123 G\n");
	printf("Golden Materia             0                        4250 G\n");
	printf("Scarletite                 0                        Sold Out\n");
	printf("Adamantite                 0                        29234 G\n");
	printf("Darkmatter                 0                        42387 G\n");
	printf("Trapezohedron              0                        61323 G\n");

	printf("\n[B]uy  [S]ell  [L]eave\n");
	
    printf("\nOption: ");	
	scanf(" %c", &shopChoice3);
	
	do
	{
        if (shopChoice3 == 'B')
	    {
	        /* buy */
		
	    }
	    if (shopChoice3 == 'S')
	    {
	        /* sell */	
	    }
	    if (shopChoice3 == 'L')
	    {
            printf("Days remaining: %d\n", dayCurrent);
            printf("Gil: %d\n", gilCurrency);
            printf("Debt: %d\n", gilDebt);
	        gilMainMenu(dayCurrent, gilCurrency, gilDebt);	
	    }
	} while (shopChoice3 == 'B' || shopChoice3 == 'S' || shopChoice3 == 'L');
}
/*==========================================================================================*/

/* Cid's Magical Escapades function ========================================================*/
void cidsMagicalEscapades()
{
    char shopChoice4;
    int dayCurrent, gilCurrency, gilDebt;
    
    printf("Day #%d\n", dayCurrent);
    printf("Gil: %d\n", gilCurrency);
    printf("Debt: %d\n", gilDebt);		
	
	printf("\n********************");
	
	printf("\nCid's Magical Escapades\n");
	
	printf("**********************\n");
	
	printf("\nShopkeeper: Welcome! How may I be of service?\n");
	printf("\nItem                    On hand                    Price\n");
	printf("\nPhoenix Down               0                        756 G\n");
	printf("Elixir Essence             0                        1750 G\n");
	printf("Platinum Ingot             0                        6123 G\n");
	printf("Golden Materia             0                        4250 G\n");
	printf("Scarletite                 0                        Sold Out\n");
	printf("Adamantite                 0                        29234 G\n");
	printf("Darkmatter                 0                        42387 G\n");
	printf("Trapezohedron              0                        61323 G\n");

	printf("\n[B]uy  [S]ell  [L]eave\n");
	
    printf("\nOption: ");	
	scanf(" %c", &shopChoice4);
	
	do
	{
        if (shopChoice4 == 'B')
	    {
	        /* buy */
		
	    }
	    if (shopChoice4 == 'S')
	    {
	        /* sell */	
	    }
	    if (shopChoice4 == 'L')
	    {
            printf("Days remaining: %d\n", dayCurrent);
            printf("Gil: %d\n", gilCurrency);
            printf("Debt: %d\n", gilDebt);
	        gilMainMenu(dayCurrent, gilCurrency, gilDebt);	
	    }
	} while (shopChoice4 == 'B' || shopChoice4 == 'S' || shopChoice4 == 'L');
}
/*==========================================================================================*/

/* Gaian Gratitudes ========================================================================*/
void gaianGratitudes()
{
    char shopChoice5;
    int dayCurrent, gilCurrency, gilDebt;
    
    printf("Days remaining: %d\n", dayCurrent);
    printf("Gil: %d\n", gilCurrency);
    printf("Debt: %d\n", gilDebt);		
	
	printf("\n****************");
	
	printf("\nGaian Gratitiude\n");
	
	printf("****************\n");
	
	printf("\nShopkeeper: Welcome! How may I be of service?\n");
	printf("\nItem                    On hand                    Price\n");
	printf("\nPhoenix Down               0                        756 G\n");
	printf("Elixir Essence             0                        1750 G\n");
	printf("Platinum Ingot             0                        6123 G\n");
	printf("Golden Materia             0                        4250 G\n");
	printf("Scarletite                 0                        Sold Out\n");
	printf("Adamantite                 0                        29234 G\n");
	printf("Darkmatter                 0                        42387 G\n");
	printf("Trapezohedron              0                        61323 G\n");

	printf("\n[B]uy  [S]ell  [L]eave\n");
	
    printf("\nOption: ");	
	scanf(" %c", &shopChoice5);
	
	do
	{
        if (shopChoice5 == 'B')
	    {
	        /* buy */
		
	    }
	    if (shopChoice5 == 'S')
	    {
	        /* sell */	
	    }
	    if (shopChoice5 == 'L')
	    {
            printf("Days remaining: %d\n", dayCurrent);
            printf("Gil: %d\n", gilCurrency);
            printf("Debt: %d\n", gilDebt);
	        gilMainMenu(dayCurrent, gilCurrency, gilDebt);	
	    }
	} while (shopChoice5 == 'B' || shopChoice5 == 'S' || shopChoice5 == 'L');
}

/*==========================================================================================*/

/* Riches and Minerals of Spira ============================================================*/
void richesAndMineralsOfSpira()
{
    char shopChoice6;
    int dayCurrent, gilCurrency, gilDebt;
    
    printf("Days remaining: %d\n", dayCurrent);
    printf("Gil: %d\n", gilCurrency);
    printf("Debt: %d\n", gilDebt);		
	
	printf("\n****************************");
	
	printf("\nRiches and Minerals of Spira\n");
	
	printf("****************************\n");
	
	printf("\nShopkeeper: Welcome! How may I be of service?\n");
	printf("\nItem                    On hand                    Price\n");
	printf("\nPhoenix Down               0                        756 G\n");
	printf("Elixir Essence             0                        1750 G\n");
	printf("Platinum Ingot             0                        6123 G\n");
	printf("Golden Materia             0                        4250 G\n");
	printf("Scarletite                 0                        Sold Out\n");
	printf("Adamantite                 0                        29234 G\n");
	printf("Darkmatter                 0                        42387 G\n");
	printf("Trapezohedron              0                        61323 G\n");

	printf("\n[B]uy  [S]ell  [L]eave\n");
	
    printf("\nOption: ");	
	scanf(" %c", &shopChoice6);
	
	do
	{
        if (shopChoice6 == 'B')
	    {
	        /* buy */
		
	    }
	    if (shopChoice6 == 'S')
	    {
	        /* sell */	
	    }
	    if (shopChoice6 == 'L')
	    {
            printf("Days remaining: %d\n", dayCurrent);
            printf("Gil: %d\n", gilCurrency);
            printf("Debt: %d\n", gilDebt);
	        gilMainMenu(dayCurrent, gilCurrency, gilDebt);	
	    }
	} while (shopChoice6 == 'B' || shopChoice6 == 'S' || shopChoice6 == 'L');
}
/*==========================================================================================*/

/* Merchant of the Rift function ===========================================================*/
void merchantOfTheRift()
{
    int riftChoice;
    int dayCurrent, gilCurrency, gilDebt;
	
    printf("Days remaining: %d\n", dayCurrent);
    printf("Gil: %d\n", gilCurrency);
    printf("Debt: %d\n", gilDebt);		
	
	printf("\nMerchant of the Rift: Are you ready to pay your debt?\n");
	
	printf("\n[1] Deposit Gil\n");
	printf("[2] Withdraw Gil\n");
	printf("[3] Pay off Debt\n");
	printf("[4] Ask for additional loan\n");
	printf("[5] Leave\n");
	
    printf("\nYour choice: ");
    scanf(" %d", &riftChoice);
    
    if (riftChoice == 1)
    {
    	/* Deposit */
	}
	if (riftChoice == 2)
    {
    	/* Withdraw */
	}
    if (riftChoice == 3)
    {
    	/* Pay off Debt */
	}
	if (riftChoice == 4)
    {
    	/* Ask for additional loan */
	}
	if (riftChoice == 5)
    {
    	/* Leave */
        printf("Days remaining: %d\n", dayCurrent);
        printf("Gil: %d\n", gilCurrency);
        printf("Debt: %d\n", gilDebt);	        
		gilMainMenu(dayCurrent, gilCurrency, gilDebt);	
	} 
	/*==========================================================================================*/ 	
}

    
