//////////////////////////////
//    Dynamic-AI-Creator    //
//    Version 3.1b - 2014   //
//--------------------------//
//    DAC_Config_Arti       //
//--------------------------//
//    Script by Silola      //
//    silola@freenet.de     //
//////////////////////////////

private [
			"_ArtiSide","_ArtiTyp","_array","_ArtiSets","_set0","_set1",
			"_set2","_set3","_set4","_set5","_set6","_set7","_set8","_set9","_set10","_s"
		];

			_ArtiTyp = _this select 0;_array = [];_s = 0;_set10 = 0;
			_set0 = [];_set1 = [];_set2 = [];_set3 = [];_set4 = [];_set5 = [];_set6 = [];_set7 = [];_set8 = [];_set9 = [];


if(_ArtiTyp == 0) exitwith {};

switch (_ArtiTyp) do
{
//-------------------------------------------------------------------------------------------------------------------------
	case 1:
	{
		_set0  = [20,2,0,60];
		_set1  = [2,0.1,10,[],3,30];
		_set2  = [100,10,50,500,4,1,0];
		_set3  = [["O_Mortar_01_F",["M_PG_AT"]]];
		_set4  = [5,5,1];
		_set5  = [10,30,1];
		_set6  = [10,30,1];
		_set7  = [0.1,0.5,1];
		_set8  = [];
		_set9  = [];
		_set10 = 15000;
	};
//-------------------------------------------------------------------------------------------------------------------------
	Default {
				if(DAC_Basic_Value != 5) then
				{
					DAC_Basic_Value = 5;publicvariable "DAC_Basic_Value";
					hintc "Error: DAC_Config_Camps > No valid config number";
				};
				if(true) exitwith {};
			};
};

_array = [_set0,_set1,_set2,_set3,_set4,_set5,_set6,_set7,_set8,_set9,_set10];
_array