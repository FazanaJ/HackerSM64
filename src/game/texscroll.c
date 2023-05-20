#include "types.h"
#include "include/segment_symbols.h"
#include "memory.h"
#include "engine/math_util.h"
#include "src/engine/behavior_script.h"
#include "tile_scroll.h"
#include "texscroll.h"
#include "string.h"
#include "engine/graph_node.h"

#ifdef TARGET_N64
#define SCROLL_CONDITION(condition) condition
#else
#define SCROLL_CONDITION(condition) 1
#endif

extern Vtx ttt_dl_Bushes_mesh_layer_4_vtx_0[252];
extern Vtx ttt_dl_tree_003_mesh_layer_4_vtx_0[511];
extern Vtx treeBase2[252];
extern Vtx treeBase3[511];
extern u16 gAreaUpdateCounter;
extern u8 gSetTree;

Gfx *rotate_fan(s32 callContext, struct GraphNode *node, UNUSED Mat4 *mtx) {
    struct GraphNodeGenerated *asGenerated = (struct GraphNodeGenerated *) node;

    if (callContext == GEO_CONTEXT_RENDER) {
        struct GraphNodeTranslationRotation *rotNode = (struct GraphNodeTranslationRotation *) node->next;
        rotNode->rotation[1] += 0x1000;
    }
    return NULL;
}

void forest_bushies(void) {
	f32 moveCount;
	Vtx *verts;
	Vtx *vertsBase;
	if (gSetTree == 0) {
		memcpy(segmented_to_virtual(&treeBase2), segmented_to_virtual(&ttt_dl_Bushes_mesh_layer_4_vtx_0), sizeof(Vtx) * 252);
		memcpy(segmented_to_virtual(&treeBase3), segmented_to_virtual(&ttt_dl_tree_003_mesh_layer_4_vtx_0), sizeof(Vtx) * 511);
		gSetTree = 1;
	}
	verts = segmented_to_virtual(&ttt_dl_Bushes_mesh_layer_4_vtx_0);
	vertsBase = segmented_to_virtual(&treeBase2);
	for (s32 i = (gAreaUpdateCounter & 1); i < 252; i += 2) {
		moveCount = sins((gAreaUpdateCounter * 2500.0f) + (i * 0x2000)) * 4.0f;
		verts[i].v.ob[0] = vertsBase[i].v.ob[0] + moveCount;
		verts[i].v.ob[1] = vertsBase[i].v.ob[1] + moveCount;
		verts[i].v.ob[2] = vertsBase[i].v.ob[2] + moveCount;
	}
	verts = segmented_to_virtual(&ttt_dl_tree_003_mesh_layer_4_vtx_0);
	vertsBase = segmented_to_virtual(&treeBase3);
	for (s32 i = (gAreaUpdateCounter & 1); i < 511; i += 2) {
		moveCount = sins((gAreaUpdateCounter * 2500.0f) + (i * 0x2000)) * 5.0f;
		verts[i].v.ob[0] = vertsBase[i].v.ob[0] + moveCount;
		verts[i].v.ob[1] = vertsBase[i].v.ob[1] + moveCount;
		verts[i].v.ob[2] = vertsBase[i].v.ob[2] + moveCount;
	}
}

#include "src/game/texscroll/ttt_texscroll.inc.c"
void scroll_textures() {
	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ttt_segment_7SegmentRomStart)) {
		scroll_textures_ttt();
		forest_bushies();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ttt_segment_7SegmentRomStart)) {
		scroll_textures_ttt();
	}

}
