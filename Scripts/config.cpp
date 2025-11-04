class CfgPatches
{
	class DayZSuit_Scripts
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts", "DZ_Characters", "SFM", "SFM_2", "SFMComplete"};
	};
};
class CfgMods
{
    class DayZ_Suit_Script_Mod
    {
        name="Suit Script";
        dir="DayZ_Suit_Script";
        picture="";
        action="";
        author="Spaghetti-Bit";
		credits = "Spaghetti, Pisque as Data Entry";
        overview = "";
		type = "mod";
		inputs = "";
        defines[] = {};
		dependencies[] = {"Core","Game","World","Mission"};
        class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class widgetStyles
			{
				files[]= {};
			};

			class engineScriptModule 
			{ 
				files[] = { "DayZ_Suit_Script/Scripts/1_Core"};
			};

			class gameScriptModule
			{
				files[] = { "DayZ_Suit_Script/Scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "DayZ_Suit_Script/Scripts/4_World" };
			};

			class missionScriptModule 
			{
				files[] = { "DayZ_Suit_Script/Scripts/5_Mission" };
			};
		};
    };
};

class CfgVehicles
{
	// TODO: Add BULAT SUIT (SKAT SUIT)
		// FOR BULAT SUIT USE SEVA SUIT NOT PS5M

	  ///////////
	 // LONER //
	///////////

	class SFM_SunriseVestFull_1;
	class SFM_Suit_SunriseFull_1: SFM_SunriseVestFull_1
	{
		scope = 2;
		displayName = "Sunrise Suit";
		suit[] = {"SFM_SunriseJacket1","SFM_SunrisePants1"};
		suitSlots[] = {"Body", "Legs"};
	};
	class SFM_Suit_SunriseFull_1_Gas: SFM_SunriseVestFull_1
	{
		scope = 2;
		displayName = "Sunrise Suit (Gas Tank)";
		suit[] = {"SFM_SunriseJacket1","SFM_SunrisePants1","SFM_SunriseGasBag"};
		suitSlots[] = {"Body", "Legs","Back"};
	};

	class SFM_SevaVestFull;
	class SFM_Suit_SevaFull: SFM_SevaVestFull
	{
		scope = 2;
		displayName = "Seva Suit";
		suit[] = {"SFM_SevaJacketV2","SFM_SevaPants","MilitaryBoots_Black","OMNOGloves_Gray","SFM_SevaGlass","SFM_SevaBag"};
		suitSlots[] = {"Body","Legs","Feet","Gloves","Mask","Back"};
	};

	
	class SFM_BerilVest_Stalker;
	class SFM_Suit_Beril_Stalker: SFM_BerilVest_Stalker
	{
		// Had to use SFM_BerilJacket_Base because it uses the STALKER texture anyway. If it's bad, needs a new texture.
		scope = 2;
		displayName = "Berill Suit (Loner)";
		suit[] = {"SFM_BerilJacket_Base","SFM_BerilPants_Stalker","SFM_BerilHelmet_Stalker","SFM_GasMask_XM40"};
		suitSlots[] = {"Body","Legs","Head","Mask"};
	};

	// TODO: Make suit Item for Loner Merc
	class SFM_VestMerc_Stalker;
	class SFM_Suit_Loner_Merc: SFM_VestMerc_Stalker
	{
		scope = 2;
		displayName = "Merc Suit (Loner)";
		suit[] = {"SFM_MercJacket_neutral","SFM_MercPants_Stalker"};
		// TODO: Merc Suit Stalker needs Pants.
		suitSlots[] = {"Body","Legs"};
	}

	  ///////////////
	 // ECOLOGIST //
	///////////////

	class SFM_SSP99M_Back_Red;
	class SFM_Suit_SSP99M_Red: SFM_SSP99M_Back_Red
	{
		// TODO: Add in the null/invisible slot for the 'vest' (NH should have one). Reason why is because when using the suit vests above will dupe the pants/jacket and drop it on the ground.
		scope = 2;
		displayName = "Ecologist Suit (Red)";
		suit[] = {"SFM_SSP99M_Jacket_V1_Red","SFM_SSP99M_Pants_Red","SFM_SSP99M_Boots","SFM_SSP99M_Gloves","SFM_SevaGlass"};
		suitSlots[] = {"Body","Legs","Feet","Gloves","Mask"};
	};

	// TODO: Needs to be tested.
	class SFM_SSP99M_Back_Green;
	class SFM_Suit_SSP99M_Green: SFM_SSP99M_Back_Green
	{
		// TODO: Add in the null/invisible slot for the 'vest' (NH should have one). Reason why is because when using the suit vests above will dupe the pants/jacket and drop it on the ground.
		scope = 2;
		displayName = "Ecologist Suit (Green)";
		suit[] = {"SFM_SSP99M_Jacket_V2_Green","SFM_SSP99M_Pants_Green","SFM_SSP99M_Boots","SFM_SSP99M_Gloves","SFM_SevaGlass"};
		suitSlots[] = {"Body","Legs","Feet","Gloves","Mask"};
	};

