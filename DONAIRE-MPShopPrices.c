/*===========================================================================================================================================*/
	
	/* Item shop price ranges */	 
	
	int phoenixDownPrice, phoenixDownPrice2, phoenixDownPriceLower, phoenixDownPriceUpper;
	phoenixDownPriceLower = 500;
	phoenixDownPriceUpper = 1200;
	phoenixDownPrice = (rand() % (phoenixDownPriceUpper - phoenixDownPriceLower + 1)) + phoenixDownPriceLower;
	phoenixDownPrice2 = (rand() % (phoenixDownPriceUpper - phoenixDownPriceLower + 1)) + phoenixDownPriceLower;
	
	int elixirEssencePrice, elixirEssencePriceLower, elixirEssencePriceUpper;
	elixirEssencePriceLower = 1500;
	elixirEssencePriceUpper = 2000;
	elixirEssencePrice =(rand() % (elixirEssencePriceUpper - elixirEssencePriceLower + 1)) + elixirEssencePriceLower;
	
	int platinumIngotPrice, platinumIngotPriceLower, platinumIngotPriceUpper;
	platinumIngotPriceLower = 5000;
	platinumIngotPriceUpper = 7000;
	platinumIngotPrice = (rand() % (platinumIngotPriceUpper - platinumIngotPriceLower + 1)) + platinumIngotPriceLower;
	
	int goldenMateriaPrice, goldenMateriaPriceLower, goldenMateriaPriceUpper;
	goldenMateriaPriceLower = 3500;
	goldenMateriaPriceUpper = 5500;
	goldenMateriaPrice = (rand() % (goldenMateriaPriceUpper - goldenMateriaPriceLower + 1)) + goldenMateriaPriceLower;

	int scarletitePrice, scarletitePriceLower, scarletitePriceUpper;
	scarletitePriceLower = 8000;
	scarletitePriceUpper = 12000;
	scarletitePrice = (rand() % (scarletitePriceUpper - scarletitePriceLower + 1)) + scarletitePriceLower;

	int adamantitePrice, adamantitePriceLower, adamantitePriceUpper;
	adamantitePriceLower = 15000;
	adamantitePriceUpper = 30000;
	adamantitePrice = (rand() % (adamantitePriceUpper - adamantitePriceLower + 1)) + adamantitePriceLower;

	int darkMatterPrice, darkMatterPriceLower, darkMatterPriceUpper;
	darkMatterPriceLower = 40000;
	darkMatterPriceUpper = 70000;
	darkMatterPrice = (rand() % (darkMatterPriceUpper - darkMatterPriceLower + 1)) + darkMatterPriceLower;

	int trapezohedronPrice, trapezohedronPriceLower, trapezohedronPriceUpper;
	trapezohedronPriceLower = 60000;
	trapezohedronPriceUpper = 90000;
	trapezohedronPrice = (rand() % (trapezohedronPriceUpper - trapezohedronPriceLower + 1)) + trapezohedronPriceLower;
	
	/***********************************Shop specialities*/
	
	int pulsianRestorativesPDcost, pulsianRestorativesPDLower, pulsianRestorativesPDUpper;
	pulsianRestorativesPDLower = 300;
	pulsianRestorativesPDUpper = 800;
	pulsianRestorativesPDcost = (rand() % (pulsianRestorativesPDUpper - pulsianRestorativesPDLower + 1)) + pulsianRestorativesPDLower;

	int pulsianRestorativesEEcost, pulsianRestorativesEELower, pulsianRestorativesEEUpper;
	pulsianRestorativesEELower = 1000;
	pulsianRestorativesEEUpper = 1700;
	pulsianRestorativesEEcost = (rand() % (pulsianRestorativesEEUpper - pulsianRestorativesEELower + 1)) + pulsianRestorativesEELower;

	int archadianLuxuriesPIcost, archadianLuxuriesPILower, archadianLuxuriesPIUpper;
	archadianLuxuriesPILower = 4500;
	archadianLuxuriesPIUpper = 6000;
	archadianLuxuriesPIcost = (rand() % (archadianLuxuriesPIUpper - archadianLuxuriesPILower + 1)) + archadianLuxuriesPILower;

	
	int cidsMagicalEscapadesGMcost, cidsMagicalEscapadesGMLower, cidsMagicalEscapadesGMUpper;
	cidsMagicalEscapadesGMLower = 3000;
	cidsMagicalEscapadesGMUpper = 5000;
	cidsMagicalEscapadesGMcost = (rand() % (cidsMagicalEscapadesGMUpper - cidsMagicalEscapadesGMLower + 1)) + cidsMagicalEscapadesGMLower;

	int gaianGratitudesSCARcost, gaianGratitudesSCARLower, gaianGratitudesSCARUpper;
	gaianGratitudesSCARLower = 5000;
	gaianGratitudesSCARUpper = 10000;
	gaianGratitudesSCARcost = (rand() % (gaianGratitudesSCARUpper - gaianGratitudesSCARLower + 1)) + gaianGratitudesSCARLower;

	int richesAndMineralsOfSpiraADAMcost, richesAndMineralsOfSpiraADAMLower, richesAndMineralsOfSpiraADAMUpper;
	richesAndMineralsOfSpiraADAMLower = 9500;
	richesAndMineralsOfSpiraADAMUpper = 20000;
	richesAndMineralsOfSpiraADAMcost = (rand() % (richesAndMineralsOfSpiraADAMUpper - richesAndMineralsOfSpiraADAMLower + 1)) + richesAndMineralsOfSpiraADAMLower;

	int richesAndMineralsOfSpiraDMcost, richesAndMineralsOfSpiraDMLower, richesAndMineralsOfSpiraDMUpper;
	richesAndMineralsOfSpiraDMLower = 22000;
	richesAndMineralsOfSpiraDMUpper = 50000;
	richesAndMineralsOfSpiraDMcost = (rand() % (richesAndMineralsOfSpiraDMUpper - richesAndMineralsOfSpiraDMLower + 1)) + richesAndMineralsOfSpiraDMLower;

	int tycoonMeteorsMineralsTRAPcost, tycoonMeteorsMineralsTRAPLower, tycoonMeteorsMineralsTRAPUpper;
	tycoonMeteorsMineralsTRAPLower = 35000;
	tycoonMeteorsMineralsTRAPUpper =  65000;
	tycoonMeteorsMineralsTRAPcost = (rand() % (tycoonMeteorsMineralsTRAPUpper - tycoonMeteorsMineralsTRAPLower + 1)) + tycoonMeteorsMineralsTRAPLower;

	/*===========================================================================================================================================*/
