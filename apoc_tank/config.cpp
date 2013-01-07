#define private		0
#define protected		1
#define public		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define true	1
#define false	0

// tank visuals
 #define CanSeeRadar 1
 #define CanSeeEye 2
 #define CanSeeOptics 4
 #define CanSeeEar 8
 #define CanSeeCompass 16
 #define CanSeeAll 31
 #define CanSeePeripheral 32
 #define CanSeeRadarC CanSeeRadar+CanSeeCompass


class CfgPatches 
{
	class tank_apoc_shinkicker
	{ 
		units[] = {}; 
		requiredAddons[] = {CAData,CACharacters,CAWeapons,CASounds};
		requiredVersion = 1.0; 
	};
};

class CfgFactionClasses 
{
	class Apoc_Faction 
	{ 
		displayName = "Tanks"; 
		priority = 6; 
		side = "TCivilian"; 
	};

};

class CfgVehicleClasses
{
	class Hobo_Service_Name 
	{ 
		displayName = "2017 Vehicles";
	};
};

class CfgSkeletons
{
	class Vehicle;
	class TankBase: Vehicle
	{
		skeletonInherit="Vehicle";
		skeletonBones[]=
		{
			"kolL1",
			"",
			"kolL2",
			"",
			"kolL3",
			"",
			"kolL4",
			"",
			"kolL5",
			"",
			"kolL6",
			"",
			"kolL7",
			"",
			"kolL8",
			"",
			"kolP1",
			"",
			"kolP2",
			"",
			"kolP3",
			"",
			"kolP4",
			"",
			"kolP5",
			"",
			"kolP6",
			"",
			"kolP7",
			"",
			"kolP8",
			"",
			"podkoloL1",
			"",
			"podkoloL2",
			"",
			"podkoloL3",
			"",
			"podkoloL4",
			"",
			"podkoloL5",
			"",
			"podkoloL6",
			"",
			"podkoloL7",
			"",
			"podkoloL8",
			"",
			"podkoloP1",
			"",
			"podkoloP2",
			"",
			"podkoloP3",
			"",
			"podkoloP4",
			"",
			"podkoloP5",
			"",
			"podkoloP6",
			"",
			"podkoloP7",
			"",
			"podkoloP8",
			"",
			"koloL1",
			"podkoloL1",
			"koloL2",
			"podkoloL2",
			"koloL3",
			"podkoloL3",
			"koloL4",
			"podkoloL4",
			"koloL5",
			"podkoloL5",
			"koloL6",
			"podkoloL6",
			"koloL7",
			"podkoloL7",
			"koloL8",
			"podkoloL8",
			"koloP1",
			"podkoloP1",
			"koloP2",
			"podkoloP2",
			"koloP3",
			"podkoloP3",
			"koloP4",
			"podkoloP4",
			"koloP5",
			"podkoloP5",
			"koloP6",
			"podkoloP6",
			"koloP7",
			"podkoloP7",
			"koloP8",
			"podkoloP8",
			"ukaz_rychlo",
			"",
			"ukaz_rychlo2",
			"",
			"ukaz_rpm",
			"",
			"ukaz_radar",
			"",
			"hodinova",
			"",
			"minutova",
			"",
			"kompas",
			"",
			"ukazsmer",
			"",
			"damageHide",
			"",
			"podkoloL1_hide",
			"podkoloL1",
			"podkoloL2_hide",
			"podkoloL2",
			"podkoloL3_hide",
			"podkoloL3",
			"podkoloL4_hide",
			"podkoloL4",
			"podkoloL5_hide",
			"podkoloL5",
			"podkoloL6_hide",
			"podkoloL6",
			"podkoloL7_hide",
			"podkoloL7",
			"podkoloL8_hide",
			"podkoloL8",
			"podkoloP1_hide",
			"podkoloP1",
			"podkoloP2_hide",
			"podkoloP2",
			"podkoloP3_hide",
			"podkoloP3",
			"podkoloP4_hide",
			"podkoloP4",
			"podkoloP5_hide",
			"podkoloP5",
			"podkoloP6_hide",
			"podkoloP6",
			"podkoloP7_hide",
			"podkoloP7",
			"podkoloP8_hide",
			"podkoloP8"
		};
	};
	class Tank: TankBase
	{
		skeletonInherit="TankBase";
		skeletonBones[]=
		{
			"OtocVez",
			"",
			"OtocHlaven",
			"OtocVez",
			"OtocVelitele",
			"OtocVez",
			"OtocHlavenVelitele",
			"OtocVelitele",
			"poklop_driver",
			"",
			"poklop_commander",
			"OtocVelitele",
			"poklop_gunner",
			"OtocVez",
			"damageVez",
			"OtocVez"
		};
	};
	class T72Skeleton: Tank
	{
		skeletonInherit="Tank";
		skeletonBones[]={};
	};
	class APOC_TankSkeleton: Tank
	{
		skeletonInherit="Tank";
		skeletonBones[]={};
	};
	class M113Skeleton: Tank
	{
		skeletonInherit="Tank";
		skeletonBones[]=
		{
			"driver_seat",
			"",
			"damageDriver",
			"driver_seat",
			"damageHlaven",
			"OtocHlaven",
			"ammo_box",
			"OtocHlaven",
			"ammo_belt",
			"OtocHlaven"
		};
	};
	class BMP2Skeleton: Tank
	{
		skeletonInherit="Tank";
		skeletonBones[]=
		{
			"Launcher",
			"OtocVez"
		};
	};
	class ZSUSkeleton: Tank
	{
		skeletonInherit="TankBase";
		skeletonBones[]=
		{
			"OtocVez",
			"",
			"OtocHlaven",
			"OtocVez",
			"OtocVelitele",
			"OtocVez",
			"OtocHlavenVelitele",
			"OtocVelitele",
			"poklop_driver",
			"",
			"poklop_commander",
			"OtocVez",
			"poklop_gunner",
			"OtocVez",
			"ukaz_mph",
			"",
			"nadkoloL1",
			"podkoloL1",
			"nadkoloL2",
			"podkoloL2",
			"nadkoloL3",
			"podkoloL3",
			"nadkoloL4",
			"podkoloL4",
			"nadkoloL5",
			"podkoloL5",
			"nadkoloL6",
			"podkoloL6",
			"nadkoloP1",
			"podkoloP1",
			"nadkoloP2",
			"podkoloP2",
			"nadkoloP3",
			"podkoloP3",
			"nadkoloP4",
			"podkoloP4",
			"nadkoloP5",
			"podkoloP5",
			"nadkoloP6",
			"podkoloP6",
			"damageVez",
			"OtocVez"
		};
	};
	class m163A1vulcan: Tank
	{
		skeletonInherit="M113Skeleton";
		skeletonBones[]=
		{
			"gatling",
			"OtocHlaven"
		};
	};
};
class Rotation;
class CfgModels
{
	class Vehicle;
	class Tank: Vehicle
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
			"zadni svetlo",
			"brzdove svetlo",
			"PasOffsetP",
			"PasOffsetL",
			"telo",
			"pas_L",
			"pas_P",
			"motor",
			"vez",
			"zbran",
			"clan",
			"clan_sign"
		};
		skeletonName="Tank";
		class Animations
		{
			class damageHide
			{
				type="hide";
				source="damage";
				selection="damageHide";
			};
			class HatchDriver
			{
				type="rotation";
				source="hatchDriver";
				selection="poklop_driver";
				axis="osa_poklop_driver";
				animPeriod=0;
				angle0=0;
				angle1="rad -100";
			};
			class IndicatorSpeed
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo";
				axis="osa_rychlo";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorSpeed2
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo2";
				axis="osa_rychlo2";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorRPM
			{
				type="rotation";
				source="rpm";
				selection="ukaz_rpm";
				axis="osa_rpm";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=1;
				angle0=0;
				angle1="rad -340";
			};
			class Radar
			{
				type="rotation";
				source="time";
				selection="ukaz_radar";
				axis="osa_radar";
				memory="false";
				minValue=0;
				maxValue=2;
				sourceAddress="loop";
				angle0=0;
				angle1="rad 360";
			};
			class IndicatorTurret
			{
				type="rotation";
				source="turretDir";
				selection="ukazsmer";
				axis="osa_ukazsmer";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=6.283185;
				angle0=0;
				angle1="rad 360";
			};
			class WatchHour
			{
				type="rotation";
				source="clockHour";
				selection="hodinova";
				axis="osa_time";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad 360";
			};
			class WatchMinute
			{
				type="rotation";
				source="clockMinute";
				selection="minutova";
				axis="osa_time";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad 360";
			};
			class Wheel_kolL1
			{
				type="rotationX";
				source="wheelL";
				selection="kolL1";
				axis="";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad -360";
				sourceAddress="loop";
			};
			class Wheel_koloL1: Wheel_kolL1
			{
				selection="koloL1";
			};
			class Wheel_podkoloL1
			{
				type="translationY";
				source="damper";
				selection="podkoloL1";
				axis="";
				memory="false";
				animPeriod=0;
				minValue=-1000;
				maxValue=1000;
			};
			class Wheel_kolP1: Wheel_kolL1
			{
				source="wheelR";
				selection="kolP1";
			};
			class Wheel_koloP1: Wheel_koloL1
			{
				source="wheelR";
				selection="koloP1";
			};
			class Wheel_podkoloP1: Wheel_podkoloL1
			{
				selection="podkoloP1";
			};
			class Wheel_kolL2: Wheel_kolL1
			{
				selection="kolL2";
			};
			class Wheel_kolL3: Wheel_kolL1
			{
				selection="kolL3";
			};
			class Wheel_kolL4: Wheel_kolL1
			{
				selection="kolL4";
			};
			class Wheel_kolL5: Wheel_kolL1
			{
				selection="kolL5";
			};
			class Wheel_kolL6: Wheel_kolL1
			{
				selection="kolL6";
			};
			class Wheel_kolL7: Wheel_kolL1
			{
				selection="kolL7";
			};
			class Wheel_kolL8: Wheel_kolL1
			{
				selection="kolL8";
			};
			class Wheel_kolP2: Wheel_kolP1
			{
				selection="kolP2";
			};
			class Wheel_kolP3: Wheel_kolP1
			{
				selection="kolP3";
			};
			class Wheel_kolP4: Wheel_kolP1
			{
				selection="kolP4";
			};
			class Wheel_kolP5: Wheel_kolP1
			{
				selection="kolP5";
			};
			class Wheel_kolP6: Wheel_kolP1
			{
				selection="kolP6";
			};
			class Wheel_kolP7: Wheel_kolP1
			{
				selection="kolP7";
			};
			class Wheel_kolP8: Wheel_kolP1
			{
				selection="kolP8";
			};
			class Wheel_koloL2: Wheel_koloL1
			{
				selection="koloL2";
			};
			class Wheel_koloL3: Wheel_koloL1
			{
				selection="koloL3";
			};
			class Wheel_koloL4: Wheel_koloL1
			{
				selection="koloL4";
			};
			class Wheel_koloL5: Wheel_koloL1
			{
				selection="koloL5";
			};
			class Wheel_koloL6: Wheel_koloL1
			{
				selection="koloL6";
			};
			class Wheel_koloL7: Wheel_koloL1
			{
				selection="koloL7";
			};
			class Wheel_koloL8: Wheel_koloL1
			{
				selection="koloL8";
			};
			class Wheel_koloP2: Wheel_koloP1
			{
				selection="koloP2";
			};
			class Wheel_koloP3: Wheel_koloP1
			{
				selection="koloP3";
			};
			class Wheel_koloP4: Wheel_koloP1
			{
				selection="koloP4";
			};
			class Wheel_koloP5: Wheel_koloP1
			{
				selection="koloP5";
			};
			class Wheel_koloP6: Wheel_koloP1
			{
				selection="koloP6";
			};
			class Wheel_koloP7: Wheel_koloP1
			{
				selection="koloP7";
			};
			class Wheel_koloP8: Wheel_koloP1
			{
				selection="koloP8";
			};
			class Wheel_podkoloL2: Wheel_podkoloL1
			{
				selection="podkoloL2";
			};
			class Wheel_podkoloL3: Wheel_podkoloL1
			{
				selection="podkoloL3";
			};
			class Wheel_podkoloL4: Wheel_podkoloL1
			{
				selection="podkoloL4";
			};
			class Wheel_podkoloL5: Wheel_podkoloL1
			{
				selection="podkoloL5";
			};
			class Wheel_podkoloL6: Wheel_podkoloL1
			{
				selection="podkoloL6";
			};
			class Wheel_podkoloL7: Wheel_podkoloL1
			{
				selection="podkoloL7";
			};
			class Wheel_podkoloL8: Wheel_podkoloL1
			{
				selection="podkoloL8";
			};
			class Wheel_podkoloP2: Wheel_podkoloP1
			{
				selection="podkoloP2";
			};
			class Wheel_podkoloP3: Wheel_podkoloP1
			{
				selection="podkoloP3";
			};
			class Wheel_podkoloP4: Wheel_podkoloP1
			{
				selection="podkoloP4";
			};
			class Wheel_podkoloP5: Wheel_podkoloP1
			{
				selection="podkoloP5";
			};
			class Wheel_podkoloP6: Wheel_podkoloP1
			{
				selection="podkoloP6";
			};
			class Wheel_podkoloP7: Wheel_podkoloP1
			{
				selection="podkoloP7";
			};
			class Wheel_podkoloP8: Wheel_podkoloP1
			{
				selection="podkoloP8";
			};
			class podkoloL1_hide_damage: damageHide
			{
				selection="podkoloL1_hide";
			};
			class podkoloL2_hide_damage: damageHide
			{
				selection="podkoloL2_hide";
			};
			class podkoloL3_hide_damage: damageHide
			{
				selection="podkoloL3_hide";
			};
			class podkoloL4_hide_damage: damageHide
			{
				selection="podkoloL4_hide";
			};
			class podkoloL5_hide_damage: damageHide
			{
				selection="podkoloL5_hide";
			};
			class podkoloL6_hide_damage: damageHide
			{
				selection="podkoloL6_hide";
			};
			class podkoloL7_hide_damage: damageHide
			{
				selection="podkoloL7_hide";
			};
			class podkoloL8_hide_damage: damageHide
			{
				selection="podkoloL8_hide";
			};
			class podkoloP1_hide_damage: damageHide
			{
				selection="podkoloP1_hide";
			};
			class podkoloP2_hide_damage: damageHide
			{
				selection="podkoloP2_hide";
			};
			class podkoloP3_hide_damage: damageHide
			{
				selection="podkoloP3_hide";
			};
			class podkoloP4_hide_damage: damageHide
			{
				selection="podkoloP4_hide";
			};
			class podkoloP5_hide_damage: damageHide
			{
				selection="podkoloP5_hide";
			};
			class podkoloP6_hide_damage: damageHide
			{
				selection="podkoloP6_hide";
			};
			class podkoloP7_hide_damage: damageHide
			{
				selection="podkoloP7_hide";
			};
			class podkoloP8_hide_damage: damageHide
			{
				selection="podkoloP8_hide";
			};
			class damageVez: damageHide
			{
				selection="damageVez";
			};
		};
	};
	class t72: Tank
	{
		sectionsInherit="Tank";
		sections[]=
		{
			"zasleh_1"
		};
		skeletonName="T72Skeleton";
		class Animations: Animations
		{
			class MainTurret
			{
				type="rotationY";
				source="mainTurret";
				selection="OtocVez";
				axis="OsaVeze";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class MainGun: MainTurret
			{
				type="rotationX";
				source="mainGun";
				selection="OtocHlaven";
				axis="OsaHlavne";
			};
			class ObsTurret
			{
				type="rotationY";
				source="obsTurret";
				selection="OtocVelitele";
				axis="OsaVelitele";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class ObsGun: ObsTurret
			{
				type="rotationX";
				source="obsGun";
				selection="OtocHlavenVelitele";
				axis="OsaHlavneVelitele";
			};
			class HatchCommander
			{
				type="rotation";
				source="hatchCommander";
				selection="poklop_commander";
				axis="osa_poklop_commander";
				animPeriod=0;
				angle0=0;
				angle1="rad 100";
			};
			class HatchGunner
			{
				type="rotation";
				source="hatchGunner";
				selection="poklop_gunner";
				axis="osa_poklop_gunner";
				animPeriod=0;
				angle0=0;
				angle1="rad 100";
			};
			class IndicatorSpeed: IndicatorSpeed
			{
				maxValue="100 / 3.6";
				angle1="rad -270";
			};
			class IndicatorSpeed2: IndicatorSpeed2
			{
				maxValue="100 / 3.6";
				angle1="rad -270";
			};
			class IndicatorRPM: IndicatorRPM
			{
				angle1="rad -290";
			};
			class IndicatorCompass
			{
				type="rotation";
				source="direction";
				selection="kompas";
				axis="osa_kompas";
				memory="false";
				minValue=-3.141593;
				maxValue=3.141593;
				angle0=0;
				angle1="rad -360";
			};
			class OtocVelitele_hide: damageHide
			{
				selection="OtocVelitele";
			};
			class poklop_gunner_damage: damageHide
			{
				selection="poklop_gunner";
			};
			class poklop_driver_damage: damageHide
			{
				selection="poklop_driver";
			};
		};
	};
	class bmp2_ambulance: tank
	{
		skeletonName="BMP2Skeleton";
		class Animations: Animations
		{
			class HatchDriver: HatchDriver
			{
				angle1="rad -160";
			};
			class IndicatorSpeed: IndicatorSpeed
			{
				maxValue="40 / 3.6";
				angle1="rad -320";
			};
			class IndicatorRPM: IndicatorRPM
			{
				angle1="rad -230";
			};
		};
	};
	class bmp2: bmp2_ambulance
	{

		class Animations: Animations
		{
			class MainTurret
			{
				type="rotationY";
				source="mainTurret";
				selection="OtocVez";
				axis="OsaVeze";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class MainGun: MainTurret
			{
				type="rotationX";
				source="mainGun";
				selection="OtocHlaven";
				axis="OsaHlavne";
			};
			class Launcher: MainGun
			{
				selection="launcher";
				axis="launcher_axis";
				memory=1;
			};
			class ObsTurret
			{
				type="rotationY";
				source="obsTurret";
				selection="OtocVelitele";
				axis="OsaVelitele";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class ObsGun: ObsTurret
			{
				type="rotationX";
				source="obsGun";
				selection="OtocHlavenVelitele";
				axis="OsaHlavneVelitele";
			};
			class HatchCommander
			{
				type="rotation";
				source="hatchCommander";
				selection="poklop_commander";
				axis="osa_poklop_commander";
				animPeriod=0;
				angle0=0;
				angle1="rad -90";
			};
			class HatchGunner
			{
				type="rotation";
				source="hatchGunner";
				selection="poklop_gunner";
				axis="osa_poklop_gunner";
				animPeriod=0;
				angle0=0;
				angle1="rad -90";
			};
			class OtocVelitele_damage: damageHide
			{
				selection="OtocVelitele";
			};
			class poklop_commander_damage: damageHide
			{
				selection="poklop_commander";
			};
			class poklop_driver_damage: damageHide
			{
				selection="poklop_driver";
			};
			class poklop_gunner_damage: damageHide
			{
				selection="poklop_gunner";
			};
		};
	};
	class zsu: Tank
	{
		skeletonName="ZSUSkeleton";
		class Animations: Animations
		{
			class MainTurret
			{
				type="rotationY";
				source="mainTurret";
				selection="OtocVez";
				axis="OsaVeze";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class MainGun: MainTurret
			{
				type="rotationX";
				source="mainGun";
				selection="OtocHlaven";
				axis="OsaHlavne";
			};
			class ObsTurret
			{
				type="rotationY";
				source="obsTurret";
				selection="OtocVelitele";
				axis="OsaVelitele";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class ObsGun: ObsTurret
			{
				type="rotationX";
				source="obsGun";
				selection="OtocHlavenVelitele";
				axis="OsaHlavneVelitele";
			};
			class HatchCommander
			{
				type="rotation";
				source="hatchCommander";
				selection="poklop_commander";
				axis="osa_poklop_commander";
				animPeriod=0;
				angle0=0;
				angle1="rad 100";
			};
			class HatchGunner
			{
				type="rotation";
				source="hatchGunner";
				selection="poklop_gunner";
				axis="osa_poklop_gunner";
				animPeriod=0;
				angle0=0;
				angle1="rad 100";
			};
			class IndicatorSpeed: IndicatorSpeed
			{
				selection="ukaz_mph";
				axis="osa_mph";
				maxValue="100 / 3.6";
				angle1="rad 250";
			};
			class IndicatorRPM: IndicatorRPM
			{
				angle1="rad 315";
			};
			class nadkoloL1_damage: damageHide
			{
				selection="nadkoloL1";
			};
			class nadkoloL2_damage: damageHide
			{
				selection="nadkoloL2";
			};
			class nadkoloL3_damage: damageHide
			{
				selection="nadkoloL3";
			};
			class nadkoloL4_damage: damageHide
			{
				selection="nadkoloL4";
			};
			class nadkoloL5_damage: damageHide
			{
				selection="nadkoloL5";
			};
			class nadkoloL6_damage: damageHide
			{
				selection="nadkoloL6";
			};
			class nadkoloP1_damage: damageHide
			{
				selection="nadkoloP1";
			};
			class nadkoloP2_damage: damageHide
			{
				selection="nadkoloP2";
			};
			class nadkoloP3_damage: damageHide
			{
				selection="nadkoloP3";
			};
			class nadkoloP4_damage: damageHide
			{
				selection="nadkoloP4";
			};
			class nadkoloP5_damage: damageHide
			{
				selection="nadkoloP5";
			};
			class nadkoloP6_damage: damageHide
			{
				selection="nadkoloP6";
			};
			class poklop_commander_damage: damageHide
			{
				selection="poklop_commander";
			};
			class poklop_driver_damage: damageHide
			{
				selection="poklop_driver";
			};
			class poklop_gunner_damage: damageHide
			{
				selection="poklop_gunner";
			};
			class OtocVelitele_damage: damageHide
			{
				selection="OtocVelitele";
			};
		};
	};
	class apoc_tank: Tank
	{
		sectionsInherit="Tank";
		sections[]=
		{
			"zasleh_1"
		};
		skeletonName="APOC_TankSkeleton";
		class Animations: Animations
		{
			class MainTurret
			{
				type="rotationY";
				source="mainTurret";
				selection="OtocVez";
				axis="OsaVeze";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class MainGun: MainTurret
			{
				type="rotationX";
				source="mainGun";
				selection="OtocHlaven";
				axis="OsaHlavne";
			};
			class ObsTurret
			{
				type="rotationY";
				source="obsTurret";
				selection="OtocVelitele";
				axis="OsaVelitele";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class ObsGun: ObsTurret
			{
				type="rotationX";
				source="obsGun";
				selection="OtocHlavenVelitele";
				axis="OsaHlavneVelitele";
			};
			class HatchCommander
			{
				type="rotation";
				source="hatchCommander";
				selection="poklop_commander";
				axis="osa_poklop_commander";
				animPeriod=0;
				angle0=0;
				angle1="rad 95";
			};
			class IndicatorSpeed: IndicatorSpeed
			{
				maxValue="80 / 3.6";
				angle1="rad -270";
			};
			class IndicatorRPM: IndicatorRPM
			{
				angle1="rad -270";
			};
			class OtocVelitele_damage: damageHide
			{
				selection="OtocVelitele";
			};
			class poklop_commander_damage: damageHide
			{
				selection="poklop_commander";
			};
			class poklop_driver_damage: damageHide
			{
				selection="poklop_driver";
			};
		};
	};
	class m113_ambulance: Tank
	{
		skeletonName="M113Skeleton";
		class Animations: Animations
		{
			class HatchDriver: HatchDriver
			{
				angle1="rad 175";
			};
			class IndicatorSpeed: IndicatorSpeed
			{
				maxValue=16.670000;
				angle0=-2.268928;
				angle1=2.268928;
			};
			class IndicatorRPM: IndicatorRPM
			{
				angle0=-0.436332;
				angle1=0.436332;
			};
			class DriverSeat
			{
				type="translation";
				source="hatchDriver";
				angle0=0;
				angle1="rad -100";
				memory=1;
				selection="driver_seat";
				axis="driver_seat_axis";
				offset0=0;
				offset1=0.290000;
			};
			class poklop_driver_damage: damageHide
			{
				selection="poklop_driver";
			};
		};
	};
	class m113: m113_ambulance
	{
		class Animations: Animations
		{
			class MainTurret
			{
				type="rotationY";
				source="mainTurret";
				selection="OtocVez";
				axis="OsaVeze";
				animPeriod=0;
				memory=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class MainGun: MainTurret
			{
				type="rotationX";
				source="mainGun";
				selection="OtocHlaven";
				axis="OsaHlavne";
			};
			class ObsTurret
			{
				type="rotationY";
				source="obsTurret";
				selection="OtocVelitele";
				axis="OsaVelitele";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class ObsGun: ObsTurret
			{
				type="rotationX";
				source="obsGun";
				selection="OtocHlavenVelitele";
				axis="OsaHlavneVelitele";
			};
			class HatchGunner
			{
				animPeriod=0;
				type="rotation";
				source="hatchGunner";
				selection="poklop_gunner";
				axis="osa_poklop_gunner";
				angle0=-1.745329;
				angle1=0.000000;
			};
			class IndicatorSpeed: IndicatorSpeed
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo";
				axis="osa_rychlo";
				memory=0;
				minValue=0.000000;
				maxValue=16.670000;
				angle0=-2.268928;
				angle1=2.268928;
			};
			class IndicatorRPM: IndicatorRPM
			{
				angle0=-0.436332;
				angle1=0.436332;
			};
			class poklop_driver_damage: damageHide
			{
				selection="poklop_driver";
			};
			class poklop_gunner_damage: damageHide
			{
				selection="poklop_gunner";
			};
			class damageDriver: damageHide
			{
				selection="damageDriver";
			};
			class damageHlaven: damageHide
			{
				selection="damageHlaven";
			};
			class ammo_belt_rotation
			{
				type="rotationZ";
				source="belt_rotation";
				selection="ammo_belt";
				axis="ammo_belt_axis";
				memory=1;
				sourceAddress="loop";
				minValue=0.000000;
				maxValue=0.010000;
				angle0=0.000000;
				angle1=-0.209440;
			};
		};
	};
	class m113_racs: m113
	{
	};
	class m163_vulcan: m113
	{
		skeletonName="m163A1vulcan";
		class Animations: Animations
		{
			class MainTurret
			{
				type="rotationY";
				source="mainTurret";
				selection="OtocVez";
				axis="OsaVeze";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class MainGun: MainTurret
			{
				type="rotationX";
				source="mainGun";
				selection="OtocHlaven";
				axis="OsaHlavne";
			};
			class ObsTurret
			{
				type="rotationY";
				source="obsTurret";
				selection="OtocVelitele";
				axis="OsaVelitele";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
			};
			class ObsGun: ObsTurret
			{
				type="rotationX";
				source="obsGun";
				selection="OtocHlavenVelitele";
				axis="OsaHlavneVelitele";
			};
			class CannonGatling: Rotation
			{
				selection="gatling";
				begin="usti hlavne";
				end="konec hlavne";
				animPeriod=1;
				angle1="-1000 * 3.141592654";
				source="Cannon";
			};
			class OtocVelitele_damage: damageHide
			{
				selection="OtocVelitele";
			};
			class OtocHlaven_damage: damageHide
			{
				selection="OtocHlaven";
			};
		};
	};
	class m163_vulcan_racs: m163_vulcan
	{
	};
};


class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
		class HeadLimits;
	};
	class Tank: LandVehicle
	{
		driverOpticsModel = "\ca\Tracked\optika_tank_driver";
//		gunnerOpticsModel = "\ca\Tracked\optika_tank_gunner";
//		commanderOpticsModel = "\ca\Tracked\optika_tank_driver";
		commanderCanSee = 31; //CanSeeEye + CanSeeOptics+CanSeeEar+CanSeeCompass
    		gunnerCanSee = 30;
		class HitHull {armor=1;material=55;name="NEtelo";visual="telo";passThrough=1;}; // disabled selection from model LOD
		class HitLTrack {armor=0.15;material=55;name="pas_L";visual="pas_L";passThrough=0;};
		class HitRTrack {armor=0.15;material=55;name="pas_P";visual="pas_P";passThrough=0;};
		class HitEngine {armor=0.35;material=60;name="motor";visual="motor";passThrough=1;}
		weapons[] = {};
		magazines[] = {};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerAction = "ManActTestDriverOut";
				gunnerOpticsModel = "\ca\Tracked\optika_tank_gunner";
				gunnerOutOpticsModel = \ca\Weapons\optika_empty;
				gunBeg = "usti hlavne"; //gunBeg = endpoint of the gun
				gunEnd = "konec hlavne"; //gunEnd = chamber of the gun
				memoryPointsGetInGunner= "pos driver";
				memoryPointsGetInGunnerDir= "pos driver dir";
				viewGunnerInExternal = 0;

				class HitTurret {armor=1;material=55;name="vez";visual="vez";passThrough=1;};
				class HitGun {armor=0.3;material=55;name="zbran";visual="zbran";passThrough=0;};

				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						proxyType = CPCommander;
						proxyIndex = 1;
						gunnerName = $STR_POSITION_COMMANDER;
						primaryGunner = 0;
						primaryObserver = 1;

						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";

						//Not a very nice solution:
						soundServo[] = {"", db-50, 1.0};

						gunBeg = ""; //gunBeg = endpoint of the gun
						gunEnd = ""; //gunEnd = chamber of the gun

						minElev=-4; maxElev=+20; initElev=0;
						minTurn=-360; maxTurn=+360; initTurn=0;
						commanding = 2;
						outGunnerMayFire = true;
						inGunnerMayFire = true;
						viewGunnerInExternal = 0;
						gunnerOpticsModel = "\ca\Tracked\optika_tank_driver";
						gunnerOutOpticsModel = \ca\Weapons\optika_empty;
						gunnerOutOpticsColor[] = {0, 0, 0, 1};
						gunnerOutForceOptics = false;
						gunnerOutOpticsShowCursor = false;
						memoryPointGunnerOutOptics = "commander_weapon_view";
						memoryPointGunnerOptics= "commanderview";
						memoryPointsGetInGunner= "pos driver";
						memoryPointsGetInGunnerDir= "pos driver dir";
						memoryPointGun = "gun_muzzle";
						selectionFireAnim = "zasleh_1";
						class ViewOptics
						{
							initAngleX=0; minAngleX=-30; maxAngleX=+30;
							initAngleY=0; minAngleY=-100; maxAngleY=+100;
							initFov=0.42; minFov=0.22; maxFov=0.64;
						};
						class ViewGunner
						{
							initAngleX=5; minAngleX=-30; maxAngleX=+30;
							initAngleY=0; minAngleY=0; maxAngleY=0;
							initFov=0.42; minFov=0.22; maxFov=0.64;
						};
					};
				};
			};
		};
		soundEnviron[] = {"\ca\Tracked\Data\Sound\OldRolling_Treads1", db18, 0.8};
		soundEngine[] = {"\ca\Tracked\Data\Sound\OldIdle1", db20, 1};
		soundCrash[] = {"\ca\Tracked\Data\Sound\crash2", db30, 1};
		soundGear[] = {"\ca\Tracked\Data\Sound\Gear_Trans1", db-40, 1};
		soundDammage[] = {"\ca\Tracked\Data\Sound\alarm_loop1", db+0, 1};
		getInAction = GetInHigh;
		getOutAction = GetOutHigh;
		supplyRadius = 1.5;
		class ViewOptics: ViewOptics
		{
			initAngleX=0; minAngleX=-30; maxAngleX=+30;
			initAngleY=0; minAngleY=-100; maxAngleY=+100;
			initFov=0.9; minFov=0.9; maxFov=0.9;
		};
	};


//West Vehicles
	class apoc_tank: Tank
	{
		//--
		scope=public;
		displayName="They see me rollin";
		faction = "Apoc_Faction";
		vehicleClass = "Hobo_Service_Name";
		model = \apoc_tank\apoc_tank;
		picture="\ca\tracked\Data\ico\M1_abrams_CA.paa";
		Icon="\Ca\tracked\Data\map_ico\icomap_m1a1_CA.paa";
		mapSize = 11;
		forceHideGunner = false;
		
		commanderCanSee = 2;//default
		gunnerCanSee = 2;//default
		driverCanSee = 2;//default

		crew = SoldierWCrew;
		side=TWest;
		nameSound="Abrams";
		accuracy=0.70;

		armor=100;
		damageResistance = 0.00516;
		cost=4000000;
		audible = 5;
		class HitHull {armor=0.85;material=55;name="telo";visual="telo";passThrough=1;};

		maxSpeed=45

		driverForceOptics = 1;

		class Exhausts
		{
		   class Exhaust1
		   {
			   position = "vyfuk start";
			   direction = "vyfuk konec";
			   effect = "ExhaustsEffectBig";
		   };
		};
		soundEngine[]={\ca\Tracked\Data\Sound\M1A1_engine,db22,0.85};	// ModernIdle1
		soundEnviron[]={\ca\Tracked\Data\Sound\M1A1_treads2,db20,1};	// ModernRolling_Treads1
		soundGetOut[]={\ca\Tracked\Data\Sound\tank_door,db-40,1};
		soundGetIn[]={\ca\Tracked\Data\Sound\tank_door,db-40,1};
		insideSoundCoef = 0.2;
		typicalCargo[]={SoldierWCrew,SoldierWCrew,SoldierWCrew};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = Abrams_Gunner;
				gunnerInAction = Abrams_Gunner;
				weapons[]={};
				soundServo[]={\ca\Weapons\Data\Sound\gun_elevate,db-50,1.0};
				magazines[]={};
				forceHideGunner = 1;
				gunnerOpticsModel = "\ca\Tracked\optika_tank_gunner";
				minElev=-9; maxElev=+20; initElev=0;
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.166; minFov=0.025; maxFov=0.333;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						minElev=-25; maxElev=+60; initElev=0;
						minTurn=-360; maxTurn=+360; initTurn=0;
						weapons[] = {};
						magazines[] = {};
						outGunnerMayFire = true;
						inGunnerMayFire = true;
						gunnerAction = Abrams_CommanderOut;
						gunnerInAction = Abrams_Commander;
						gunnerOpticsModel = "\ca\Tracked\optika_M1A1_commander";
					};
				};
			};
		};

		driverAction = Abrams_DriverOut;
		driverInAction = Abrams_Driver;
		threat[]={1, 1, 0.3};

		class Damage
		{
			tex[]={};
			mat[]={
				"ca\tracked\data\detailmapy\m1_abrams_01_metal.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_01_metal.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_01_metal_destruct.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_02_metal.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_02_metal.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_02_metal_destruct.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_03_metal.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_03_metal.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_03_metal_destruct.rvmat",
				"ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat",
				"ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat",
				"ca\tracked\data\detailmapy\m1abrams_mg_mount_destruct.rvmat",
				"ca\weapons\data\m2.rvmat",
				"ca\weapons\data\m2.rvmat",
				"ca\weapons\data\m2_destruct.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_track_metal.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_track_metal.rvmat",
				"ca\tracked\data\detailmapy\m1_abrams_track_metal_destruct.rvmat"
			};
		};

		class Library {libTextDesc = $STR_LIB_M1A1;};
	};
};
