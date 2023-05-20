#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"


/* Fast64 begin persistent block [includes] */
Vtx treeBase2[252];
Vtx treeBase3[511];
u8 gSetTree = 0;
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/ttt/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttt_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x7, _ttt_segment_7SegmentRomStart, _ttt_segment_7SegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x5, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0xc, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x6, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0xd, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_14), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttt_area_1),
		OBJECT(MODEL_NONE, -2944, 4, 2090, 0, 0, 0, 0x00000000, bhvTripletButterfly),
		OBJECT(MODEL_NONE, -5253, 34, 2937, 0, 0, 0, 0x00000000, bhvTripletButterfly),
		OBJECT(MODEL_NONE, -1819, 1, 711, 0, 0, 0, 0x00000000, bhvTripletButterfly),
		OBJECT(MODEL_NONE, -4547, -54, 1390, 0, 0, 0, 0x00000000, bhvTripletButterfly),
		OBJECT(MODEL_NONE, -4104, -41, 5736, 0, 0, 0, 0x00000000, bhvTripletButterfly),
		OBJECT(MODEL_NONE, -6845, -83, 839, 0, 0, 0, 0x00000000, bhvTripletButterfly),
		OBJECT(MODEL_BUTTERFLY, -5238, -45, 657, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -6616, -108, 1168, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -6066, -123, 2903, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -4629, 92, 2845, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -3000, -83, 1330, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -1585, -11, 1473, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -2064, -62, 2243, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -4327, -39, 5834, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -3106, 43, 2936, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_BUTTERFLY, -3990, -40, 846, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_YELLOW_COIN, -3629, 964, 3110, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_NONE, -2476, 541, -2566, 0, 51, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5408, 2163, -2692, 0, -8, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3179, 1016, 2338, 0, 156, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1679, -36, -452, 0, 0, 0, (1 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4128, -97, -2347, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5239, 159, 3357, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5370, -191, 1843, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -3859, 895, 3020, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4030, 822, 3047, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4241, 731, 3139, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4405, 629, 3379, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4387, 519, 3748, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -4260, 460, 3965, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3918, 360, 4100, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3566, 237, 3953, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -3354, 119, 3726, 0, 156, 0, (0 << 16), bhvOneCoin),
		OBJECT(MODEL_NONE, -420, -826, -2931, 0, 0, 0, (1 << 16), bhvFishSpawner),
		OBJECT(MODEL_NONE, 263, -1418, -2861, 0, 0, 0, (1 << 16), bhvFishSpawner),
		OBJECT(MODEL_NONE, -1483, -1628, -4456, 0, 0, 0, (1 << 16), bhvFishSpawner),
		OBJECT(MODEL_NONE, -1666, -1248, -5932, 0, 0, 0, (1 << 16), bhvFishSpawner),
		OBJECT(MODEL_NONE, 1703, -963, -6371, 0, 0, 0, (1 << 16), bhvFishSpawner),
		OBJECT(MODEL_GOOMBA, -3475, 689, -3248, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5042, 52, 2811, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5470, -69, 941, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4068, 68, 2320, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3352, 869, 2629, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2920, 835, 1882, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3036, 52, 3177, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3237, -59, 1279, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4318, -37, 6151, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3720, -23, 5159, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4591, -21, 5519, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1832, -31, 1720, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3873, 7, 1729, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4188, 837, -3613, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4434, 923, -4372, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2828, 389, -2808, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5711, 1871, -2055, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5359, 1819, -2557, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5266, 1466, -3374, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4120, 1699, -1103, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_RED_COIN, -147, 126, -4579, 0, 0, 0, (1 << 16), bhvRedCoin),
		OBJECT(MODEL_TRANSPARENT_STAR, 276, 90, -4868, 0, 0, 0, (2 << 16), bhvRedCoinStarMarker),
		OBJECT(MODEL_NONE, 276, 258, -4868, 0, 0, 0, (1 << 16), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, 38, -1960, -3159, 0, 0, 0, (1 << 16), bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1249, -2122, -2512, 0, 0, 0, (1 << 16), bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1485, -1562, -5425, 0, 0, 0, (1 << 16), bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -90, -1885, -6719, 0, 0, 0, (1 << 16), bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1620, -1679, -5866, 0, 0, 0, (1 << 16), bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 740, 1120, -6056, 0, 0, 0, (1 << 16), bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -776, -2030, -2829, 0, 0, 0, (1 << 16), bhvRedCoin),
		OBJECT(MODEL_EXCLAMATION_BOX, -1109, 266, -1517, 0, 0, 0, (3 << 16), bhvExclamationBox),
		OBJECT(MODEL_SKEETER, -968, -7, -3417, 0, 0, 0, 0x00000000, bhvSkeeter),
		OBJECT(MODEL_SKEETER, 1697, -7, -5268, 0, 0, 0, 0x00000000, bhvSkeeter),
		OBJECT(MODEL_STAR, -2500, 1846, -480, 0, -39, 0, (3 << 16), bhvStar),
		OBJECT(MODEL_STAR, -5248, 1783, 3382, 0, -39, 0, (0 << 16), bhvStar),
		TERRAIN(ttt_area_1_collision),
		ROOMS(ttt_area_1_collision_rooms),
		MACRO_OBJECTS(ttt_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_WATER),
		TERRAIN_TYPE(TERRAIN_SAND),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