	// TODO: Make Suit Item for Eco Sunrise
		// Make the invidiual items for Eco Sunrise

	  //////////
	 // DUTY //
	//////////

	class SFMC_SunriseVestFull_Duty_1;
	class SFMC_Suit_Duty_Sunrise: SFMC_SunriseVestFull_Duty_1
	{
		scope = 2;
		displayName = "Sunrise Suit (Duty)";
		suit[] = {"SFMC_SunriseJacket_Duty","SFMC_SunrisePants_Duty"};
		suitSlots[] = {"Body", "Legs"};
	};
	
	class SFMC_Suit_Duty_Sunrise_Gas: SFMC_SunriseVestFull_Duty_1
	{
		scope = 2;
		displayName = "Sunrise Suit (Duty) (Gas Tank)";
		suit[] = {"SFMC_SunriseJacket_Duty","SFMC_SunrisePants_Duty","SFMC_SunriseGasBag_Duty"};
		suitSlots[] = {"Body", "Legs","Back"};
	};

	class SFM_SevaVestFull_Dolg1;
	class SFM_Suit_Duty_Seva: SFM_SevaVestFull_Dolg1
	{
		scope = 2;
		displayName = "Seva Suit (Duty)";
		suit[] = {"SFM_SevaJacketV1_Dolg1","SFM_SevaPants_Dolg1","MilitaryBoots_Black","OMNOGloves_Gray","SFM_SevaGlass","dzrp_Seva5M_Set_Dolg_GasBag"};
		suitSlots[] = {"Body","Legs","Feet","Gloves","Mask","Back"};
	};

	// TODO: Make Suit Item for Duty Beril
		// MISSING DOLG TEXTURES IN HELMETS, VESTS, GASMASK... BUT JACKET AND PANTS ARE PRESENT???
	// TODO: Make Suit Item for Duty Merc

	  /////////////
	 // FREEDOM //
	/////////////

	// TODO: Make Suit Item for Freedom Sunrise
		// TODO: Make the invidiual items for Freedom Sunrise

	class SFM_SevaVestFull_Svoboda1;
	class SFM_Suit_Freedom_Seva: SFM_SevaVestFull_Svoboda1
	{
		scope = 2;
		displayName = "Seva Suit (Freedom)";
		suit[] = {"SFM_SevaJacketV1_Svoboda1","SFM_SevaPants_Svoboda1","MilitaryBoots_Black","OMNOGloves_Gray","SFM_SevaGlass","SFM_SevaBag_Svoboda"};
		suitSlots[] = {"Body","Legs","Feet","Gloves","Mask","Back"};
	};

	// TODO: Make Suit Item for Freedom Beril
	class SFM_BerilVest_Svoboda1;
	class SFM_Suit_Freedom_Beril: SFM_BerilVest_Svoboda1
	{
		scope = 2;
		displayName = "Berill Suit (Freedom)";
		suit[] = {"SFM_BerilJacket_Svoboda1","SFM_BerilPants_Svoboda1","SFM_BerilHelmet_Svoboda1","SFM_GasMask_XM40"};
		suitSlots[] = {"Body","Legs","Head","Mask"};
	};

	// TODO: Make Suit Item for Freedom Merc

	  //////////////
	 // MONOLITH //
	//////////////

	// TODO: Make Suit Item for Monolith Sunrise
		// TODO: Make the invidiual items for Monolith Sunrise
	// TODO: Make Suit Item for Monolith SEVA
		// TODO: Make the invidiual items for Monolith SEVA
	// TODO: Make Suit Item for Monolith Beril
	// TODO: Make Suit Item for Monolith Merc

	  //////////////
	 // MILITARY //
	//////////////

	// TODO: TEST
	class SFM_BerilVest_Base;
	class SFM_Suit_Military_Beril: SFM_BerilVest_Base
	{
		scope = 2;
		displayName = "Berill Suit (Military)";
		suit[] = {"SFM_BerilJacket_Voen1","SFM_BerilPants_Base","SFM_BerilHelmet_Base","SFM_GasMask_XM40"};
		suitSlots[] = {"Body","Legs","Head","Mask"};
	};

	  ////////////
	 // BANDIT //
	////////////

	// TODO: TEST
	class SFM_VestMerc_Bandit;
	class SMF_Suit_Bandit_Merc: SFM_VestMerc_Bandit
	{
		scope = 2;
		displayName = "Merc Suit (Bandit)";
		suit[] = {"SFM_MercJacket_bandit","SFMC_MercPants_Bandit"};
		suitSlots[] = {"Body","Legs"};
	};

};