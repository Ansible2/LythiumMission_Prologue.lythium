class KISKA_dialogueGUI
{
	idd = 1234

	class controls 
	{
		class KISKA_dialogueGUI_ok: RscButtonMenu
		{
			text = "ok";
			x = 0.294922 * safezoneW + safezoneX;
			y = 0.645833 * safezoneH + safezoneY;
			w = 0.304688 * safezoneW;
			h = 0.0208333 * safezoneH;
			//font = "";
		};
		class KISKA_dialogueGUI_cancel: RscButtonMenuCancel
		{
			//text = "cancel"
			x = 0.599609 * safezoneW + safezoneX;
			y = 0.645833 * safezoneH + safezoneY;
			w = 0.105469 * safezoneW;
			h = 0.0208333 * safezoneH;
			//font = "";
		};
		class KISKA_dialogueGUI_lastLineSaid: RscStructuredText
		{
			idc = 1100;

			text = "";
			x = 0.294922 * safezoneW + safezoneX;
			y = 0.666667 * safezoneH + safezoneY;
			w = 0.410156 * safezoneW;
			h = 0.0416667 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
			font = "RobotoCondensedLight";
		};
		class KISKA_dialogueGUI_playerResponseList: RscListBox
		{
			idc = 1500;

			x = 0.294922 * safezoneW + safezoneX;
			y = 0.708333 * safezoneH + safezoneY;
			w = 0.410156 * safezoneW;
			h = 0.0625 * safezoneH;
		};
	};
};