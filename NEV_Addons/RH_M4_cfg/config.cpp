class CfgPatches {
	class RH_m4_cfg {
		units[] = {"RH_m4m16ammobox"};
		weapons[] = {"RH_hbsd","RH_Delft","RH_m4covers_s","RH_m4covers_f","RH_m16covers_s","RH_m16covers_f","RH_m4","RH_m4_m203","RH_m4_ris","RH_m4_ris_m203","RH_m4_ris_m203s","RH_m4_ris_m","RH_m4m","RH_m4_moe","RH_m4sbr","RH_m4a6","RH_hb","RH_sbr9","RH_m16a1","RH_m16a1gl","RH_m16a2","RH_m16a2gl","RH_m16a4","RH_m16a4_m","RH_m16a4gl","RH_m16a6","RH_hk416","RH_hk416c","RH_hk416s","RH_m27iar","RH_mk12mod1","RH_samr","RH_m110","RH_mk11","RH_sr25ec"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","RH_acc","asdg_jointrails"};
	};
};
class cfgRecoils
{
	class Default;
	class RH_recoil_default: Default
	{
		muzzleOuter[]={0.30000001,1,0.30000001,0.2};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.029999999,0.059999999};
		permanent=0.1;
		temporary=0.0099999998;
	};
	class RH_recoil_AR10: RH_recoil_default
	{
		muzzleOuter[]={0.40000001,1.5,0.60000002,0.40000001};
		kickBack[]={0.039999999,0.07};
		temporary=0.0099999998;
	};
	class RH_recoil_M4: RH_recoil_default
	{
		muzzleOuter[]={0.30000001,1,0.40000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.0099999998;
	};
	class RH_recoil_M16: RH_recoil_default
	{
		muzzleOuter[]={0.30000001,0.80000001,0.40000001,0.30000001};
		kickBack[]={0.02,0.039999999};
		temporary=0.0099999998;
	};
	class RH_recoil_HB: RH_recoil_default
	{
		muzzleOuter[]={0.34999999,1.2,0.44999999,0.34999999};
		kickBack[]={0.029999999,0.050000001};
		temporary=0.0099999998;
	};
	class RH_recoil_SBR9: RH_recoil_default
	{
		muzzleOuter[]={0.1,0.60000002,0.2,0.2};
		kickBack[]={0.0099999998,0.02};
		temporary=0.0099999998;
	};
	RH_AR10_Recoil[]={0,0.0089999996,0.017000001,0.02,0.0089999996,0.017000001,0.029999999,0.0070000002,0.023,0.16,0,0};
	RH_AR10_RecoilProne[]={0,0.0070000002,0.0099999998,0.013,0.0070000002,0.0099999998,0.029999999,0.003,0,0.12,0,0};
	RH_M4_Recoil[]={0,0.0049999999,0.0049999999,0.0049999999,0.0099999998,0.011,0.090000004,0.0049999999,-0.00039999999,0.13,0,0};
	RH_M4_RecoilProne[]={0,0.0049999999,0.0049999999,0.0049999999,0.0099999998,0.0089999996,0.075000003,0.0049999999,-0.00030000001,0.13,0,0};
	RH_M4_Recoil_Auto[]={0,0.0070000002,0.015,0.0070000002,0.0099999998,0.022,0.090000004,0.02,0.0099999998,0.13,0,0};
	RH_M4_RecoilProneAuto[]={0,0.0049999999,0.0049999999,0.0049999999,0.0099999998,0.0089999996,0.075000003,0.0049999999,-0.00030000001,0.13,0,0};
	RH_M4_Recoil_GLRecoil[]={0,0.0049999999,0,0.0099999998,0.0049999999,0,0.02,0.003,0.0060000001,0.12,0,0};
	RH_M203GLBase[]={0,0.029999999,0.050000001,0.13,0.0099999998,-0.001,0.25999999,0,0};
	RH_M249_Recoil[]={0,0.0060000001,-0.003,0.050000001,0.0060000001,0.0060000001,0.029999999,0.0060000001,0.0060000001,0.17,0,0};
	RH_M249_RecoilProne[]={0,0.0049999999,0.0020000001,0.07,0.0049999999,-0.0015,0.12,0,0};
	RH_Mk48_Recoil[]={0,0.0099999998,0.0020000001,0.050000001,0.0099999998,0.003,0.039999999,0.0060000001,0.02,0.17,0,0};
	RH_Mk48_RecoilProne[]={0,0.0099999998,0.0012000001,0.090000004,0.0089999996,-0.001,0.15000001,0,0};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class B_9x21_Ball;
	class B_556x45_Ball;
	class B_65x39_Caseless;
	class B_762x51_Ball;
	class RH_9x19_B_M822: B_9x21_Ball
	{
		hit=5.3592143;
		typicalSpeed=423;
		airFriction=-0.0023934371;
		caliber=0.53100002;
		deflecting=28;
		cartridge="FxCartridge_65_caseless";
	};
	class RH_9x19_B_HP: B_9x21_Ball
	{
		hit=8.7903481;
		typicalSpeed=416;
		airFriction=-0.0024402351;
		caliber=0.38499999;
		deflecting=25;
		cartridge="FxCartridge_65_caseless";
	};
	class RH_9x19_B_HPSB: B_9x21_Ball
	{
		hit=7.6707625;
		typicalSpeed=333;
		airFriction=-0.00145426;
		caliber=0.33399999;
		deflecting=21;
		visibleFire=1;
		audibleFire=2;
		cartridge="FxCartridge_65_caseless";
	};
	class RH_556x45_B_M855A1: B_556x45_Ball
	{
		hit=8.6063738;
		typicalSpeed=960.12;
		airFriction=-0.0011336141;
		caliber=0.90100002;
		deflecting=21;
		visibleFire=3;
		audibleFire=6;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
	};
	class RH_556x45_B_Mk318: B_556x45_Ball
	{
		hit=10.073716;
		typicalSpeed=955.24323;
		airFriction=-0.0011487255;
		caliber=0.73400003;
		deflecting=18;
		visibleFire=3;
		audibleFire=5.5;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
	};
	class RH_556x45_B_Mk262: B_556x45_Ball
	{
		hit=11.570251;
		typicalSpeed=868.67999;
		airFriction=-0.0010867938;
		caliber=0.61500001;
		deflecting=16;
		visibleFire=2.5;
		audibleFire=5;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
	};
	class RH_68x43_B_FMJ: B_65x39_Caseless
	{
		hit=9.8421144;
		typicalSpeed=806.19598;
		airFriction=-0.0013388559;
		caliber=0.67500001;
		deflecting=23;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class RH_68x43_B_Match: B_65x39_Caseless
	{
		hit=11.822756;
		typicalSpeed=715.06079;
		airFriction=-0.00083907897;
		caliber=0.359;
		deflecting=18;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class RH_762x35_B_FMJ: B_65x39_Caseless
	{
		hit=7.798408;
		typicalSpeed=565;
		airFriction=-0.001105223;
		caliber=0.61500001;
		deflecting=20;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class RH_762x35_B_Match: B_65x39_Caseless
	{
		hit=10.052622;
		typicalSpeed=608;
		airFriction=-0.001152804;
		caliber=0.417;
		deflecting=17;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class RH_762x35_B_MSB: B_65x39_Caseless
	{
		hit=6.3931146;
		typicalSpeed=290;
		airFriction=-0.00028132999;
		caliber=0.602;
		deflecting=14;
		visibleFire=1.25;
		audibleFire=2.5;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class RH_762x51_B_M80A1: B_762x51_Ball
	{
		hit=9.6967621;
		typicalSpeed=906.78003;
		airFriction=-0.00085536001;
		caliber=1.075;
		deflecting=21;
		visibleFire=3.1500001;
		audibleFire=6.1999998;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class RH_762x51_B_Mk316LR: B_762x51_Ball
	{
		hit=14.890331;
		typicalSpeed=790.95599;
		airFriction=-0.00077634002;
		caliber=0.449;
		deflecting=18;
		visibleFire=3.0999999;
		audibleFire=6.1500001;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class RH_762x51_B_Mk319: B_762x51_Ball
	{
		hit=14.553685;
		typicalSpeed=896.72162;
		airFriction=-0.00111169;
		caliber=0.79400003;
		deflecting=18;
		visibleFire=3.25;
		audibleFire=6.3000002;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class RH_762x51_B_LFMJSB: B_762x51_Ball
	{
		hit=5.4738483;
		typicalSpeed=339.85199;
		airFriction=-0.00049784;
		caliber=0.64899999;
		deflecting=15;
		visibleFire=1.1;
		audibleFire=2.2;
		cartridge="FxCartridge_65_caseless";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_9x21_Mag;
	class RH_20Rnd_762x51_AR10: 20Rnd_762x51_Mag
	{
		displayName="7.62mm 20Rnd AR10 Mag";
		picture="\rh_m4\inv\m_ar10.paa";
		model="\RH_m4\mags\mag_ar10.p3d";
		ammo="RH_762x51_B_M80A1";
		initSpeed=820;
	};
	class RH_20Rnd_762x51_M80A1: 20Rnd_762x51_Mag
	{
		displayName="7.62mm 20Rnd M110 Mag M80A1";
		picture="\rh_m4\inv\m_m110.paa";
		model="\RH_m4\mags\mag_sr25.p3d";
		ammo="RH_762x51_B_M80A1";
		initSpeed=784;
	};
	class RH_20Rnd_762x51_Mk316LR: 20Rnd_762x51_Mag
	{
		displayName="7.62mm 20Rnd M110 Mag Mk316LR";
		picture="\rh_m4\inv\m_m110.paa";
		model="\RH_m4\mags\mag_sr25.p3d";
		ammo="RH_762x51_B_Mk316LR";
		initSpeed=784;
	};
	class RH_20Rnd_762x51_Mk319: 20Rnd_762x51_Mag
	{
		displayName="7.62mm 20Rnd SR25EC Mag Mk319";
		picture="\rh_m4\inv\m_m110.paa";
		model="\RH_m4\mags\mag_sr25.p3d";
		ammo="RH_762x51_B_Mk319";
		initSpeed=784;
	};
	class RH_20Rnd_762x51_LFMJSB: 20Rnd_762x51_Mag
	{
		displayName="7.62mm 20Rnd M110 Mag LFMJSB";
		picture="\rh_m4\inv\m_m110.paa";
		model="\RH_m4\mags\mag_sr25.p3d";
		ammo="RH_762x51_B_LFMJSB";
		initSpeed=339.85199;
	};
	class RH_30Rnd_68x43_FMJ: 30Rnd_556x45_Stanag
	{
		displayName="6.8x43mm SPC 30rnd STANAG Mag FMJ";
		descriptionShort="Caliber: 6.8x43 mm FMJ<br/>Rounds: 30<br/>Used in: M4A6/M16A6";
		model="\RH_m4\mags\mag_m16.p3d";
		ammo="RH_68x43_B_FMJ";
		mass=10;
		initSpeed=810;
	};
	class RH_30Rnd_68x43_Match: 30Rnd_556x45_Stanag
	{
		displayName="6.8x43mm SPC 30rnd STANAG Mag Match";
		descriptionShort="Caliber: 6.8x43 mm Match<br/>Rounds: 30<br/>Used in: M4A6/M16A6";
		model="\RH_m4\mags\mag_m16.p3d";
		ammo="RH_68x43_B_Match";
		mass=10;
		initSpeed=810;
	};
	class RH_60Rnd_556x45_M855A1: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 60rnd STANAG Mag M855A1";
		picture="\rh_m4\inv\m_mag60.paa";
		displayNameShort="M855A1 EPR";
		model="\RH_m4\mags\mag5_60.p3d";
		ammo="RH_556x45_B_M855A1";
		count=60;
		mass=20;
		initSpeed=920;
	};
	class RH_60Rnd_556x45_Mk318: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 60rnd STANAG Mag Mk318";
		picture="\rh_m4\inv\m_mag60.paa";
		displayNameShort="Mk318";
		model="\RH_m4\mags\mag5_60.p3d";
		ammo="RH_556x45_B_Mk318";
		count=60;
		mass=20;
		initSpeed=920;
	};
	class RH_60Rnd_556x45_Mk262: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 60rnd STANAG Mag Mk262";
		picture="\rh_m4\inv\m_mag60.paa";
		displayNameShort="Mk262";
		model="\RH_m4\mags\mag5_60.p3d";
		ammo="RH_556x45_B_Mk262";
		count=60;
		mass=20;
		initSpeed=930;
	};
	class RH_30Rnd_556x45_M855A1: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 30rnd STANAG Mag M855A1";
		displayNameShort="M855A1 EPR";
		model="\RH_m4\mags\mag_m16.p3d";
		ammo="RH_556x45_B_M855A1";
		initSpeed=920;
	};
	class RH_30Rnd_556x45_Mk318: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 30rnd STANAG Mag Mk318";
		displayNameShort="Mk318";
		model="\RH_m4\mags\mag_m16.p3d";
		ammo="RH_556x45_B_Mk318";
		initSpeed=920;
	};
	class RH_30Rnd_556x45_Mk262: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 30rnd STANAG Mag Mk262";
		displayNameShort="Mk262";
		model="\RH_m4\mags\mag_m16.p3d";
		ammo="RH_556x45_B_Mk262";
		initSpeed=930;
	};
	class RH_20Rnd_556x45_M855A1: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 20rnd STANAG Mag M855A1";
		displayNameShort="M855A1 EPR";
		picture="\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		model="\RH_m4\mags\mag_m16a1.p3d";
		ammo="RH_556x45_B_M855A1";
		count=20;
		mass=6;
		initSpeed=920;
	};
	class RH_20Rnd_556x45_Mk318: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 20rnd STANAG Mag Mk318";
		displayNameShort="Mk318";
		picture="\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		model="\RH_m4\mags\mag_m16a1.p3d";
		ammo="RH_556x45_B_Mk318";
		count=20;
		mass=6;
		initSpeed=920;
	};
	class RH_20Rnd_556x45_Mk262: 30Rnd_556x45_Stanag
	{
		displayName="5.56mm 20rnd STANAG Mag Mk262";
		displayNameShort="Mk262";
		picture="\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		model="\RH_m4\mags\mag_m16a1.p3d";
		ammo="RH_556x45_B_Mk262";
		count=20;
		mass=6;
		initSpeed=930;
	};
	class RH_30Rnd_762x35_FMJ: 30Rnd_556x45_Stanag
	{
		displayName=".300 AAC Blackout 30rnd STANAG Mag FMJ";
		descriptionShort="Caliber: .300 AAC FMJ<br/>Rounds: 30<br/>Used in: AAC Honey Badger";
		model="\RH_m4\mags\mag_hb.p3d";
		ammo="RH_762x35_B_FMJ";
		initSpeed=675;
	};
	class RH_30Rnd_762x35_Match: 30Rnd_556x45_Stanag
	{
		displayName=".300 AAC Blackout 30rnd STANAG Mag Match";
		descriptionShort="Caliber: .300 AAC Match<br/>Rounds: 30<br/>Used in: AAC Honey Badger";
		model="\RH_m4\mags\mag_hb.p3d";
		ammo="RH_762x35_B_Match";
		initSpeed=675;
	};
	class RH_30Rnd_762x35_MSB: 30Rnd_556x45_Stanag
	{
		displayName=".300 AAC Blackout 30rnd STANAG Mag MSB";
		descriptionShort="Caliber: .300 AAC MSB<br/>Rounds: 30<br/>Used in: AAC Honey Badger";
		model="\RH_m4\mags\mag_hb.p3d";
		ammo="RH_762x35_B_MSB";
		initSpeed=290;
	};
	class RH_32Rnd_9mm_M822: 30Rnd_9x21_Mag
	{
		displayName="9mm AR magazine M822";
		picture="\rh_m4\inv\m_ar9.paa";
		descriptionShort="Caliber: 9mm M822<br/>Rounds: 32<br/>Used in: SBR9";
		model="\RH_m4\mags\mag_9mm.p3d";
		ammo="RH_9x19_B_M822";
		initSpeed=370;
	};
	class RH_32Rnd_9mm_HP: 30Rnd_9x21_Mag
	{
		displayName="9mm AR magazine HP";
		picture="\rh_m4\inv\m_ar9.paa";
		descriptionShort="Caliber: 9mm HP<br/>Rounds: 32&<br/>Used in: SBR9";
		model="\RH_m4\mags\mag_9mm.p3d";
		ammo="RH_9x19_B_HP";
		initSpeed=370;
	};
	class RH_32Rnd_9mm_HPSB: 30Rnd_9x21_Mag
	{
		displayName="9mm AR magazine HPSB";
		picture="\rh_m4\inv\m_ar9.paa";
		descriptionShort="Caliber: 9mm HPSB<br/>Rounds: 32<br/>Used in: SBR9";
		model="\RH_m4\mags\mag_9mm.p3d";
		ammo="RH_9x19_B_HPSB";
		initSpeed=333;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_9MM;
class asdg_UnderSlot;
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class WeaponSlotsInfo;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ItemCore;
	class ItemInfo;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Zasleh2;
	class RH_hbsd: ItemCore
	{
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		author="RobertHammer";
		scope=2;
		displayName="AAC Honey Badger suppressor";
		picture="\RH_m4\inv\ui\hbsd_ui_ca.paa";
		model="\RH_m4\RH_hbsd";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=4;
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
			};
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef="1.0f";
				artilleryDispersionCoef="1.0f";
				inertiaCoef="0.9f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
		};
		inertia=0.2;
	};
	class RH_Delft: ItemCore
	{
		scope=2;
		author="RobertHammer";
		displayName="Delft scope";
		picture="\RH_M4\inv\ui\Delft_ui_ca.paa";
		model="\RH_M4\RH_Delft.p3d";
		descriptionShort="$STR_A3_cfgWeapons_optic_Valdada1";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=10;
			RMBhint="Delft";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Delftcqb
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.5;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class Delftscope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.0691;
					opticsZoomMax=0.0691;
					opticsZoomInit=0.0691;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
	};
	class RH_m4covers_s: ItemCore
	{
		scope=2;
		author="RobertHammer";
		displayName="M4 side rail covers";
		picture="\RH_M4\inv\ui\m4covers_s_ui_ca.paa";
		model="\RH_M4\RH_m4covers_s.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
		};
		inertia=0;
	};
	class RH_m4covers_f: ItemCore
	{
		scope=2;
		author="RobertHammer";
		displayName="M4 full rail covers";
		picture="\RH_M4\inv\ui\m4covers_f_ui_ca.paa";
		model="\RH_M4\RH_m4covers_f.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
		};
		inertia=0;
	};
	class RH_m16covers_s: ItemCore
	{
		scope=2;
		author="RobertHammer";
		displayName="M16A4 side rail covers";
		picture="\RH_M4\inv\ui\m16covers_s_ui_ca.paa";
		model="\RH_M4\RH_m16covers_s.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
		};
		inertia=0;
	};
	class RH_m16covers_f: ItemCore
	{
		scope=2;
		author="RobertHammer";
		displayName="M16A4 full rail covers";
		picture="\RH_M4\inv\ui\m16covers_f_ui_ca.paa";
		model="\RH_M4\RH_m16covers_f.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=1;
		};
		inertia=0;
	};
	class RH_ar10: Rifle_Base_F
	{
		scope=2;
		author="RobertHammer";
		cursor="srifle";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.39810717,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.39810717,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.39810717,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.39810717,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.2818383,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.2818383,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.2818383,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.2818383,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.2818383,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.2818383,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.2818383,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.2818383,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		changeFiremodeSound[]=
		{
			"\RH_m4\sound\m4_selector",
			0.5,
			1,
			10
		};
		drySound[]=
		{
			"\RH_m4\sound\dry",
			0.80000001,
			1,
			15
		};
		displayNAme="AR-10";
		model="\RH_m4\RH_AR10.p3d";
		picture="\RH_m4\inv\ar10_x_ca.paa";
		magazines[]=
		{
			"RH_20Rnd_762x51_AR10"
		};
		reloadAction="GestureReloadSMG_02";
		handAnim[]={};
		maxZeroing=1200;
		inertia=0.5;
		recoil="RH_recoil_AR10";
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_Rifle762Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=125;
			class CowsSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleItems[]=
				{
					"RH_Delft"
				};
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1",
			"fullauto_medium"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\ebr-3",
					0.5,
					1.2,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\ebr-3",
					0.5,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\ar10_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\ar10_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\ar10_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\ar10_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\sounds_f\weapons\silenced\silent-11",
					1,
					1,
					200
				};
				begin2[]=
				{
					"A3\sounds_f\weapons\silenced\silent-12",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime=0.085000001;
			recoil="RH_AR10_Recoil";
			recoilProne="RH_AR10_RecoilProne";
			dispersion=0.00050000002;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\ebr-3",
					0.5,
					1.2,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\ebr-3",
					0.5,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\ar10_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\ar10_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\ar10_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\ar10_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\sounds_f\weapons\silenced\silent-11",
					1,
					1,
					200
				};
				begin2[]=
				{
					"A3\sounds_f\weapons\silenced\silent-12",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime=0.085000001;
			recoil="RH_AR10_Recoil";
			recoilProne="RH_AR10_RecoilProne";
			dispersion=0.00050000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\ar10_reload",
			1,
			1,
			15
		};
	};
	class RH_m110: Rifle_Base_F
	{
		scope=2;
		author="RobertHammer";
		cursor="srifle";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.39810717,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.39810717,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.39810717,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.39810717,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.2818383,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.2818383,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.2818383,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.2818383,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.2818383,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.2818383,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.2818383,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.2818383,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		changeFiremodeSound[]=
		{
			"\RH_m4\sound\m4_selector",
			0.5,
			1,
			10
		};
		drySound[]=
		{
			"\RH_m4\sound\dry",
			0.80000001,
			1,
			15
		};
		displayNAme="M110";
		model="\RH_m4\RH_M110.p3d";
		picture="\RH_m4\inv\m110_x_ca.paa";
		magazines[]=
		{
			"RH_20Rnd_762x51_M80A1",
			"RH_20Rnd_762x51_Mk316LR",
			"RH_20Rnd_762x51_LFMJSB"
		};
		reloadAction="GestureReloadSMG_02";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_m110.rtm"
		};
		inertia=0.60000002;
		maxZeroing=1200;
		recoil="RH_recoil_AR10";
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_Rifle762Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=125;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"RH_m110sd",
					"RH_m110sd_t"
				};
				iconPosition[]={0.050000001,0.43000001};
				conScale=0.2;
			};
			class asdg_MuzzleSlot_762_M110: asdg_MuzzleSlot_762
			{
				iconPosition[]={0.050000001,0.43000001};
				conScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.30000001,0.44999999};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint="center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.55000001,0.30000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="center";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0.30000001,0.69999999};
				iconScale=0.25;
			};
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\ebr-3",
					0.5,
					1.2,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\ebr-3",
					0.5,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m110_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m110_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m110_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m110_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m110_sd_s1.wss",
					1,
					1,
					200
				};
				begin2[]=
				{
					"RH_m4\sound\m110_sd_s2.wss",
					1,
					1,
					200
				};
				begin3[]=
				{
					"RH_m4\sound\m110_sd_s3.wss",
					1,
					1,
					200
				};
				begin4[]=
				{
					"RH_m4\sound\m110_sd_s4.wss",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			reloadTime=0.085000001;
			recoil="RH_AR10_Recoil";
			recoilProne="RH_AR10_RecoilProne";
			dispersion=0.00012;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\m4_reload",
			1,
			1,
			15
		};
	};
	class RH_Mk11: RH_m110
	{
		author="RobertHammer";
		model="\RH_M4\RH_mk11.p3d";
		displayName="Mk11";
		picture="\RH_m4\inv\mk11_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=125;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"RH_m110sd",
					"RH_m110sd_t"
				};
			};
			class asdg_MuzzleSlot_762_M110
			{
			};
		};
	};
	class RH_SR25EC: RH_m110
	{
		author="RobertHammer";
		model="\RH_M4\RH_sr25ec.p3d";
		displayName="SR25EC";
		picture="\RH_m4\inv\sr25ec_x_ca.paa";
		inertia=0.5;
		magazines[]=
		{
			"RH_20Rnd_762x51_M80A1",
			"RH_20Rnd_762x51_Mk319",
			"RH_20Rnd_762x51_LFMJSB"
		};
		initSpeed=-0.98000002;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
	class RH_m4: Rifle_Base_F
	{
		scope=2;
		author="RobertHammer";
		magazines[]=
		{
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_Mk262",
			"RH_30Rnd_556x45_Mk318",
			"RH_20Rnd_556x45_M855A1",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk318",
			"RH_60Rnd_556x45_M855A1",
			"RH_60Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk318",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		class Library
		{
			libTextDesc="Colt M4";
		};
		reloadAction="GestureReloadSMG_02";
		maxrecoilsway=0.003;
		swaydecayspeed=0;
		recoil="RH_recoil_M4";
		initSpeed=-0.93000001;
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_Rifle556Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
			class PointerSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0.37};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0.5,0.2};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="center";
			};
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Assault rifle<br/>Caliber: 5.56 mm";
		displayName="M4";
		model="\RH_m4\RH_m4.p3d";
		picture="\RH_m4\inv\m4_x_ca.paa";
		discreteDistance[]={100,200,300,400,500,600,800};
		discreteDistanceInitIndex=1;
		weaponInfoType="RscWeaponZeroing";
		inertia=0.40000001;
		maxZeroing=1000;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_m16.rtm"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m4_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m4_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m4_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.075000003;
			recoil="RH_M4_Recoil";
			recoilProne="RH_M4_RecoilProne";
			dispersion=0.0022499999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=225;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m4_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m4_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m4_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadtime=0.075000003;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			dispersion=0.0022499999;
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=60;
			midRangeProbab=0.69999999;
			maxRange=120;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m4_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m4_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m4_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.075000003;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			dispersion=0.0022499999;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class M203: UGL_F
		{
			displayName="M203";
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useModelOptics=0;
			useExternalOptic=0;
			recoil="RH_M203GLBase";
			magazines[]=
			{
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell"
			};
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",
					1,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					1
				};
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"RH_m4\sound\m203",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadMagazineSound[]=
			{
				"RH_m4\sound\m203_reload",
				1,
				1,
				10
			};
			cameraDir="OP_look";
			discreteDistance[]={50,100,150,200,250};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4",
				"OP_eye5"
			};
			discreteDistanceInitIndex=1;
		};
		aiDispersionCoefY=10;
		aiDispersionCoefX=8;
		changeFiremodeSound[]=
		{
			"\RH_m4\sound\m4_selector",
			0.5,
			1,
			10
		};
		drySound[]=
		{
			"\RH_m4\sound\dry",
			0.80000001,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"RH_m4\sound\m4_reload",
			1,
			1,
			15
		};
	};
	class RH_M4_M203: RH_m4
	{
		author="RobertHammer";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4gl.rtm"
		};
		model="\RH_M4\RH_m4_m203.p3d";
		displayName="M4 M203";
		picture="\RH_m4\inv\m4_m203_x_ca.paa";
		inertia=0.5;
		muzzles[]=
		{
			"this",
			"M203"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=125;
		};
	};
	class RH_M4_ris: RH_m4
	{
		author="RobertHammer";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4vg.rtm"
		};
		model="\RH_M4\RH_m4_ris.p3d";
		displayName="M4 RIS";
		picture="\RH_m4\inv\m4_ris_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
				compatibleItems[]=
				{
					"RH_m4covers_s",
					"RH_m4covers_f"
				};
				iconPosition[]={0.30000001,0.34999999};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint="center";
			};
			class MuzzleSlot: MuzzleSlot
			{
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail
			{
				iconPosition[]={0.30000001,0.34999999};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint="center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.2};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="center";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint="Bottom";
				iconPosition[]={0.27000001,0.69999999};
				iconScale=0.25;
			};
		};
	};
	class RH_M4_ris_M203: RH_M4_ris
	{
		author="RobertHammer";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4gl.rtm"
		};
		model="\RH_M4\RH_m4_ris_m203.p3d";
		displayName="M4 RIS M203";
		picture="\RH_m4\inv\m4_ris_m203_x_ca.paa";
		inertia=0.5;
		muzzles[]=
		{
			"this",
			"M203"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=125;
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
				compatibleItems[]=
				{
					"RH_m4covers_s"
				};
			};
			class UnderBarrelSlot
			{
			};
		};
	};
	class RH_M4_ris_M203s: RH_M4_ris_M203
	{
		author="RobertHammer";
		displayName="M4 RIS M203S";
		picture="\RH_m4\inv\m4_ris_m203s_x_ca.paa";
		model="\RH_M4\RH_m4_ris_m203s.p3d";
	};
	class RH_M4A1_ris: RH_M4_ris
	{
		author="RobertHammer";
		displayName="M4A1 RIS";
		picture="\RH_m4\inv\m4_ris_x_ca.paa";
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2"
		};
	};
	class RH_M4A1_ris_M203: RH_M4_ris_M203
	{
		author="RobertHammer";
		displayName="M4A1 RIS M203";
		picture="\RH_m4\inv\m4_ris_m203_x_ca.paa";
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2"
		};
	};
	class RH_M4A1_ris_M203s: RH_M4A1_ris_M203
	{
		author="RobertHammer";
		displayName="M4A1 RIS M203S";
		picture="\RH_m4\inv\m4_ris_m203s_x_ca.paa";
		model="\RH_M4\RH_m4_ris_m203s.p3d";
	};
	class RH_M4_ris_m: RH_M4A1_ris
	{
		author="RobertHammer";
		model="\RH_M4\RH_m4_ris_m.p3d";
		displayName="M4A1 RIS Matech";
		picture="\RH_m4\inv\m4_ris_m_x_ca.paa";
		discreteDistance[]={200,300,400,450,500,550,600};
		discreteDistanceInitIndex=1;
		weaponInfoType="RscWeaponZeroing";
	};
	class RH_M4m: RH_M4A1_ris
	{
		author="RobertHammer";
		displayName="M4A1 Magpul";
		picture="\RH_m4\inv\m4m_x_ca.paa";
		model="\RH_M4\RH_m4m.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_m4m.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
		};
	};
	class RH_M4m_g: RH_M4m
	{
		author="RobertHammer";
		displayName="M4A1 Magpul Green";
		picture="\RH_m4\inv\m4m_g_x_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ru_g_co.paa",
			"\RH_m4\data\extras_g_co.paa"
		};
	};
	class RH_M4m_b: RH_M4m
	{
		author="RobertHammer";
		displayName="M4A1 Magpul Black";
		picture="\RH_m4\inv\m4m_b_x_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ru_b_co.paa",
			"\RH_m4\data\extras_b_co.paa"
		};
	};
	class RH_M4_moe: RH_M4A1_ris
	{
		author="RobertHammer";
		displayName="M4A1 MOE Tan";
		picture="\RH_m4\inv\m4_moe_x_ca.paa";
		model="\RH_M4\RH_m4_moe.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
		};
	};
	class RH_M4_moe_b: RH_M4_moe
	{
		author="RobertHammer";
		displayName="M4A1 MOE Black";
		picture="\RH_m4\inv\m4_moe_b_x_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\mp_parts_b_co.paa"
		};
	};
	class RH_M4_moe_g: RH_M4_moe
	{
		author="RobertHammer";
		displayName="M4A1 MOE Green";
		picture="\RH_m4\inv\m4_moe_g_x_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\mp_parts_g_co.paa"
		};
	};
	class RH_M4sbr: RH_M4A1_ris
	{
		author="RobertHammer";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4sbr.rtm"
		};
		model="\RH_M4\RH_m4sbr.p3d";
		displayName="Vltor SBR Tan";
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2"
		};
		picture="\RH_m4\inv\m4sbr_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={-0.029999999,0.34999999};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.15000001,0.34999999};
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail_M4
			{
				iconPosition[]={0.15000001,0.34999999};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.40000001,0.15000001};
			};
			class UnderBarrelSlot
			{
			};
		};
		initSpeed=-0.86000001;
		inertia=0.30000001;
		descriptionShort="CQB rifle<br/>Caliber: 5.56x45mm NATO";
		class Single: Single
		{
			dispersion=0.00275;
			midRange=100;
			maxRange=300;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00275;
		};
	};
	class RH_M4sbr_g: RH_M4sbr
	{
		author="RobertHammer";
		displayName="Vltor SBR Green";
		picture="\RH_m4\inv\m4sbr_g_x_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\sbr_g_co.paa"
		};
	};
	class RH_M4sbr_b: RH_M4sbr
	{
		author="RobertHammer";
		displayName="Vltor SBR Black";
		picture="\RH_m4\inv\m4sbr_b_x_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\sbr_b_co.paa"
		};
	};
	class RH_hb: Rifle_Base_F
	{
		scope=2;
		author="RobertHammer";
		cursor="srifle";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.39810717,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.39810717,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.39810717,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.39810717,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.2818383,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.2818383,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.2818383,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.2818383,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.2818383,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.2818383,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.2818383,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.2818383,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		changeFiremodeSound[]=
		{
			"\RH_m4\sound\m4_selector",
			0.5,
			1,
			10
		};
		drySound[]=
		{
			"\RH_m4\sound\dry",
			0.80000001,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"RH_m4\sound\m4_reload",
			1,
			1,
			15
		};
		displayNAme="AAC Honey Badger";
		model="\RH_m4\RH_hb.p3d";
		picture="\RH_m4\inv\hb_x_ca.paa";
		magazines[]=
		{
			"RH_30Rnd_762x35_FMJ",
			"RH_30Rnd_762x35_Match",
			"RH_30Rnd_762x35_MSB"
		};
		reloadAction="GestureReloadSMG_02";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_hb.rtm"
		};
		maxZeroing=600;
		recoil="RH_recoil_HB";
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_Rifle556Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"RH_hbsd"
				};
				iconPosition[]={0,0.37};
				iconScale=0.2;
			};
			class PointerSlot
			{
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.2};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="center";
			};
			class UnderBarrelSlot
			{
			};
		};
		inertia=0.30000001;
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\RH_m4\sound\m4_fire1",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"\RH_m4\sound\m4_fire2",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\hb_sd_s1.wss",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\hb_sd_s2.wss",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\hb_sd_s3.wss",
					1,
					1,
					240
				};
				begin4[]=
				{
					"RH_m4\sound\hb_sd_s4.wss",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			reloadTime=0.075000003;
			recoil="RH_M4_Recoil";
			recoilProne="RH_M4_RecoilProne";
			dispersion=0.00275;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\RH_m4\sound\m4_fire1",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"\RH_m4\sound\m4_fire2",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\hb_sd_s1.wss",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\hb_sd_s2.wss",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\hb_sd_s3.wss",
					1,
					1,
					240
				};
				begin4[]=
				{
					"RH_m4\sound\hb_sd_s4.wss",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			reloadTime=0.075000003;
			dispersion=0.00275;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=700;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
	};
	class RH_hb_b: RH_hb
	{
		author="RobertHammer";
		displayName="AAC Honey Badger Black";
		picture="\RH_m4\inv\hb_b_x_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hb_b_co.paa"
		};
	};
	class RH_sbr9: Rifle_Base_F
	{
		scope=2;
		author="RobertHammer";
		model="\RH_M4\RH_sbr9.p3d";
		displayName="SBR9";
		dexterity=1000;
		magazines[]=
		{
			"RH_32Rnd_9mm_M822",
			"RH_32Rnd_9mm_HP",
			"RH_32Rnd_9mm_HPSB"
		};
		reloadAction="GestureReloadSMG_02";
		cursor="smg";
		picture="\RH_m4\inv\sbr9_x_ca.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		aiDispersionCoefY=8;
		aiDispersionCoefX=9;
		maxZeroing=600;
		descriptionShort="$STR_A3_CfgWeapons_SMG_02_base_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_sbr.rtm"
		};
		inertia=0.30000001;
		recoil="RH_recoil_SBR9";
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_Rifle9mmCartridge";
			};
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=75;
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[]={0,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.2,0.30000001};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint="center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.40000001,0.15000001};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="center";
			};
			class UnderBarrelSlot
			{
			};
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",
			0.50118721,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",
			0.50118721,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",
			0.50118721,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",
			0.50118721,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",
			0.39810717,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",
			0.39810717,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",
			0.39810717,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",
			0.39810717,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin=100;
		distanceZoomMax=100;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		drySound[]=
		{
			"\RH_m4\sound\dry",
			0.80000001,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\weapons\Reloads\reload_sting",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.56234133,
			1,
			15
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.50118721,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\sbr9_s1.wss",
					1,
					1,
					500
				};
				begin2[]=
				{
					"RH_m4\sound\sbr9_s2.wss",
					1,
					1,
					500
				};
				begin3[]=
				{
					"RH_m4\sound\sbr9_s3.wss",
					1,
					1,
					500
				};
				begin4[]=
				{
					"RH_m4\sound\sbr9_s4.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\sbr9_sd_s1.wss",
					1,
					1,
					200
				};
				begin2[]=
				{
					"RH_m4\sound\sbr9_sd_s2.wss",
					1,
					1,
					200
				};
				begin3[]=
				{
					"RH_m4\sound\sbr9_sd_s3.wss",
					1,
					1,
					200
				};
				begin4[]=
				{
					"RH_m4\sound\sbr9_sd_s4.wss",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			reloadTime=0.063199997;
			dispersion=0.0011;
			recoil="RH_M4_Recoil";
			recoilProne="RH_M4_RecoilProne";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.50118721,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\sbr9_s1.wss",
					1,
					1,
					500
				};
				begin2[]=
				{
					"RH_m4\sound\sbr9_s2.wss",
					1,
					1,
					500
				};
				begin3[]=
				{
					"RH_m4\sound\sbr9_s3.wss",
					1,
					1,
					500
				};
				begin4[]=
				{
					"RH_m4\sound\sbr9_s4.wss",
					1,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\sbr9_sd_s1.wss",
					1,
					1,
					200
				};
				begin2[]=
				{
					"RH_m4\sound\sbr9_sd_s2.wss",
					1,
					1,
					200
				};
				begin3[]=
				{
					"RH_m4\sound\sbr9_sd_s3.wss",
					1,
					1,
					200
				};
				begin4[]=
				{
					"RH_m4\sound\sbr9_sd_s4.wss",
					1,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			reloadTime=0.063199997;
			dispersion=0.0011;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			aiRateOfFireDistance=50;
		};
	};
	class RH_M4A6: RH_M4A1_ris
	{
		author="RobertHammer";
		displayName="M4A6";
		picture="\RH_m4\inv\m4a6_x_ca.paa";
		magazines[]=
		{
			"RH_30Rnd_68x43_FMJ",
			"RH_30Rnd_68x43_Match"
		};
		model="\RH_M4\RH_m4a6.p3d";
		descriptionShort="Assault rifle<br/>Caliber: 6.8x43 mm";
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_Rifle65Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RH_RifleSmokeTrail";
			};
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_6",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_7",
					0.70794576,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4a6_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m4a6_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m4a6_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m4a6_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4a6sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4a6sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4a6sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.075000003;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.0011;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_6",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_7",
					0.70794576,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4a6_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m4a6_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m4a6_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m4a6_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4a6sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4a6sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4a6sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.075000003;
			dispersion=0.0011;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"\RH_m4\sound\dry",
			0.80000001,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\m4_reload",
			1,
			1,
			15
		};
	};
	class RH_M16a1: RH_m4
	{
		author="RobertHammer";
		model="\RH_M4\RH_m16a1.p3d";
		displayName="M16A1";
		picture="\RH_m4\inv\m16a1_x_ca.paa";
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_m16a1.rtm"
		};
		inertia=0.5;
		recoil="RH_recoil_M16";
		initSpeed=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16a1_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16a1_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16a1_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16a1_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime=0.079999998;
			recoil="RH_M4_Recoil";
			recoilProne="RH_M4_RecoilProne";
			dispersion=0.0020000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=225;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16a1_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16a1_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16a1_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16a1_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime=0.079999998;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			dispersion=0.0020000001;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=40;
			midRangeProbab=0.69999999;
			maxRange=80;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
	};
	class RH_M16A1gl: RH_M16a1
	{
		author="RobertHammer";
		model="\RH_M4\RH_m16a1gl.p3d";
		picture="\RH_m4\inv\m16a1gl_x_ca.paa";
		displayName="M16A1 M203";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4gl.rtm"
		};
		inertia=0.60000002;
		muzzles[]=
		{
			"this",
			"M203"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
		};
	};
	class RH_M16A2: RH_m4
	{
		author="RobertHammer";
		model="\RH_M4\RH_m16a2.p3d";
		displayName="M16A2";
		picture="\RH_m4\inv\m16a2_x_ca.paa";
		inertia=0.5;
		recoil="RH_recoil_M16";
		initSpeed=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16a1_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16a1_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16a1_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16a1_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime=0.071000002;
			recoil="RH_M4_Recoil";
			recoilProne="RH_M4_RecoilProne";
			dispersion=0.0017500001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=225;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16a1_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16a1_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16a1_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16a1_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime=0.071000002;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			dispersion=0.0017500001;
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=60;
			midRangeProbab=0.69999999;
			maxRange=120;
			maxRangeProbab=0.050000001;
		};
	};
	class RH_M16A2gl: RH_M16A2
	{
		author="RobertHammer";
		model="\RH_M4\RH_m16a2gl.p3d";
		displayName="M16A2 M203";
		picture="\RH_m4\inv\m16a2gl_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4gl.rtm"
		};
		inertia=0.60000002;
		muzzles[]=
		{
			"this",
			"M203"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
		};
	};
	class RH_M16A4: RH_M4_ris
	{
		author="RobertHammer";
		model="\RH_M4\RH_m16a4.p3d";
		displayName="M16A4";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M16vg.rtm"
		};
		picture="\RH_m4\inv\m16a4_x_ca.paa";
		inertia=0.5;
		recoil="RH_recoil_M16";
		initSpeed=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
				compatibleItems[]=
				{
					"RH_m16covers_s",
					"RH_m16covers_f"
				};
				iconPosition[]={0.30000001,0.40000001};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint="center";
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={-0.050000001,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.25};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="center";
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail
			{
				iconPosition[]={0.30000001,0.40000001};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint="center";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.69999999};
				iconScale=0.25;
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime=0.071000002;
			recoil="RH_M4_Recoil";
			recoilProne="RH_M4_RecoilProne";
			dispersion=0.0017500001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=225;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime=0.071000002;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			dispersion=0.0017500001;
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=60;
			midRangeProbab=0.69999999;
			maxRange=120;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime=0.071000002;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			dispersion=0.0017500001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
	};
	class RH_M16A4gl: RH_M16A4
	{
		author="RobertHammer";
		model="\RH_M4\RH_m16a4gl.p3d";
		displayName="M16A4 M203";
		picture="\RH_m4\inv\m16a4_m203_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4gl.rtm"
		};
		inertia=0.60000002;
		muzzles[]=
		{
			"this",
			"M203"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
			class PointerSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
				compatibleItems[]=
				{
					"RH_m16covers_s"
				};
			};
			class CowsSlot: CowsSlot
			{
			};
			class MuzzleSlot: MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
		};
	};
	class RH_M16A3: RH_M16A4
	{
		author="RobertHammer";
		model="\RH_M4\RH_m16a3.p3d";
		displayName="M16A3";
		picture="\RH_m4\inv\m16a3_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_m16.rtm"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class asdg_FrontSideRail_M4
			{
			};
			class MuzzleSlot: MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
		};
	};
	class RH_M16A4_m: RH_M16A4
	{
		author="RobertHammer";
		model="\RH_M4\RH_m16a4_m.p3d";
		displayName="M16A4 Matech";
		picture="\RH_m4\inv\m16a4_m_x_ca.paa";
		discreteDistance[]={200,300,400,450,500,550,600};
		discreteDistanceInitIndex=1;
		weaponInfoType="RscWeaponZeroing";
	};
	class RH_M16A6: RH_M16A4
	{
		author="RobertHammer";
		displayName="M16A6";
		picture="\RH_m4\inv\m16a6_x_ca.paa";
		model="\RH_M4\RH_m16a6.p3d";
		magazines[]=
		{
			"RH_30Rnd_68x43_FMJ",
			"RH_30Rnd_68x43_Match"
		};
		descriptionShort="Assault rifle<br/>Caliber: 6.8x43 mm";
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_Rifle65Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RH_RifleSmokeTrail";
			};
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_6",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_7",
					0.70794576,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16a6_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16a6_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16a6_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16a6_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16a6sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16a6sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m16a6sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.075000003;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_6",
					0.70794576,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_7",
					0.70794576,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16a6_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m16a6_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m16a6_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m16a6_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16a6sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16a6sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m16a6sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.075000003;
			dispersion=0.00086999999;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		drySound[]=
		{
			"\RH_m4\sound\dry",
			0.80000001,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"\RH_m4\sound\m4_reload",
			1,
			1,
			15
		};
	};
	class RH_Mk12mod1: RH_M16A4
	{
		author="RobertHammer";
		model="\RH_M4\RH_Mk12mod1.p3d";
		displayName="Mk12 mod1";
		picture="\RH_m4\inv\mk12mod1_x_ca.paa";
		handAnim[]={};
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=2;
		weaponInfoType="RscWeaponZeroing";
		magazines[]=
		{
			"RH_30Rnd_556x45_Mk262",
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_Mk318",
			"RH_20Rnd_556x45_M855A1",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk318",
			"RH_60Rnd_556x45_M855A1",
			"RH_60Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk318",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		inertia=0.60000002;
		initSpeed=-0.98000002;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
		};
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\mk12_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\mk12_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\mk12_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\mk12_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadtime=0.071000002;
			recoil="RH_M4_Recoil";
			recoilProne="RH_M4_RecoilProne";
			dispersion=0.00030000001;
			minRange=2;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
	};
	class RH_SAMR: RH_Mk12mod1
	{
		author="RobertHammer";
		model="\RH_M4\RH_SAMR.p3d";
		displayName="SAM-R";
		picture="\RH_m4\inv\samr_x_ca.paa";
		initSpeed=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
		};
	};
	class RH_Hk416: RH_M4A1_ris
	{
		author="RobertHammer";
		model="\RH_M4\RH_hk416.p3d";
		displayName="Hk416 D14.5RS";
		picture="\RH_m4\inv\hk416_x_ca.paa";
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=2;
		weaponInfoType="RscWeaponZeroing";
		initSpeed=-0.93000001;
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\hk416_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\hk416_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\hk416_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\hk416_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\hk416_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\hk416_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\hk416_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\hk416_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
		};
	};
	class RH_Hk416s: RH_M4sbr
	{
		author="RobertHammer";
		model="\RH_M4\RH_hk416s.p3d";
		displayName="Hk416 D10RS";
		picture="\RH_m4\inv\hk416s_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4vg.rtm"
		};
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=2;
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.1,0.37};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.44999999,0.2};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.30000001,0.34999999};
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail_M4
			{
				iconPosition[]={0.30000001,0.34999999};
			};
		};
		initSpeed=-0.86000001;
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\hk416_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\hk416_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\hk416_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\hk416_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
		};
		class FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\hk416_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\hk416_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\hk416_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\hk416_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
		};
	};
	class RH_Hk416c: RH_M4sbr
	{
		author="RobertHammer";
		model="\RH_M4\RH_hk416c.p3d";
		displayName="Hk416C";
		picture="\RH_m4\inv\hk416c_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4vg.rtm"
		};
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=2;
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.37};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.44999999,0.2};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.34999999};
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail_M4
			{
				iconPosition[]={0.2,0.34999999};
			};
		};
		initSpeed=-0.81;
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\hk416_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\hk416_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\hk416_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\hk416_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.082000002;
			dispersion=0.00275;
			midRange=100;
			maxRange=300;
		};
		class FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\hk416_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\hk416_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\hk416_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\hk416_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m4sd_s1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m4sd_s2",
					1,
					1,
					240
				};
				begin3[]=
				{
					"RH_m4\sound\m4sd_s3",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.333,
					"begin2",
					0.333,
					"begin3",
					0.333
				};
			};
			reloadTime=0.082000002;
			dispersion=0.00275;
		};
	};
	class RH_M27IAR: RH_Mk12mod1
	{
		author="RobertHammer";
		model="\RH_M4\RH_m27iar.p3d";
		displayName="M27 IAR";
		picture="\RH_m4\inv\m27iar_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\RH_m4\anim\RH_M4vg.rtm"
		};
		magazines[]=
		{
			"RH_60Rnd_556x45_M855A1",
			"RH_60Rnd_556x45_Mk262",
			"RH_60Rnd_556x45_Mk318",
			"RH_30Rnd_556x45_M855A1",
			"RH_30Rnd_556x45_Mk262",
			"RH_30Rnd_556x45_Mk318",
			"RH_20Rnd_556x45_M855A1",
			"RH_20Rnd_556x45_Mk262",
			"RH_20Rnd_556x45_Mk318",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={-0.050000001,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.30000001,0.34999999};
				iconScale=0.25;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.2};
				iconScale=0.2;
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail_M4
			{
				iconPosition[]={0.30000001,0.34999999};
				iconScale=0.25;
			};
		};
		inertia=0.60000002;
		initSpeed=-0.97000003;
		modes[]=
		{
			"Single",
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m27_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m27_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m27_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m27_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime=0.071000002;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			dispersion=0.0017500001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			showToPlayer=1;
		};
		class manual: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.56,
					1,
					10
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.56,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m27_s1.wss",
					1,
					1,
					1200
				};
				begin2[]=
				{
					"RH_m4\sound\m27_s2.wss",
					1,
					1,
					1200
				};
				begin3[]=
				{
					"RH_m4\sound\m27_s3.wss",
					1,
					1,
					1200
				};
				begin4[]=
				{
					"RH_m4\sound\m27_s4.wss",
					1,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"RH_m4\sound\m16_sd1",
					1,
					1,
					240
				};
				begin2[]=
				{
					"RH_m4\sound\m16_sd2",
					1,
					1,
					240
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadTime=0.071000002;
			recoil="RH_M4_Recoil_Auto";
			recoilProne="RH_M4_RecoilProneAuto";
			dispersion=0.0017500001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: close
		{
			burst=3;
			requiredOpticType=1;
			aiRateOfFire=5;
			aiRateOfFireDistance=650;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		descriptionShort="$STR_A3_CfgWeapons_arifle_XM_LSW1";
	};
	class RH_m4_tg: RH_m4
	{
		author="RobertHammer";
		displayName="M4 TG camo";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa"
		};
	};
	class RH_m4_des: RH_m4
	{
		author="RobertHammer";
		displayName="M4 Tan camo";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa"
		};
	};
	class RH_m4_wdl: RH_m4
	{
		author="RobertHammer";
		displayName="M4 Wdl camo";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa"
		};
	};
	class RH_m4_m203_tg: RH_M4_M203
	{
		author="RobertHammer";
		displayName="M4 M203 TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\sight_camo_co.paa"
		};
	};
	class RH_m4_m203_des: RH_M4_M203
	{
		author="RobertHammer";
		displayName="M4 M203 Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\sight_camo2_co.paa"
		};
	};
	class RH_m4_m203_wdl: RH_M4_M203
	{
		author="RobertHammer";
		displayName="M4 M203 Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\sight_camo3_co.paa"
		};
	};
	class RH_m4a1_ris_tg: RH_M4A1_ris
	{
		author="RobertHammer";
		displayName="M4A1 RIS TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa"
		};
	};
	class RH_m4a1_ris_des: RH_M4A1_ris
	{
		author="RobertHammer";
		displayName="M4A1 RIS Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa"
		};
	};
	class RH_m4a1_ris_wdl: RH_M4A1_ris
	{
		author="RobertHammer";
		displayName="M4A1 RIS Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa"
		};
	};
	class RH_m4a1_ris_m203_tg: RH_M4A1_ris_M203
	{
		author="RobertHammer";
		displayName="M4A1 RIS M203 TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\sight_camo_co.paa"
		};
	};
	class RH_m4a1_ris_m203_des: RH_M4A1_ris_M203
	{
		author="RobertHammer";
		displayName="M4A1 RIS M203 Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\sight_camo2_co.paa"
		};
	};
	class RH_m4a1_ris_m203_wdl: RH_M4A1_ris_M203
	{
		author="RobertHammer";
		displayName="M4A1 RIS M203 Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\sight_camo3_co.paa"
		};
	};
	class RH_m4a1_ris_m203s_tg: RH_M4A1_ris_M203s
	{
		author="RobertHammer";
		displayName="M4A1 RIS M203S TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\sight_camo_co.paa"
		};
	};
	class RH_m4a1_ris_m203s_des: RH_M4A1_ris_M203s
	{
		author="RobertHammer";
		displayName="M4A1 RIS M203S Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\sight_camo2_co.paa"
		};
	};
	class RH_m4a1_ris_m203s_wdl: RH_M4A1_ris_M203s
	{
		author="RobertHammer";
		displayName="M4A1 RIS M203S Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\sight_camo3_co.paa"
		};
	};
	class RH_m4_ris_m_tg: RH_M4_ris_m
	{
		author="RobertHammer";
		displayName="M4A1 RIS Matech TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"BUIS LP001"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\matech_camo_co.paa"
		};
	};
	class RH_m4_ris_m_des: RH_M4_ris_m
	{
		author="RobertHammer";
		displayName="M4A1 RIS Matech Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"BUIS LP001"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\matech_camo2_co.paa"
		};
	};
	class RH_m4_ris_m_wdl: RH_M4_ris_m
	{
		author="RobertHammer";
		displayName="M4A1 RIS Matech Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"BUIS LP001"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\matech_camo3_co.paa"
		};
	};
	class RH_m4a6_tg: RH_M4A6
	{
		author="RobertHammer";
		displayName="M4A6 TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa"
		};
	};
	class RH_m4a6_des: RH_M4A6
	{
		author="RobertHammer";
		displayName="M4A6 Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa"
		};
	};
	class RH_m4a6_wdl: RH_M4A6
	{
		author="RobertHammer";
		displayName="M4A6 Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa"
		};
	};
	class RH_m16a4_tg: RH_M16A4
	{
		author="RobertHammer";
		displayName="M16A4 TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa"
		};
	};
	class RH_m16a4_des: RH_M16A4
	{
		author="RobertHammer";
		displayName="M16A4 Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa"
		};
	};
	class RH_m16a4_wdl: RH_M16A4
	{
		author="RobertHammer";
		displayName="M16A4 Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa"
		};
	};
	class RH_m16a4gl_tg: RH_M16A4gl
	{
		author="RobertHammer";
		displayName="M16A4 M203 TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\sight_camo_co.paa"
		};
	};
	class RH_m16a4gl_des: RH_M16A4gl
	{
		author="RobertHammer";
		displayName="M16A4 M203 Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\sight_camo2_co.paa"
		};
	};
	class RH_m16a4gl_wdl: RH_M16A4gl
	{
		author="RobertHammer";
		displayName="M16A4 M203 Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\sight_camo3_co.paa"
		};
	};
	class RH_m16a4_m_tg: RH_M16A4_m
	{
		author="RobertHammer";
		displayName="M16A4 Matech TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"BUIS LP001"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\matech_camo_co.paa"
		};
	};
	class RH_m16a4_m_des: RH_M16A4_m
	{
		author="RobertHammer";
		displayName="M16A4 Matech Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"BUIS LP001"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\matech_camo2_co.paa"
		};
	};
	class RH_m16a4_m_wdl: RH_M16A4_m
	{
		author="RobertHammer";
		displayName="M16A4 Matech Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"BUIS LP001"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\matech_camo3_co.paa"
		};
	};
	class RH_m16a6_tg: RH_M16A6
	{
		author="RobertHammer";
		displayName="M16A6 TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa"
		};
	};
	class RH_m16a6_des: RH_M16A6
	{
		author="RobertHammer";
		displayName="M16A6 Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa"
		};
	};
	class RH_m16a6_wdl: RH_M16A6
	{
		author="RobertHammer";
		displayName="M16A6 Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa"
		};
	};
	class RH_Mk12mod1_tg: RH_Mk12mod1
	{
		author="RobertHammer";
		displayName="Mk12 mod1 TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\spr_parts_camo_co.paa",
			"\RH_m4\data\wpn_spr_camo.paa"
		};
	};
	class RH_Mk12mod1_des: RH_Mk12mod1
	{
		author="RobertHammer";
		displayName="Mk12 mod1 Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\spr_parts_camo2_co.paa",
			"\RH_m4\data\wpn_spr_camo2.paa"
		};
	};
	class RH_Mk12mod1_wdl: RH_Mk12mod1
	{
		author="RobertHammer";
		displayName="Mk12 mod1 Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\spr_parts_camo3_co.paa",
			"\RH_m4\data\wpn_spr_camo3.paa"
		};
	};
	class RH_SAMR_tg: RH_SAMR
	{
		author="RobertHammer";
		displayName="SAM-R TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\spr_parts_camo_co.paa"
		};
	};
	class RH_SAMR_des: RH_SAMR
	{
		author="RobertHammer";
		displayName="SAM-R Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\spr_parts_camo2_co.paa"
		};
	};
	class RH_SAMR_wdl: RH_SAMR
	{
		author="RobertHammer";
		displayName="SAM-R Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\spr_parts_camo3_co.paa"
		};
	};
	class RH_sbr9_tg: RH_sbr9
	{
		author="RobertHammer";
		displayName="SBR9 TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa"
		};
	};
	class RH_sbr9_des: RH_sbr9
	{
		author="RobertHammer";
		displayName="SBR9 Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa"
		};
	};
	class RH_sbr9_wdl: RH_sbr9
	{
		author="RobertHammer";
		displayName="SBR9 Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\ar15_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa"
		};
	};
	class RH_hk416_tg: RH_Hk416
	{
		author="RobertHammer";
		displayName="Hk416 D14.5RS TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\hk_parts_camo_co.paa"
		};
	};
	class RH_hk416_des: RH_Hk416
	{
		author="RobertHammer";
		displayName="Hk416 D14.5RS Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\hk_parts_camo2_co.paa"
		};
	};
	class RH_hk416_wdl: RH_Hk416
	{
		author="RobertHammer";
		displayName="Hk416 D14.5RS Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\hk_parts_camo3_co.paa"
		};
	};
	class RH_hk416s_tg: RH_Hk416s
	{
		author="RobertHammer";
		displayName="Hk416 D10RS TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa"
		};
	};
	class RH_hk416s_des: RH_Hk416s
	{
		author="RobertHammer";
		displayName="Hk416 D10RS Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa"
		};
	};
	class RH_hk416s_wdl: RH_Hk416s
	{
		author="RobertHammer";
		displayName="Hk416 D10RS Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa"
		};
	};
	class RH_hk416c_tg: RH_Hk416c
	{
		author="RobertHammer";
		displayName="Hk416C TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\hk_parts_camo_co.paa"
		};
	};
	class RH_hk416c_des: RH_Hk416c
	{
		author="RobertHammer";
		displayName="Hk416C Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\hk_parts_camo2_co.paa"
		};
	};
	class RH_hk416c_wdl: RH_Hk416c
	{
		author="RobertHammer";
		displayName="Hk416C Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\hk_parts_camo3_co.paa"
		};
	};
	class RH_M27IAR_tg: RH_M27IAR
	{
		author="RobertHammer";
		displayName="M27 IAR TG camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo_co.paa",
			"\RH_m4\data\bits_camo_co.paa",
			"\RH_m4\data\hk_parts_camo_co.paa"
		};
	};
	class RH_M27IAR_des: RH_M27IAR
	{
		author="RobertHammer";
		displayName="M27 IAR Tan camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo2_co.paa",
			"\RH_m4\data\bits_camo2_co.paa",
			"\RH_m4\data\hk_parts_camo2_co.paa"
		};
	};
	class RH_M27IAR_wdl: RH_M27IAR
	{
		author="RobertHammer";
		displayName="M27 IAR Wdl camo";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\RH_m4\data\hk416_camo3_co.paa",
			"\RH_m4\data\bits_camo3_co.paa",
			"\RH_m4\data\hk_parts_camo3_co.paa"
		};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class ReammoBox_F;
	class NATO_Box_Base;
	class Box_NATO_Wps_F;
	class RH_m4m16ammobox: Box_NATO_Wps_F
	{
		author="RobertHammer";
		displayName="RH M4/M16 Ammo Box";
		transportMaxWeapons=50000;
		transportMaxMagazines=200000;
		maximumLoad=100000;
		class TransportMagazines
		{
			class _xx_RH_20Rnd_762x51_AR10
			{
				magazine="RH_20Rnd_762x51_AR10";
				count=50;
			};
			class _xx_RH_20Rnd_762x51_M80A1
			{
				magazine="RH_20Rnd_762x51_M80A1";
				count=50;
			};
			class _xx_RH_20Rnd_762x51_Mk316LR
			{
				magazine="RH_20Rnd_762x51_Mk316LR";
				count=50;
			};
			class _xx_RH_20Rnd_762x51_Mk319
			{
				magazine="RH_20Rnd_762x51_Mk319";
				count=50;
			};
			class _xx_RH_20Rnd_762x51_LFMJSB
			{
				magazine="RH_20Rnd_762x51_LFMJSB";
				count=50;
			};
			class _xx_RH_30Rnd_68x43_FMJ
			{
				magazine="RH_30Rnd_68x43_FMJ";
				count=50;
			};
			class _xx_RH_30Rnd_68x43_Match
			{
				magazine="RH_30Rnd_68x43_Match";
				count=50;
			};
			class _xx_RH_30Rnd_762x35_FMJ
			{
				magazine="RH_30Rnd_762x35_FMJ";
				count=50;
			};
			class _xx_RH_30Rnd_762x35_Match
			{
				magazine="RH_30Rnd_762x35_Match";
				count=50;
			};
			class _xx_RH_30Rnd_762x35_MSB
			{
				magazine="RH_30Rnd_762x35_MSB";
				count=50;
			};
			class _xx_RH_30Rnd_556x45_M855A1
			{
				magazine="RH_30Rnd_556x45_M855A1";
				count=50;
			};
			class _xx_RH_30Rnd_556x45_Mk262
			{
				magazine="RH_30Rnd_556x45_Mk262";
				count=50;
			};
			class _xx_RH_30Rnd_556x45_Mk318
			{
				magazine="RH_30Rnd_556x45_Mk318";
				count=50;
			};
			class _xx_RH_20Rnd_556x45_M855A1
			{
				magazine="RH_20Rnd_556x45_M855A1";
				count=50;
			};
			class _xx_RH_20Rnd_556x45_Mk262
			{
				magazine="RH_20Rnd_556x45_Mk262";
				count=50;
			};
			class _xx_RH_20Rnd_556x45_Mk318
			{
				magazine="RH_20Rnd_556x45_Mk318";
				count=50;
			};
			class _xx_RH_60Rnd_556x45_M855A1
			{
				magazine="RH_60Rnd_556x45_M855A1";
				count=50;
			};
			class _xx_RH_60Rnd_556x45_Mk262
			{
				magazine="RH_60Rnd_556x45_Mk262";
				count=50;
			};
			class _xx_RH_60Rnd_556x45_Mk318
			{
				magazine="RH_60Rnd_556x45_Mk318";
				count=50;
			};
			class _xx_RH_32Rnd_9mm_M822
			{
				magazine="RH_32Rnd_9mm_M822";
				count=50;
			};
			class _xx_RH_32Rnd_9mm_HP
			{
				magazine="RH_32Rnd_9mm_HP";
				count=50;
			};
			class _xx_RH_32Rnd_9mm_HPSB
			{
				magazine="RH_32Rnd_9mm_HPSB";
				count=50;
			};
			class _xx_30rnd_556x45_STANAG
			{
				magazine="30rnd_556x45_STANAG";
				count=50;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Red";
				count=50;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Green
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Green";
				count=50;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow
			{
				magazine="30Rnd_556x45_Stanag_Tracer_Yellow";
				count=50;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=50;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=50;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=50;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine="UGL_FlareGreen_F";
				count=50;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=50;
			};
		};
		class TransportItems
		{
			class _xx_RH_compM4s
			{
				name="RH_compM4s";
				count=5;
			};
			class _xx_RH_eotech553
			{
				name="RH_eotech553";
				count=5;
			};
			class _xx_RH_t1
			{
				name="RH_t1";
				count=5;
			};
			class _xx_RH_reflex
			{
				name="RH_reflex";
				count=5;
			};
			class _xx_RH_Delft
			{
				name="RH_Delft";
				count=5;
			};
			class _xx_RH_shortdot
			{
				name="RH_shortdot";
				count=5;
			};
			class _xx_RH_ta31rco
			{
				name="RH_ta31rco";
				count=5;
			};
			class _xx_RH_ta31rco_2d
			{
				name="RH_ta31rco_2d";
				count=5;
			};
			class _xx_RH_m3lr
			{
				name="RH_m3lr";
				count=5;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=5;
			};
			class _xx_optic_NVS
			{
				name="optic_NVS";
				count=5;
			};
			class _xx_optic_NightStalker
			{
				name="optic_NightStalker";
				count=5;
			};
			class _xx_optic_tws
			{
				name="optic_tws";
				count=5;
			};
			class _xx_optic_Arco
			{
				name="optic_Arco";
				count=5;
			};
			class _xx_optic_Holosight
			{
				name="optic_Holosight";
				count=5;
			};
			class _xx_optic_aco
			{
				name="optic_aco";
				count=5;
			};
			class _xx_optic_ACO_grn
			{
				name="optic_ACO_grn";
				count=5;
			};
			class _xx_optic_hamr
			{
				name="optic_hamr";
				count=5;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=5;
			};
			class _xx_RH_peq2
			{
				name="RH_peq2";
				count=5;
			};
			class _xx_RH_peq15
			{
				name="RH_peq15";
				count=5;
			};
			class _xx_RH_peq2_top
			{
				name="RH_peq2_top";
				count=5;
			};
			class _xx_RH_peq15_top
			{
				name="RH_peq15_top";
				count=5;
			};
			class _xx_acc_pointer_IR
			{
				name="acc_pointer_IR";
				count=5;
			};
			class _xx_RH_m4covers_s
			{
				name="RH_m4covers_s";
				count=5;
			};
			class _xx_RH_m4covers_f
			{
				name="RH_m4covers_f";
				count=5;
			};
			class _xx_RH_m16covers_s
			{
				name="RH_m16covers_s";
				count=5;
			};
			class _xx_RH_m16covers_f
			{
				name="RH_m16covers_f";
				count=5;
			};
			class _xx_RH_SFM952V
			{
				name="RH_SFM952V";
				count=5;
			};
			class _xx_RH_SFM952V_tan
			{
				name="RH_SFM952V_tan";
				count=5;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
				count=5;
			};
			class _xx_RH_qdss_nt4
			{
				name="RH_qdss_nt4";
				count=5;
			};
			class _xx_RH_fa556
			{
				name="RH_fa556";
				count=5;
			};
			class _xx_RH_fa762
			{
				name="RH_fa762";
				count=5;
			};
			class _xx_RH_saker
			{
				name="RH_saker";
				count=5;
			};
			class _xx_RH_saker762
			{
				name="RH_saker762";
				count=5;
			};
			class _xx_RH_spr_mbs
			{
				name="RH_spr_mbs";
				count=5;
			};
			class _xx_RH_hbsd
			{
				name="RH_hbsd";
				count=5;
			};
			class _xx_RH_tundra
			{
				name="RH_tundra";
				count=5;
			};
			class _xx_RH_m110sd
			{
				name="RH_m110sd";
				count=5;
			};
			class _xx_RH_m110sd_t
			{
				name="RH_m110sd_t";
				count=5;
			};
			class _xx_RH_HBLM
			{
				name="RH_HBLM";
				count=5;
			};
			class _xx_RH_TD_ACB
			{
				name="RH_TD_ACB";
				count=5;
			};
		};
		class TransportWeapons
		{
			class xxRH_m4
			{
				weapon="RH_m4";
				count=5;
			};
			class xxRH_m4_m203
			{
				weapon="RH_m4_m203";
				count=5;
			};
			class xxRH_m4_ris
			{
				weapon="RH_m4_ris";
				count=5;
			};
			class xxRH_m4_ris_m203
			{
				weapon="RH_m4_ris_m203";
				count=5;
			};
			class xxRH_m4a1_ris
			{
				weapon="RH_m4a1_ris";
				count=5;
			};
			class xxRH_m4a1_ris_m203
			{
				weapon="RH_m4a1_ris_m203";
				count=5;
			};
			class xxRH_m4a1_ris_m203s
			{
				weapon="RH_m4a1_ris_m203s";
				count=5;
			};
			class xxRH_m4_ris_m
			{
				weapon="RH_m4_ris_m";
				count=5;
			};
			class xxRH_m4_moe
			{
				weapon="RH_m4_moe";
				count=5;
			};
			class xxRH_m4_moe_b
			{
				weapon="RH_m4_moe_b";
				count=5;
			};
			class xxRH_m4_moe_g
			{
				weapon="RH_m4_moe_g";
				count=5;
			};
			class xxRH_m4m
			{
				weapon="RH_m4m";
				count=5;
			};
			class xxRH_m4m_g
			{
				weapon="RH_m4m_g";
				count=5;
			};
			class xxRH_m4m_b
			{
				weapon="RH_m4m_b";
				count=5;
			};
			class xxRH_m4a6
			{
				weapon="RH_m4a6";
				count=5;
			};
			class xxRH_m4sbr
			{
				weapon="RH_m4sbr";
				count=5;
			};
			class xxRH_m4sbr_g
			{
				weapon="RH_m4sbr_g";
				count=5;
			};
			class xxRH_m4sbr_b
			{
				weapon="RH_m4sbr_b";
				count=5;
			};
			class xxRH_hb
			{
				weapon="RH_hb";
				count=5;
			};
			class xxRH_hb_b
			{
				weapon="RH_hb_b";
				count=5;
			};
			class xxRH_sbr9
			{
				weapon="RH_sbr9";
				count=5;
			};
			class xxRH_m16a1
			{
				weapon="RH_m16a1";
				count=5;
			};
			class xxRH_m16a1gl
			{
				weapon="RH_m16a1gl";
				count=5;
			};
			class xxRH_m16a2
			{
				weapon="RH_m16a2";
				count=5;
			};
			class xxRH_m16a2gl
			{
				weapon="RH_m16a2gl";
				count=5;
			};
			class xxRH_m16a3
			{
				weapon="RH_m16a3";
				count=5;
			};
			class xxRH_m16a4
			{
				weapon="RH_m16a4";
				count=5;
			};
			class xxRH_m16a4gl
			{
				weapon="RH_m16a4gl";
				count=5;
			};
			class xxRH_m16a4_m
			{
				weapon="RH_m16a4_m";
				count=5;
			};
			class xxRH_m16a6
			{
				weapon="RH_m16a6";
				count=5;
			};
			class xxRH_mk12mod1
			{
				weapon="RH_mk12mod1";
				count=5;
			};
			class xxRH_samr
			{
				weapon="RH_samr";
				count=5;
			};
			class xxRH_hk416
			{
				weapon="RH_hk416";
				count=5;
			};
			class xxRH_hk416s
			{
				weapon="RH_hk416s";
				count=5;
			};
			class xxRH_hk416c
			{
				weapon="RH_hk416c";
				count=5;
			};
			class xxRH_m27iar
			{
				weapon="RH_m27iar";
				count=5;
			};
			class xxRH_ar10
			{
				weapon="RH_ar10";
				count=5;
			};
			class xxRH_m110
			{
				weapon="RH_m110";
				count=5;
			};
			class xxRH_mk11
			{
				weapon="RH_mk11";
				count=5;
			};
			class xxRH_sr25ec
			{
				weapon="RH_sr25ec";
				count=5;
			};
		};
	};
	class RH_m4m16camobox: RH_m4m16ammobox
	{
		author="RobertHammer";
		displayName="RH M4/M16 Camo Box";
		transportMaxWeapons=50000;
		transportMaxMagazines=200000;
		maximumLoad=100000;
		class TransportItems
		{
			class _xx_RH_compM4s
			{
				name="RH_compM4s";
				count=5;
			};
			class _xx_RH_eotech553
			{
				name="RH_eotech553";
				count=5;
			};
			class _xx_RH_t1
			{
				name="RH_t1";
				count=5;
			};
			class _xx_RH_reflex
			{
				name="RH_reflex";
				count=5;
			};
			class _xx_RH_Delft
			{
				name="RH_Delft";
				count=5;
			};
			class _xx_RH_shortdot
			{
				name="RH_shortdot";
				count=5;
			};
			class _xx_RH_ta31rco
			{
				name="RH_ta31rco";
				count=5;
			};
			class _xx_RH_ta31rco_2d
			{
				name="RH_ta31rco_2d";
				count=5;
			};
			class _xx_RH_m3lr
			{
				name="RH_m3lr";
				count=5;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=5;
			};
			class _xx_optic_NVS
			{
				name="optic_NVS";
				count=5;
			};
			class _xx_optic_NightStalker
			{
				name="optic_NightStalker";
				count=5;
			};
			class _xx_optic_tws
			{
				name="optic_tws";
				count=5;
			};
			class _xx_optic_Arco
			{
				name="optic_Arco";
				count=5;
			};
			class _xx_optic_Holosight
			{
				name="optic_Holosight";
				count=5;
			};
			class _xx_optic_aco
			{
				name="optic_aco";
				count=5;
			};
			class _xx_optic_ACO_grn
			{
				name="optic_ACO_grn";
				count=5;
			};
			class _xx_optic_hamr
			{
				name="optic_hamr";
				count=5;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=5;
			};
			class _xx_RH_peq2
			{
				name="RH_peq2";
				count=5;
			};
			class _xx_RH_peq15
			{
				name="RH_peq15";
				count=5;
			};
			class _xx_RH_peq2_top
			{
				name="RH_peq2_top";
				count=5;
			};
			class _xx_RH_peq15_top
			{
				name="RH_peq15_top";
				count=5;
			};
			class _xx_acc_pointer_IR
			{
				name="acc_pointer_IR";
				count=5;
			};
			class _xx_RH_m4covers_s
			{
				name="RH_m4covers_s";
				count=5;
			};
			class _xx_RH_m4covers_f
			{
				name="RH_m4covers_f";
				count=5;
			};
			class _xx_RH_m16covers_s
			{
				name="RH_m16covers_s";
				count=5;
			};
			class _xx_RH_m16covers_f
			{
				name="RH_m16covers_f";
				count=5;
			};
			class _xx_RH_SFM952V
			{
				name="RH_SFM952V";
				count=5;
			};
			class _xx_RH_SFM952V_tan
			{
				name="RH_SFM952V_tan";
				count=5;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
				count=5;
			};
			class _xx_RH_qdss_nt4_tg
			{
				name="RH_qdss_nt4_tg";
				count=5;
			};
			class _xx_RH_qdss_nt4_des
			{
				name="RH_qdss_nt4_des";
				count=5;
			};
			class _xx_RH_qdss_nt4_wdl
			{
				name="RH_qdss_nt4_wdl";
				count=5;
			};
			class _xx_RH_fa556_tg
			{
				name="RH_fa556_tg";
				count=5;
			};
			class _xx_RH_fa556_des
			{
				name="RH_fa556_des";
				count=5;
			};
			class _xx_RH_fa762_des
			{
				name="RH_fa762_des";
				count=5;
			};
			class _xx_RH_fa556_wdl
			{
				name="RH_fa556_wdl";
				count=5;
			};
			class _xx_RH_saker_tg
			{
				name="RH_saker_tg";
				count=5;
			};
			class _xx_RH_saker_des
			{
				name="RH_saker_des";
				count=5;
			};
			class _xx_RH_saker_wdl
			{
				name="RH_saker_wdl";
				count=5;
			};
			class _xx_RH_saker762_tg
			{
				name="RH_saker762_tg";
				count=5;
			};
			class _xx_RH_saker762_des
			{
				name="RH_saker762_des";
				count=5;
			};
			class _xx_RH_saker762_wdl
			{
				name="RH_saker762_wdl";
				count=5;
			};
			class _xx_RH_spr_mbs_tg
			{
				name="RH_spr_mbs_tg";
				count=5;
			};
			class _xx_RH_spr_mbs_des
			{
				name="RH_spr_mbs_des";
				count=5;
			};
			class _xx_RH_spr_mbs_wdl
			{
				name="RH_spr_mbs_wdl";
				count=5;
			};
			class _xx_RH_tundra_tg
			{
				name="RH_tundra_tg";
				count=5;
			};
			class _xx_RH_tundra_des
			{
				name="RH_tundra_des";
				count=5;
			};
			class _xx_RH_tundra_wdl
			{
				name="RH_tundra_wdl";
				count=5;
			};
			class _xx_RH_HBLM_tg
			{
				name="RH_HBLM_tg";
				count=5;
			};
			class _xx_RH_HBLM_des
			{
				name="RH_HBLM_des";
				count=5;
			};
			class _xx_RH_HBLM_wdl
			{
				name="RH_HBLM_wdl";
				count=5;
			};
			class _xx_RH_TD_ACB_g
			{
				name="RH_TD_ACB_g";
				count=5;
			};
			class _xx_RH_TD_ACB_b
			{
				name="RH_TD_ACB_b";
				count=5;
			};
		};
		class TransportWeapons
		{
			class xxRH_m4_tg
			{
				weapon="RH_m4_tg";
				count=5;
			};
			class xxRH_m4_des
			{
				weapon="RH_m4_des";
				count=5;
			};
			class xxRH_m4_wdl
			{
				weapon="RH_m4_wdl";
				count=5;
			};
			class xxRH_m4_m203_tg
			{
				weapon="RH_m4_m203_tg";
				count=5;
			};
			class xxRH_m4_m203_des
			{
				weapon="RH_m4_m203_des";
				count=5;
			};
			class xxRH_m4_m203_wdl
			{
				weapon="RH_m4_m203_wdl";
				count=5;
			};
			class xxRH_m4a1_ris_tg
			{
				weapon="RH_m4a1_ris_tg";
				count=5;
			};
			class xxRH_m4a1_ris_des
			{
				weapon="RH_m4a1_ris_des";
				count=5;
			};
			class xxRH_m4a1_ris_wdl
			{
				weapon="RH_m4a1_ris_wdl";
				count=5;
			};
			class xxRH_m4a1_ris_m203_tg
			{
				weapon="RH_m4a1_ris_m203_tg";
				count=5;
			};
			class xxRH_m4a1_ris_m203_des
			{
				weapon="RH_m4a1_ris_m203_des";
				count=5;
			};
			class xxRH_m4a1_ris_m203_wdl
			{
				weapon="RH_m4a1_ris_m203_wdl";
				count=5;
			};
			class xxRH_m4a1_ris_m203s_tg
			{
				weapon="RH_m4a1_ris_m203s_tg";
				count=5;
			};
			class xxRH_m4a1_ris_m203s_des
			{
				weapon="RH_m4a1_ris_m203s_des";
				count=5;
			};
			class xxRH_m4a1_ris_m203s_wdl
			{
				weapon="RH_m4a1_ris_m203s_wdl";
				count=5;
			};
			class xxRH_m4_ris_m_tg
			{
				weapon="RH_m4_ris_m_tg";
				count=5;
			};
			class xxRH_m4_ris_m_des
			{
				weapon="RH_m4_ris_m_des";
				count=5;
			};
			class xxRH_m4_ris_m_wdl
			{
				weapon="RH_m4_ris_m_wdl";
				count=5;
			};
			class xxRH_m4a6_tg
			{
				weapon="RH_m4a6_tg";
				count=5;
			};
			class xxRH_m4a6_des
			{
				weapon="RH_m4a6_des";
				count=5;
			};
			class xxRH_m4a6_wdl
			{
				weapon="RH_m4a6_wdl";
				count=5;
			};
			class xxRH_m16a4_tg
			{
				weapon="RH_m16a4_tg";
				count=5;
			};
			class xxRH_m16a4_des
			{
				weapon="RH_m16a4_des";
				count=5;
			};
			class xxRH_m16a4_wdl
			{
				weapon="RH_m16a4_wdl";
				count=5;
			};
			class xxRH_m16a4gl_tg
			{
				weapon="RH_m16a4gl_tg";
				count=5;
			};
			class xxRH_m16a4gl_des
			{
				weapon="RH_m16a4gl_des";
				count=5;
			};
			class xxRH_m16a4gl_wdl
			{
				weapon="RH_m16a4gl_wdl";
				count=5;
			};
			class xxRH_m16a4_m_tg
			{
				weapon="RH_m16a4_m_tg";
				count=5;
			};
			class xxRH_m16a4_m_des
			{
				weapon="RH_m16a4_m_des";
				count=5;
			};
			class xxRH_m16a4_m_wdl
			{
				weapon="RH_m16a4_m_wdl";
				count=5;
			};
			class xxRH_hk416_tg
			{
				weapon="RH_hk416_tg";
				count=5;
			};
			class xxRH_hk416_des
			{
				weapon="RH_hk416_des";
				count=5;
			};
			class xxRH_hk416_wdl
			{
				weapon="RH_hk416_wdl";
				count=5;
			};
			class xxRH_hk416s_tg
			{
				weapon="RH_hk416s_tg";
				count=5;
			};
			class xxRH_hk416s_des
			{
				weapon="RH_hk416s_des";
				count=5;
			};
			class xxRH_hk416s_wdl
			{
				weapon="RH_hk416s_wdl";
				count=5;
			};
			class xxRH_hk416c_tg
			{
				weapon="RH_hk416c_tg";
				count=5;
			};
			class xxRH_hk416c_des
			{
				weapon="RH_hk416c_des";
				count=5;
			};
			class xxRH_hk416c_wdl
			{
				weapon="RH_hk416c_wdl";
				count=5;
			};
			class xxRH_m27iar_tg
			{
				weapon="RH_m27iar_tg";
				count=5;
			};
			class xxRH_m27iar_des
			{
				weapon="RH_m27iar_des";
				count=5;
			};
			class xxRH_m27iar_wdl
			{
				weapon="RH_m27iar_wdl";
				count=5;
			};
			class xxRH_m16a6_tg
			{
				weapon="RH_m16a6_tg";
				count=5;
			};
			class xxRH_m16a6_des
			{
				weapon="RH_m16a6_des";
				count=5;
			};
			class xxRH_m16a6_wdl
			{
				weapon="RH_m16a6_wdl";
				count=5;
			};
			class xxRH_Mk12mod1_tg
			{
				weapon="RH_Mk12mod1_tg";
				count=5;
			};
			class xxRH_Mk12mod1_des
			{
				weapon="RH_Mk12mod1_des";
				count=5;
			};
			class xxRH_Mk12mod1_wdl
			{
				weapon="RH_Mk12mod1_wdl";
				count=5;
			};
			class xxRH_SAMR_tg
			{
				weapon="RH_SAMR_tg";
				count=5;
			};
			class xxRH_SAMR_des
			{
				weapon="RH_SAMR_des";
				count=5;
			};
			class xxRH_SAMR_wdl
			{
				weapon="RH_SAMR_wdl";
				count=5;
			};
			class xxRH_sbr9_tg
			{
				weapon="RH_sbr9_tg";
				count=5;
			};
			class xxRH_sbr9_des
			{
				weapon="RH_sbr9_des";
				count=5;
			};
			class xxRH_sbr9_wdl
			{
				weapon="RH_sbr9_wdl";
				count=5;
			};
		};
	};
};
class CfgCloudlets
{
	class Default;
	class RH_Rifle9mmCartridge: Default
	{
		interval=0.059500001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\weapons_f\ammo\cartridge_small.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=0.75;
		lifeTime=20;
		moveVelocity[]=
		{
			"-directionX * 4",
			"- directionY * 4",
			"- directionZ * 4"
		};
		rotationVelocity=1;
		weight=6;
		volume=1;
		rubbing=0;
		size[]={1.1};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,1}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		bounceOnSurface=0.25;
		bounceOnSurfaceVar=0.2;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=5;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RH_Rifle556Cartridge: Default
	{
		interval=0.059500001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\weapons_f\ammo\cartridge.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=0.75;
		lifeTime=20;
		moveVelocity[]=
		{
			"-directionX * 4",
			"- directionY * 4",
			"- directionZ * 4"
		};
		rotationVelocity=1;
		weight=6;
		volume=1;
		rubbing=0;
		size[]={1.1};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,1}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		bounceOnSurface=0.25;
		bounceOnSurfaceVar=0.2;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=5;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RH_Rifle65Cartridge: Default
	{
		interval=0.059500001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\weapons_f\ammo\cartridge_65.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=0.75;
		lifeTime=20;
		moveVelocity[]=
		{
			"-directionX * 4",
			"- directionY * 4",
			"- directionZ * 4"
		};
		rotationVelocity=1;
		weight=6;
		volume=1;
		rubbing=0;
		size[]={1.1};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,1}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		bounceOnSurface=0.25;
		bounceOnSurfaceVar=0.2;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=5;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RH_Rifle762Cartridge: Default
	{
		interval=0.059500001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\weapons_f\ammo\cartridge_762.p3d";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0;
		animationName="";
		particleType="SpaceObject";
		timerPeriod=0.75;
		lifeTime=20;
		moveVelocity[]=
		{
			"-directionX * 4",
			"- directionY * 4",
			"- directionZ * 4"
		};
		rotationVelocity=1;
		weight=6;
		volume=1;
		rubbing=0;
		size[]={1.1};
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,1}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		bounceOnSurface=0.25;
		bounceOnSurfaceVar=0.2;
		blockAIVisibility=0;
		sizeCoef=1;
		colorCoef[]={1,1,1,1};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.25,0.25,0.25};
		rotationVelocityVar=5;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RH_RifleAmmoCloud: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.44999999;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.25,0.5};
		color[]=
		{
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0.059999999},
			{0.1,0.1,0.1,0.0099999998}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.2;
		colorCoef[]={1,1,1,0.60000002};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.029999999,0.029999999,0.029999999};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RH_RifleSmokeTrail: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1.1;
		lifeTime=2.5;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.5;
		rubbing=0.1;
		size[]={0.30000001,0.5};
		color[]=
		{
			{0.059999999,0.059999999,0.059999999,0.31999999},
			{0.30000001,0.30000001,0.30000001,0.28},
			{0.30000001,0.30000001,0.30000001,0.25},
			{0.30000001,0.30000001,0.30000001,0.22},
			{0.30000001,0.30000001,0.30000001,0.1}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={2,1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.1;
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.029999999,0.029999999,0.029999999};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class RH_Rifle9mmCartridge
{
	class RH_Rifle9mmCartridge
	{
		simulation="particles";
		type="RH_Rifle9mmCartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RH_Rifle556Cartridge
{
	class RH_Rifle556Cartridge
	{
		simulation="particles";
		type="RH_Rifle556Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RH_Rifle65Cartridge
{
	class RH_Rifle65Cartridge
	{
		simulation="particles";
		type="RH_Rifle65Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RH_Rifle762Cartridge
{
	class RH_Rifle762Cartridge
	{
		simulation="particles";
		type="RH_Rifle762Cartridge";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RH_RifleAmmoCloud
{
	class RH_RifleAmmoCloud
	{
		simulation="particles";
		type="RH_RifleAmmoCloud";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class RH_RifleSmokeTrail
{
	class RH_RifleSmokeTrail
	{
		simulation="particles";
		type="RH_RifleSmokeTrail";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.050000001;
	};
};
class cfgMods
{
	author="RobertHammer";
	timepacked="1429451062";
};
