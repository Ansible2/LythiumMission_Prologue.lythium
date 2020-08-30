player addAction
[
	"open dialog",	// title
	{
		createDialog "KISKA_dialogueGUI";
		lbAdd [1500,"How's it going?"];
		lbAdd [1500,"Where'd you come from anyway?"];
		lbAdd [1500,"I don't want us to be up here for long, get the bird ready."];

		_display = findDisplay 1234;
		(_display displayCtrl 1100) ctrlSetStructuredText parseText "<t size='0.9'><t font='RobotoCondensedLight'>This is what the AI last saidThis is what the AI last saidThis is what the AI last saidThis is what the AI last saidThis is what the AI last saidThis is what the AI last saidThis is what the AI last said</t></t>";
		//ctrlSetStructuredText [11001,"Some Text"];
		
	},
	nil,		// arguments
	1.5,		// priority
	true,		// showWindow
	true,		// hideOnUse
	"",			// shortcut
	"true", 	// condition
	1,			// radius
	false,		// unconscious
	"",			// selection
	""			// memoryPoint
];

KISKA_updateDialogueGUI = {
	
};