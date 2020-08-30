class KISKA_dialogueGUI
{
	idd = 1234

	class controls 
	{
		class KISKA_dialogueGUI_select: RscButtonMenu
		{
			idc = 2400;
			text = "select response"; //--- ToDo: Localize;
			x = 0.294922 * safezoneW + safezoneX;
			y = 0.625 * safezoneH + safezoneY;
			w = 0.304688 * safezoneW;
			h = 0.0208333 * safezoneH;
		};
		class KISKA_dialogueGUI_leave: RscButtonMenu
		{
			idc = 2401;
			text = "leave conversation"; //--- ToDo: Localize;
			x = 0.599609 * safezoneW + safezoneX;
			y = 0.625 * safezoneH + safezoneY;
			w = 0.105469 * safezoneW;
			h = 0.0208333 * safezoneH;
		};
		class KISKA_dialogueGUI_lastLineSaid: RscStructuredText
		{
			idc = 1100;
			font = "RobotoCondensedLight";

			x = 0.294922 * safezoneW + safezoneX;
			y = 0.666667 * safezoneH + safezoneY;
			w = 0.410156 * safezoneW;
			h = 0.0416667 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.75};
		};
		class KISKA_dialogueGUI_characterName: RscStructuredText
		{
			idc = 1101;
			font = "RobotoCondensedLight";

			text = "Someone's Name";

			x = 0.294922 * safezoneW + safezoneX;
			y = 0.645833 * safezoneH + safezoneY;
			w = 0.410156 * safezoneW;
			h = 0.0208333 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.75};

			class Attributes
			{
				font = "RobotoCondensed";
				color = "#ffffff";
				colorLink = "#D09B43";
				align = "center";
				shadow = 0;
			};
		};

		class KISKA_dialogueGUI_playerResponseList: RscListBox
		{
			idc = 1500;

			x = 0.294922 * safezoneW + safezoneX;
			y = 0.708333 * safezoneH + safezoneY;
			w = 0.410156 * safezoneW;
			h = 0.0625 * safezoneH;

			onLBSelChanged = "params ['_control', '_selectedIndex']; ";
		};
	};
};