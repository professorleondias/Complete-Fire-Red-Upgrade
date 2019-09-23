#include "../config.h"
/*
frontier_multi_spreads.h
	set up battle frontier multi battle spreads:
		EVs, IVs, ability type, item, moves, pokeball type, and more!
*/


#ifdef UNBOUND
extern const u8 sTrainerName_Milo[];
extern const u8 sTrainerName_Marlon[];
extern const u8 sTrainerName_Jax[];

const struct BattleTowerSpread gMultiTowerSpread_Milo[] =
{
	{
		.species = SPECIES_RAICHU_A,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SURGESURFER
		.item = ITEM_ALORAICHIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_FAKEOUT,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_RAICHU,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_VOLTSWITCH,
			MOVE_ELECTROWEB,
			MOVE_FEINT,
			MOVE_FAKEOUT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MR_MIME,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOUNDPROOF
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ICYWIND,
			MOVE_HYPNOSIS,
			MOVE_REFLECT,
			MOVE_LIGHTSCREEN,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_AUDINITE,
		.moves =
		{
			MOVE_DAZZLINGGLEAM,
			MOVE_HEALPULSE,
			MOVE_WISH,
			MOVE_HEALBELL,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CUTECHARM
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_STEALTHROCK,
			MOVE_FOLLOWME,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LATIOS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LATIOSITE,
		.moves =
		{
			MOVE_DRAGONPULSE,
			MOVE_PSYSHOCK,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiLegendaryTowerSpread_Milo[] =
{
	{
		.species = SPECIES_ZEKROM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_DRAGONCLAW,
			MOVE_BOLTSTRIKE,
			MOVE_ROCKSLIDE,
			MOVE_TAILWIND,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_LONELY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 36,
		.atkEv = 204,
		.defEv = 4,
		.spDefEv = 12,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_PHOTONGEYSER,
			MOVE_SUNSTEELSTRIKE,
			MOVE_EARTHPOWER,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GENESECT_SHOCK,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 192,
		.spAtkEv = 92,
		.spdEv = 224,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DOWNLOAD
		.item = ITEM_SHOCK_DRIVE,
		.moves =
		{
			MOVE_UTURN,
			MOVE_IRONHEAD,
			MOVE_TECHNOBLAST,
			MOVE_ICEBEAM,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DEOXYS_DEFENSE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_RECOVER,
			MOVE_REFLECT,
			MOVE_LIGHTSCREEN,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DIANCIE,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 28,
		.atkEv = 140,
		.spAtkEv = 68,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_DIANCITE,
		.moves =
		{
			MOVE_DIAMONDSTORM,
			MOVE_MOONBLAST,
			MOVE_EARTHPOWER,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOULHEART
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DAZZLINGGLEAM,
			MOVE_FLASHCANNON,
			MOVE_AURASPHERE,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiLittleCupTowerSpread_Milo[] =
{
	{
		.species = SPECIES_PICHU,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 36,
		.atkEv = 196,
		.spDefEv = 76,
		.spdEv = 196,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_VOLTTACKLE,
			MOVE_VOLTSWITCH,
			MOVE_FAKEOUT,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MIME_JR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 196,
		.defEv = 76,
		.spAtkEv = 36,
		.spDefEv = 196,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOUNDPROOF
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ICYWIND,
			MOVE_TEETERDANCE,
			MOVE_REFLECT,
			MOVE_LIGHTSCREEN,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFFA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 196,
		.defEv = 52,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FRIENDGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ENDEAVOR,
			MOVE_THUNDERWAVE,
			MOVE_HEALPULSE,
			MOVE_HELPINGHAND,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MORELULL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 36,
		.spAtkEv = 236,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_2, //ABILITY_EFFECTSPORE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_DAZZLINGGLEAM,
			MOVE_SPORE,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ELEKID,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 236,
		.spdEv = 236,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_VITALSPIRIT
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_ELECTROWEB,
			MOVE_VOLTSWITCH,
			MOVE_SIGNALBEAM,
			MOVE_HIDDENPOWER, //TYPE_ICE
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_EXEGGCUTE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 36,
		.spAtkEv = 196,
		.spDefEv = 236,
		.spdEv = 36,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_PSYCHIC,
			MOVE_SLUDGEBOMB,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_QUICK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiTowerSpread_Marlon[] =
{
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 140,
		.spDefEv = 116,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_DRAGONTAIL,
			MOVE_SNARL,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DUSCLOPS,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FRISK
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_SHADOWPUNCH,
			MOVE_WILLOWISP,
			MOVE_HELPINGHAND,
			MOVE_TRICKROOM,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CACTURNE,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERABSORB
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SEEDBOMB,
			MOVE_SUCKERPUNCH,
			MOVE_FOULPLAY,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SWOOBAT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNAWARE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AIRCUTTER,
			MOVE_DEFOG,
			MOVE_IMPRISON,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZAPDOS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STATIC
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_HEATWAVE,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MACHAMP,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NOGUARD
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_DYNAMICPUNCH,
			MOVE_KNOCKOFF,
			MOVE_ENCORE,
			MOVE_WIDEGUARD,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiLegendaryTowerSpread_Marlon[] =
{
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 172,
		.spdEv = 84,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DARKAURA
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SNARL,
			MOVE_OBLIVIONWING,
			MOVE_FOULPLAY,
			MOVE_SUCKERPUNCH,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 224,
		.defEv = 32,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_PHOTONGEYSER,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DARKRAI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BADDREAMS
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_DARKPULSE,
			MOVE_BLIZZARD,
			MOVE_DARKVOID,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GIRATINA_ORIGIN,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 236,
		.atkEv = 252,
		.defEv = 4,
		.spDefEv = 12,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_GRISEOUS_ORB,
		.moves =
		{
			MOVE_SHADOWFORCE,
			MOVE_DRACOMETEOR,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SPECTRALTHIEF,
			MOVE_CLOSECOMBAT,
			MOVE_ICEPUNCH,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYUREM_BLACK,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 112,
		.spAtkEv = 144,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_FREEZESHOCK,
			MOVE_FUSIONBOLT,
			MOVE_EARTHPOWER,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiLittleCupTowerSpread_Marlon[] =
{
	{
		.species = SPECIES_SANDILE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 180,
		.defEv = 92,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DUSKULL,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 196,
		.defEv = 116,
		.spDefEv = 196,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_NIGHTSHADE,
			MOVE_WILLOWISP,
			MOVE_HELPINGHAND,
			MOVE_TRICKROOM,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CACNEA,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 196,
		.spAtkEv = 76,
		.spDefEv = 196,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDVEIL
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_TEETERDANCE,
			MOVE_DESTINYBOND,
			MOVE_SANDSTORM,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WOOBAT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 236,
		.spDefEv = 92,
		.spdEv = 180,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SIMPLE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_AIRCUTTER,
			MOVE_HEATWAVE,
			MOVE_CALMMIND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MACHOP,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.atkEv = 196,
		.defEv = 36,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NOGUARD
		.item = ITEM_ROOM_SERVICE,
		.moves =
		{
			MOVE_DYNAMICPUNCH,
			MOVE_KNOCKOFF,
			MOVE_ROCKSLIDE,
			MOVE_QUICKGUARD,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CARVANHA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 36,
		.spAtkEv = 236,
		.spdEv = 236,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDROPUMP,
			MOVE_DARKPULSE,
			MOVE_BLIZZARD,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiTowerSpread_Rival[] =
{
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 196,
		.atkEv = 252,
		.spdEv = 60,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OBLIVIOUS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ICICLECRASH,
			MOVE_ICESHARD,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TOUCANNON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SKILLLINK
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ROCKBLAST,
			MOVE_SWAGGER,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GRANBULL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_PLAYROUGH,
			MOVE_ROCKSLIDE,
			MOVE_ICEPUNCH,
			MOVE_FIREPUNCH,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROUGHSKIN
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE,
			MOVE_POISONJAB,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_TYRANITARITE,
		.moves =
		{
			MOVE_ROCKSLIDE,
			MOVE_CRUNCH,
			MOVE_DRAGONDANCE,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_METAGROSS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_METAGROSSITE,
		.moves =
		{
			MOVE_IRONHEAD,
			MOVE_ZENHEADBUTT,
			MOVE_STOMPINGTANTRUM,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiLegendaryTowerSpread_Rival[] =
{
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 12,
		.defEv = 4,
		.spAtkEv = 236,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DROUGHT
		.item = ITEM_RED_ORB,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_EARTHPOWER,
			MOVE_ROAR,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 204,
		.defEv = 204,
		.spAtkEv = 44,
		.spDefEv = 4,
		.spdEv = 52,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRIZZLE
		.item = ITEM_BLUE_ORB,
		.moves =
		{
			MOVE_WATERSPOUT,
			MOVE_ORIGINPULSE,
			MOVE_ICEBEAM,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_MEWTWONITE_X,
		.moves =
		{
			MOVE_ZENHEADBUTT,
			MOVE_DRAINPUNCH,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LUNALA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHADOWSHIELD
		.item = ITEM_LUNALIUM_Z,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_MOONGEISTBEAM,
			MOVE_DAZZLINGGLEAM,
			MOVE_TAILWIND,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VICTINI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 96,
		.spAtkEv = 160,
		.spDefEv = 128,
		.spdEv = 124,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VICTORYSTAR
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_BLUEFLARE,
			MOVE_GLACIATE,
			MOVE_DAZZLINGGLEAM,
			MOVE_UTURN,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZERAORA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.atkEv = 116,
		.spDefEv = 72,
		.spdEv = 192,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_PLASMAFISTS,
			MOVE_VOLTSWITCH,
			MOVE_FAKEOUT,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiLittleCupTowerSpread_Rival[] =
{
	{
		.species = SPECIES_SWINUB,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 196,
		.defEv = 116,
		.spDefEv = 196,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ICICLECRASH,
			MOVE_ROCKSLIDE,
			MOVE_STEALTHROCK,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PIKIPEK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 76,
		.atkEv = 236,
		.spDefEv = 196,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PICKUP
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_DRILLPECK,
			MOVE_BRICKBREAK,
			MOVE_SMACKDOWN,
			MOVE_TAILWIND,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNUBBULL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 196,
		.defEv = 116,
		.spDefEv = 196,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_PLAYROUGH,
			MOVE_EARTHQUAKE,
			MOVE_WILDCHARGE,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GIBLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 196,
		.defEv = 76,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROUGHSKIN
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRAGONCLAW,
			MOVE_EARTHQUAKE,
			MOVE_ROCKSLIDE,
			MOVE_POISONJAB,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LARVITAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 244,
		.defEv = 36,
		.spDefEv = 196,
		.spdEv = 28,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDVEIL
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_ROCKSLIDE,
			MOVE_BULLDOZE,
			MOVE_STEALTHROCK,
			MOVE_SANDSTORM,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BELDUM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 236,
		.defEv = 36,
		.spDefEv = 196,
		.spdEv = 36,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_IRONHEAD,
			MOVE_ZENHEADBUTT,
			MOVE_TAKEDOWN,
			MOVE_IRONDEFENSE,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiTowerSpread_Jax[] =
{
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 36,
		.spdEv = 220,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_BRAVEBIRD,
			MOVE_CLOSECOMBAT,
			MOVE_UTURN,
			MOVE_FINALGAMBIT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 236,
		.spAtkEv = 252,
		.spdEv = 20,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGNETPULL
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_FLASHCANNON,
			MOVE_METALSOUND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOLURK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_HIGHHORSEPOWER,
			MOVE_SHADOWPUNCH,
			MOVE_HEAVYSLAM,
			MOVE_STEALTHROCK,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 156,
		.spAtkEv = 92,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_DOUBLEEDGE,
			MOVE_HYPERVOICE,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PYROAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNNERVE
		.item = ITEM_FIRE_GEM,
		.moves =
		{
			MOVE_HEATWAVE,
			MOVE_HYPERVOICE,
			MOVE_SNARL,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GASTRODON,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 236,
		.defEv = 152,
		.spAtkEv = 36,
		.spDefEv = 84,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_ICYWIND,
			MOVE_RECOVER,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiLegendaryTowerSpread_Jax[] =
{
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 244,
		.atkEv = 4,
		.defEv = 20,
		.spDefEv = 76,
		.spdEv = 164,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AIRLOCK
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRAGONASCENT,
			MOVE_CRUNCH,
			MOVE_EARTHPOWER,
			MOVE_EXTREMESPEED,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 188,
		.defEv = 180,
		.spAtkEv = 68,
		.spDefEv = 12,
		.spdEv = 60,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FAIRYAURA
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_DAZZLINGGLEAM,
			MOVE_GEOMANCY,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_NAGANADEL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SLUDGEBOMB,
			MOVE_DRAGONPULSE,
			MOVE_FIREBLAST,
			MOVE_TAILWIND,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LANDORUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_SLUDGEBOMB,
			MOVE_HIDDENPOWER, //TYPE_ICE
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HIGHJUMPKICK,
			MOVE_POISONJAB,
			MOVE_ICEBEAM,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARCEUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MULTITYPE
		.item = ITEM_PIXIE_PLATE,
		.moves =
		{
			MOVE_JUDGMENT,
			MOVE_EARTHPOWER,
			MOVE_RECOVER,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread gMultiLittleCupTowerSpread_Jax[] =
{
	{
		.species = SPECIES_STARLY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 36,
		.defEv = 36,
		.spAtkEv = 196,
		.spDefEv = 196,
		.spdEv = 36,
		.ability = FRONTIER_ABILITY_1, //ABILITY_KEENEYE
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_AIRCUTTER,
			MOVE_HEATWAVE,
			MOVE_SWIFT,
			MOVE_TAILWIND,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGNEMITE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 36,
		.spAtkEv = 236,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGNETPULL
		.item = ITEM_BERRY_JUICE,
		.moves =
		{
			MOVE_ELECTROWEB,
			MOVE_FLASHCANNON,
			MOVE_VOLTSWITCH,
			MOVE_RECYCLE,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GOLETT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.atkEv = 244,
		.defEv = 36,
		.spDefEv = 196,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_SNOWBALL,
		.moves =
		{
			MOVE_STOMPINGTANTRUM,
			MOVE_SHADOWPUNCH,
			MOVE_FLING,
			MOVE_STEALTHROCK,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SHELLOS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 228,
		.defEv = 132,
		.spDefEv = 100,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_EARTHPOWER,
			MOVE_ICYWIND,
			MOVE_CLEARSMOG,
			MOVE_RECOVER,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BAGON,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 236,
		.spAtkEv = 36,
		.spDefEv = 36,
		.spdEv = 196,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ROCKHEAD
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRACOMETEOR,
			MOVE_INCINERATE,
			MOVE_ROCKSLIDE,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LITLEO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 72,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 180,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNNERVE
		.item = ITEM_NORMAL_GEM,
		.moves =
		{
			MOVE_HEATWAVE,
			MOVE_HYPERVOICE,
			MOVE_SNARL,
			MOVE_YAWN,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

#endif
